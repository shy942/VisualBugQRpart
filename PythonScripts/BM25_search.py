import os
import lucene
import sys
from java.nio.file import Paths
from org.apache.lucene.analysis.standard import StandardAnalyzer
from org.apache.lucene.index import DirectoryReader
from org.apache.lucene.queryparser.classic import QueryParser
from org.apache.lucene.search import IndexSearcher
from org.apache.lucene.search.similarities import BM25Similarity
from org.apache.lucene.store import FSDirectory


# modify global variables to specify folder paths

# folder where all projects constructed queries are contained
# constructed_queries_root = "../ExampleProjectData/ConstructedQueries/UIwithText/"
constructed_queries_root = "../ExampleProjectData/ConstructedQueries/"
constructed_queries_root_QR = "../QR-Part/ConstructedQueries-QR/"

# folder where all projects constructed indexes are stored
#project_indexes_root = "../ExampleProjectData/ProjectIndexes"
project_indexes_root = "../ExampleProjectData//ProjectIndexes"

# folder to store each projects resulting search results
search_results_root = "../ExampleProjectData/SearchResults/"
search_results_root_QR = "../QR-Part/SearchResults-QR/"


# write the results to a file
def save_search_results(search_results, project, store_folder):
    
    number, stem_extension = project.split('_', 1)

    # determine where the results are being saved
    if not os.path.exists(store_folder):
        os.makedirs(store_folder)
    output_file = os.path.join(store_folder, f"{number}_search_results_{stem_extension}.txt")
    print(output_file)
    # iterate through each query and save all of their results
    with open(output_file, 'w',  encoding="utf-8") as f:
        sorted_titles = sorted(search_results.keys())
        
        for title in sorted_titles:
            bug_id, query_type, discard = title.split('_', 2)
            #print(bug_id)
            result_count = len(search_results[title])
            f.write(f"{bug_id},{query_type},{result_count}\n")
            
            for result in search_results[title]:
                filename = result['filename']
                score = result['score']
                f.write(f"{filename},{score:.4f}\n")
                
    print(f"stored results for project {project} to {output_file}")

#def find_max_score(search_results):
 #   sorted_titles = sorted(search_results.keys())
  #  for title in sorted_titles:
   #    for result in search_results[title]:
    #       score = result['score']
     #      print (score)

def search_index(queries, index_folder, project):
    print(project)
    # Open the index directory
    index_dir = FSDirectory.open(Paths.get(index_folder))
    reader = DirectoryReader.open(index_dir)
    searcher = IndexSearcher(reader)
    searcher.setSimilarity(BM25Similarity())
    analyzer = StandardAnalyzer()

    results = {}
    
    # perform the search
    for query_title, query_str in queries.items():
        print(query_title)
        result_list = []
        
        if query_str.strip():
        
            query = QueryParser("content", analyzer).parse(query_str)
            hits = searcher.search(query, 2147483647).scoreDocs
            
            for hit in hits:
                doc = searcher.doc(hit.doc)
                result_list.append({
                    'doc_id': hit.doc,
                    'filename': doc.get("filename"),
                    'content': doc.get("content"),
                    'score': hit.score
                })

        results[query_title] = result_list

    reader.close()
    index_dir.close()

    return results


# gathers all queries for a project using a dictionary with filename as key
def retrieve_queries(query_folder):
    queries = {}
    
    for query_file in os.listdir(query_folder):
        query_file_path = os.path.join(query_folder, query_file)
        
        with open(query_file_path, 'r', encoding='utf-8') as file:
            query_str = file.read().strip()
            
        queries[query_file] = query_str
        
    return queries


def main(query_root, index_root, store_folder):
    
    lucene.initVM()

    # iterate through all projects that have an index 
    for project in os.listdir(index_root):
        print(project)
        # find the specific project folders
        query_folder = os.path.join(query_root, project)
        index_folder = os.path.join(index_root, project)
        
        # ensure there is a respective project folder with queries
        if not os.path.exists(query_folder):
            print(f"Error: cannot find query folder {query_folder}")
            print(f"Couldn't process and is skipping project {project}")
            continue
        
        # get queries, compare to index, and save the results
        queries = retrieve_queries(query_folder)
        search_results = search_index(queries, index_folder, project)
        #find_max_score(search_results)
        save_search_results(search_results, project, store_folder)


if __name__ == "__main__":

    main(constructed_queries_root, project_indexes_root, search_results_root)
    main(constructed_queries_root_QR, project_indexes_root, search_results_root_QR)


