import sys
import os
import regex
import ast
from nltk.stem import PorterStemmer
from nltk import download
download('punkt')


# modify global variables to specify folder paths and stemming option 

# folder where all projects containing bug reports are stored
# project_bug_reports_root = "../ExampleProjectData/ProjectBugReports/UIwithText/"
project_bug_reports_root = "../ExampleProjectData/ProjectBugReports/DataWithProcessedImages/"

# folder to store each projects constructed queries
# constructed_queries_root = "../ExampleProjectData/ConstructedQueries/UIwithText/"
constructed_queries_root = "../ExampleProjectData/ConstructedQueries/"
constructed_queries_root_QR = "../QR-Part/ConstructedQueries-QR/"

# read file with backup encoding if utf-8 fails
def read_file(file_path, encoding='utf-8'):
    try:
        with open(file_path, 'r', encoding=encoding) as file:
            return file.read()
    except UnicodeDecodeError:
        # Try a different encoding if UTF-8 fails
        with open(file_path, 'r', encoding='iso-8859-1') as file:
            return file.read()
def preprocess_text_by_single_string(text):
    stopwords = load_stopwords("stop_words_english.txt")
    text = text.split()
    final_text = ''
    for str in text:
        oldStr=str
        #print(oldStr)
        # remove urls and the markdown link
        str = regex.sub(r'\!\[.*?\]\(https?://\S+?\)', '', str) 
        str = regex.sub(r'https?://\S+|www\.\S+', '', str) 
        # split camelCase and snake_case while keeping acronyms
        str = regex.sub(r'([a-z0-9])([A-Z])', r'\1 \2', str)
        str = regex.sub(r'([A-Z]+)([A-Z][a-z])', r'\1 \2', str)
        str = str.replace('_', ' ')
        # remove whitespace, punctuation, numbers
        #text = ' '.join(words)
        str = regex.sub(r"[\s]+|[^\w\s]|[\d]+", " ", str)
        print('\n')
        print(str)
        
        #words = text.split()
        # convert to lowercase and split for list comprehensions
        words = str.lower()
        words_list=words.split()
        
        # remove stopwords 
        words_list = [word for word in words_list if word not in stopwords]
        #print(words_list)
        
        #Part#1 word itself
        part1=''
        if '.' in oldStr:
            #splitDotWord(str)
            part1=''
        else:
            part1=oldStr.lower()
        #Part#2 the processed words

        part2=''
        for word in words_list:
            newword = ''
            if '.' in word:
                newword =  splitDotWord(word)
            else:
                newword = word   
            part2 = part2 + ' ' + newword  
        #print(type(part1))
        #print(type(part2))
        final_str= part1+ ' ' + part2
        #print (final_str)
        final_text = final_text + ' ' + final_str
    #print(final_text.split())
    #return final_text.split()
    return final_text.split()

def splitDotWord(word):
    #print('I am from splitDotWord')
    splitedList = []
    splitedList = word.split('.')
    str2return = ' '
    for eachword in splitedList:
        str2return= str2return + ' ' + eachword
    #print(word.split('.'))
    return str2return


def preprocess_text(text, stopwords, use_stemming):

    # initialize stemmer if needed
    stemmer = PorterStemmer() if use_stemming else None

    # remove urls and the markdown link
    text = regex.sub(r'\!\[.*?\]\(https?://\S+?\)', '', text)
    text = regex.sub(r'https?://\S+|www\.\S+', '', text)
    
    # split camelCase and snake_case while keeping acronyms
    text = regex.sub(r'([a-z0-9])([A-Z])', r'\1 \2', text)
    text = regex.sub(r'([A-Z]+)([A-Z][a-z])', r'\1 \2', text)
    text = text.replace('_', ' ')
    
    # convert to lowercase and split for list comprehensions
    words = text.lower().split()
    
    # remove stopwords 
    words = [word for word in words if word not in stopwords]
    
    # remove whitespace, punctuation, numbers
    text = ' '.join(words)
    text = regex.sub(r"[\s]+|[^\w\s]|[\d]+", " ", text)
    words = text.split()
    
    # remove stopwords again to catch any that were connected to punctuation
    words = [word for word in words if word not in stopwords]
    
    # perform optional stemming
    if use_stemming:
        words = [stemmer.stem(word) for word in words]
        
        # remove any words that became a stop word after stemming
        words = [word for word in words if word not in stopwords]
    
    # remove words with fewer than 3 characters
    words = [word for word in words if len(word) >= 3]
    
    return ' '.join(words)


def preprocess_bug_report(store_path, bug_report_path, bug_report, stopwords, use_stemming):
    
    # gather bug report title and description
    title_path = os.path.join(bug_report_path, 'title.txt')
    description_path = os.path.join(bug_report_path, 'description.txt')
    title = read_file(title_path)
    description = read_file(description_path)
    
    # gather image descriptions and content
    images_info = ""
    files = sorted(os.listdir(bug_report_path))
    for file_name in files:
        if "ImageContent.txt" in file_name:
            file_path = os.path.join(bug_report_path, file_name)
            file_content = read_file(file_path)
            images_info += file_content + "\n"
    
    # preprocessing the bug report text
    baseline_query = preprocess_text(title + " " + description, stopwords, use_stemming)
    extended_query = baseline_query + " " + preprocess_text(images_info, stopwords, use_stemming)

    # preprocessing the bug report text
    #baseline_query = preprocess_text(title + " " + description, stopwords, use_stemming)
    #print(type(baseline_query))
    #extended_query = baseline_query + preprocess_text(images_info, stopwords, use_stemming)

    
    # save files named accordingly
    if use_stemming:
        store_path = store_path + "_stem"
    else:
        store_path = store_path + "_no_stem"
        
    baseline_file_path = os.path.join(store_path, f'{bug_report}_baseline_query.txt')
    extended_file_path = os.path.join(store_path, f'{bug_report}_extended_query.txt')
    os.makedirs(store_path, exist_ok=True)
    
    # save baseline query to file
    with open(baseline_file_path, 'w', encoding='utf-8') as file:
        file.write(baseline_query)
    
    # save extended query to file
    with open(extended_file_path, 'w', encoding='utf-8') as file:
        file.write(extended_query)
        
    print(f"Stored queries for bug report {bug_report} in {store_path}")
    print(len(baseline_query))
    print(len(extended_query))


# read the stopwords
def load_stopwords(file_path):
    with open(file_path, 'r', encoding='utf-8') as file:
        return set(word.strip() for word in file)


def main(projects_root, store_root):

    stopwords = load_stopwords("stop_words_english.txt")

    projects = [name for name in os.listdir(projects_root) if name.isdigit()]
    projects.sort(key=int)
    
    # iterate through projects
    for project in projects:
        project_path = os.path.join(projects_root, project)
        print(project)
        bug_reports = [name for name in os.listdir(project_path) if name.isdigit()]
        bug_reports.sort(key=int)
        
        # iterate through bug reports
        for bug_report in bug_reports:
            bug_report_path = os.path.join(project_path, bug_report)
            store_path = os.path.join(store_root, project)
            #preprocess_bug_report(store_path, bug_report_path, bug_report, stopwords, True)
            preprocess_bug_report(store_path, bug_report_path, bug_report, stopwords, False)


if __name__ == "__main__":
    
    #main(project_bug_reports_root, constructed_queries_root)
    main(project_bug_reports_root, constructed_queries_root_QR)

