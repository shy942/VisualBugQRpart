dear imgui platform backend glfw renderer open vulkan web gpu info glfw cross platform general purpose library handling windows inputs open vulkan graphics context creation requires glfw prefer glfw glfw feature support implemented features platform clipboard support platform mouse support discriminate mouse touch screen pen windows platform keyboard support add key event function pass gui key values key functions gui key pressed gui key space legacy glfw key values supported imgui disable obsolete keyio set platform gamepad support enable config flags gui config flags nav enable gamepad platform mouse cursor shape visibility disable config flags gui config flags mouse cursor change note resizing cursors requires glfw unmodified imgui impl files project examples folder examples prefer including entire imgui repository project copy submodule build backends learn dear gui faq started documentation local docs folder introduction links imgui cpp changelog minor older stripped git history details emscripten gui impl glfw install emscripten canvas resize callback register canvas selector auto resize glfw window inputs support extra gui key values function inputs revert ignoring mouse data glfw cursor disabled differently user set gui config lags mouse desired accept glfw time returning monotonically increasing windows setup peripherals disconnect happen browser emscripten inputs support add mouse source event discriminate gui mouse source mouse gui mouse source touch screen gui mouse source pen windows custom wnd proc hook inputs fixed key modifiers handling secondary viewports docking branch broken emscripten avoid glfw error glfw gamepad correctly implemented emscripten emulation emscripten registering custom level mouse wheel handler accurate scrolling impulses emscripten inputs fixed mods linux alt text input german keyboard layout lead broken text input revert change resumed mods glfw turns faulty perform dummy glfw error read cancel missing names glfw key perform dummy glfw error read cancel missing mouse cursors errors glfw version combined nullptr null switch inputs renamed gui key mod xxx introduced gui mod xxx names supported inputs honor glfw cursor disabled setting mouse position edit reverted inputs fixed gui impl glfw translate untranslated key case letters osx inputs fixed regression keyboard modifiers events reported incorrectly linux gui impl glfw install callbacks gui impl glfw restore callbacks helpers facilitate user installing callbacks initializing backend inputs replaced short lived add key mods event weeks add key event gui key mod xxx flags confusion inputs calling add key analog event gamepad support writing nav inputs inputs calling add mouse pos event add mouse button event add mouse wheel event api inputs update key mods key event frame input queue framerates breaking change glfw set cursor pos callback called gui impl glfw init xxx install callbacks false install glfw set cursor pos callback backend gui impl glfw cursor pos callback inputs calling add key event add key mods event set key event native data api support gui key range inputs converting glfw untranslated keycodes translated keycodes gui impl glfw key callback function order match behavior backend facilitate glfw lettered shortcuts api breaking change glfw set window focus callback calling add focus event called gui impl glfw init xxx install callbacks false install glfw set window focus callback backend gui impl glfw window focus callback breaking change glfw set cursor enter callback mouse pos correctly reported host platform window hovered focused called gui impl glfw init xxx install callbacks false install glfw set window focus callback callback backend gui impl glfw cursor enter callback reorganized backend pull data single structure facilitate usage multiple contexts xxxx access changed xxxx inputs disable error callback assigning mouse cursors setup generates errors inputs support mouse cursors glfw resizing cursors allowed cursor misc installed user callbacks restored shutdown inputs mapping gui key key pad enter inputs filter character callback calling add input character misc preserve display framebuffer scale main window minimized misc setting backend platform displayed window inputs installing glfw callbacks save user installed chain inputs workaround emscripten handle focus calls inputs support gui mouse cursor hand cursor misc extracted imgui impl glfw cpp combined glfw open vulkan examples misc setup backend flags gui backend flags mouse cursors flag honor gui config flags mouse cursor change flag inputs support mouse cursors gui mouse cursor passed glfw set cursor misc removed gui shutdown wip user create context destroy context inputs mapping gui key space inputs gamepad support gui config flags nav enable gamepad set inputs honoring set mouse pos repositioning mouse navigation gui config flags nav mouse set inputs horizontal mouse wheel support inputs mapping gui key insert inputs mouse pos set flt max flt max mouse unavailable missing misc void user data parameter clipboard function handlers include imgui ifndef imgui disable include imgui impl glfw clang warnings weverything defined clang pragma clang diagnostic push pragma clang diagnostic wold style cast warning style cast pragma clang diagnostic wsign conversion warning implicit conversion signedness endif glfw include glfw glfw ifdef win undef apientry define glfw expose native win include glfw glfw native glfw win window endif ifdef apple define glfw expose native cocoa include glfw glfw native glfw cocoa window endif ifdef emscripten include emscripten include emscripten html endif gather version tests define order easily features version dependent define glfw version combined glfw version major glfw version minor glfw version revision ifdef glfw resize nesw cursor nice people pulled glfw define cursors defines fixme remove glfw released define glfw cursors glfw version combined glfw resize cursor glfw resize nesw cursor glfw resize nwse cursor glfw allowed cursor define glfw cursors endif define glfw gamepad api glfw version combined glfw gamepad api define glfw getkeyname glfw version combined glfw key define glfw geterror glfw version combined glfw error glfw data enum glfw client api glfw client api unknown glfw client api open glfw client api vulkan struct gui impl glfw data glf wwindow window glfw client api client api double time glf wwindow mouse window glf wcursor mouse cursors gui mouse cursor count vec valid mouse pos bool installed callbacks bool callbacks chain windows ifdef emscripten const char canvas selector endif chain glfw callbacks callbacks user installed callbacks glf wwindowfocusfun prev user callback window focus glf wcursorposfun prev user callback cursor pos glf wcursorenterfun prev user callback cursor enter glf wmousebuttonfun prev user callback mousebutton glf wscrollfun prev user callback scroll glf wkeyfun prev user callback key glf wcharfun prev user callback char glf wmonitorfun prev user callback monitor ifdef win wndproc glfw wnd proc endif gui impl glfw data memset void sizeof backend data stored backend platform user data support multiple dear gui contexts preferred docking branch multi viewports single dear gui context multiple windows multiple dear gui contexts fixme multi context support tested dysfunctional backend glfw poll events process windows events called register callbacks passing install callbacks false gui impl glfw init xxx functions set current dear imgui context callbacks store glfw window gui context map handle backend adding bit extra complexity fixme shared resources mouse cursor shape gamepad mishandled multi context static gui impl glfw data gui impl glfw backend data return gui current context gui impl glfw data gui backend platform user data nullptr functions static const char gui impl glfw clipboard text void user data return glfw clipboard string glf wwindow user data static void gui impl glfw set clipboard text void user data const char text glfw set clipboard string glf wwindow user data text static gui key gui impl glfw key gui key int key switch key case glfw key tab return gui key tab case glfw key left return gui key left arrow case glfw key return gui key arrow case glfw key return gui key arrow case glfw key return gui key arrow case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key insert return gui key insert case glfw key delete return gui key delete case glfw key backspace return gui key backspace case glfw key space return gui key space case glfw key enter return gui key enter case glfw key escape return gui key escape case glfw key apostrophe return gui key apostrophe case glfw key comma return gui key comma case glfw key return gui key case glfw key period return gui key period case glfw key slash return gui key slash case glfw key semicolon return gui key semicolon case glfw key equal return gui key equal case glfw key left bracket return gui key left bracket case glfw key backslash return gui key backslash case glfw key bracket return gui key bracket case glfw key grave accent return gui key grave accent case glfw key caps lock return gui key caps lock case glfw key scroll lock return gui key scroll lock case glfw key num lock return gui key num lock case glfw key print screen return gui key print screen case glfw key pause return gui key pause case glfw key return gui key keypad case glfw key return gui key keypad case glfw key return gui key keypad case glfw key return gui key keypad case glfw key return gui key keypad case glfw key return gui key keypad case glfw key return gui key keypad case glfw key return gui key keypad case glfw key return gui key keypad case glfw key return gui key keypad case glfw key decimal return gui key keypad decimal case glfw key divide return gui key keypad divide case glfw key multiply return gui key keypad multiply case glfw key subtract return gui key keypad subtract case glfw key add return gui key keypad add case glfw key enter return gui key keypad enter case glfw key equal return gui key keypad equal case glfw key left shift return gui key left shift case glfw key left control return gui key left ctrl case glfw key left alt return gui key left alt case glfw key left super return gui key left super case glfw key shift return gui key shift case glfw key control return gui key ctrl case glfw key alt return gui key alt case glfw key super return gui key super case glfw key menu return gui key menu case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key case glfw key return gui key default return gui key include current pressed released modifier key mods flags submitted glfw static void gui impl glfw update key modifiers glf wwindow window gui gui add key event gui mod ctrl glfw key window glfw key left control glfw press glfw key window glfw key control glfw press add key event gui mod shift glfw key window glfw key left shift glfw press glfw key window glfw key shift glfw press add key event gui mod alt glfw key window glfw key left alt glfw press glfw key window glfw key alt glfw press add key event gui mod super glfw key window glfw key left super glfw press glfw key window glfw key super glfw press static bool gui impl glfw chain callback glf wwindow window gui impl glfw data gui impl glfw backend data return callbacks chain windows true window window void gui impl glfw mouse button callback glf wwindow window int button int action int mods gui impl glfw data gui impl glfw backend data prev user callback mousebutton nullptr gui impl glfw chain callback window prev user callback mousebutton window button action mods gui impl glfw update key modifiers window gui gui button button gui mouse button count add mouse button event button action glfw press void gui impl glfw scroll callback glf wwindow window double xoffset double yoffset gui impl glfw data gui impl glfw backend data prev user callback scroll nullptr gui impl glfw chain callback window prev user callback scroll window xoffset yoffset ifdef emscripten ignore glfw events processed gui impl emscripten wheel callback return endif gui gui add mouse wheel event float xoffset float yoffset static int gui impl glfw translate untranslated key int key int scancode glfw getkeyname defined emscripten glfw attempts untranslate framework making lettered shortcuts difficult reasons glfw wasd type game controls lettered shortcuts ihmo change differently details adding workaround undo translated untranslated translated lossy process cover edge cases cover common cases key glfw key key glfw key equal return key glf werrorfun prev error callback glfw set error callback nullptr const char key glfw key key scancode glfw set error callback prev error callback glfw geterror defined emscripten eat errors void glfw error nullptr endif key key key const char char names const int char glfw key grave accent glfw key glfw key equal glfw key left bracket glfw key bracket glfw key backslash glfw key comma glfw key semicolon glfw key apostrophe glfw key period glfw key slash assert arraysize char names arraysize char key key key glfw key key key key key glfw key key key key key glfw key key const char strchr char names key key char char names action glfw press printf key scancode key scancode key unused scancode endif return key void gui impl glfw key callback glf wwindow window int keycode int scancode int action int mods gui impl glfw data gui impl glfw backend data prev user callback key nullptr gui impl glfw chain callback window prev user callback key window keycode scancode action mods action glfw press action glfw release return gui impl glfw update key modifiers window keycode gui impl glfw translate untranslated key keycode scancode gui gui gui key imgui key gui impl glfw key gui key keycode add key event imgui key action glfw press set key event native data imgui key keycode scancode support legacy indexing user code void gui impl glfw window focus callback glf wwindow window int focused gui impl glfw data gui impl glfw backend data prev user callback window focus nullptr gui impl glfw chain callback window prev user callback window focus window focused gui gui add focus event focused void gui impl glfw cursor pos callback glf wwindow window double double gui impl glfw data gui impl glfw backend data prev user callback cursor pos nullptr gui impl glfw chain callback window prev user callback cursor pos window gui gui add mouse pos event float float valid mouse pos vec float float workaround send spurious leave enter events lose position restore leave enter void gui impl glfw cursor enter callback glf wwindow window int entered gui impl glfw data gui impl glfw backend data prev user callback cursor enter nullptr gui impl glfw chain callback window prev user callback cursor enter window entered gui gui entered mouse window window add mouse pos event valid mouse pos valid mouse pos entered mouse window window valid mouse pos mouse pos mouse window nullptr add mouse pos event flt max flt max void gui impl glfw char callback glf wwindow window unsigned int gui impl glfw data gui impl glfw backend data prev user callback char nullptr gui impl glfw chain callback window prev user callback char window gui gui add input character void gui impl glfw monitor callback glf wmonitor int unused master branch docking branch declare install callbacks install ifdef emscripten static bool gui impl emscripten wheel callback int const emscripten wheel event void mimic emscripten handle wheel sdl equivalent glfw emulation layer incorrect quantizing preventing small values float multiplier delta mode dom delta pixel multiplier pixels step delta mode dom delta multiplier lines step delta mode dom delta multiplier steps float wheel delta multiplier float wheel delta multiplier gui gui add mouse wheel event wheel wheel imgui debug log emsc mode feed int delta mode delta delta delta wheel wheel return true endif ifdef win glfw distinguish mouse touch screen pen add support win based imgui impl win rely touch screen info trickle inputs differently static gui mouse source mouse source message extra info lparam extra info message extra info extra info ffffff return gui mouse source pen extra info ffffff return gui mouse source touch screen return gui mouse source mouse static lresult callback gui impl glfw wnd proc hwnd wnd uint msg wparam param lparam param gui impl glfw data gui impl glfw backend data switch msg case mousemove case ncmousemove case lbuttondown case lbuttondblclk case lbuttonup case rbuttondown case rbuttondblclk case rbuttonup case mbuttondown case mbuttondblclk case mbuttonup case xbuttondown case xbuttondblclk case xbuttonup gui add mouse source event mouse source message extra info break return window proc glfw wnd proc wnd msg param param endif void gui impl glfw install callbacks glf wwindow window gui impl glfw data gui impl glfw backend data assert installed callbacks false callbacks installed assert window window prev user callback window focus glfw set window focus callback window gui impl glfw window focus callback prev user callback cursor enter glfw set cursor enter callback window gui impl glfw cursor enter callback prev user callback cursor pos glfw set cursor pos callback window gui impl glfw cursor pos callback prev user callback mousebutton glfw set mouse button callback window gui impl glfw mouse button callback prev user callback scroll glfw set scroll callback window gui impl glfw scroll callback prev user callback key glfw set key callback window gui impl glfw key callback prev user callback char glfw set char callback window gui impl glfw char callback prev user callback monitor glfw set monitor callback gui impl glfw monitor callback installed callbacks true void gui impl glfw restore callbacks glf wwindow window gui impl glfw data gui impl glfw backend data assert installed callbacks true callbacks installed assert window window glfw set window focus callback window prev user callback window focus glfw set cursor enter callback window prev user callback cursor enter glfw set cursor pos callback window prev user callback cursor pos glfw set mouse button callback window prev user callback mousebutton glfw set scroll callback window prev user callback scroll glfw set key callback window prev user callback key glfw set char callback window prev user callback char glfw set monitor callback prev user callback monitor installed callbacks false prev user callback window focus nullptr prev user callback cursor enter nullptr prev user callback cursor pos nullptr prev user callback mousebutton nullptr prev user callback scroll nullptr prev user callback key nullptr prev user callback char nullptr prev user callback monitor nullptr set true enable chaining installed callbacks windows including secondary viewports created backends user false default meaning chain callbacks main viewport set true default user callbacks code testing window parameter callback set true user callback code testing window parameter void gui impl glfw set callbacks chain windows bool chain windows gui impl glfw data gui impl glfw backend data callbacks chain windows chain windows static bool gui impl glfw init glf wwindow window bool install callbacks glfw client api client api gui gui assert backend platform user data nullptr initialized platform backend printf glfw version glfw version major glfw version minor glfw version revision glfw version combined setup backend capabilities flags gui impl glfw data gui impl glfw data backend platform user data void backend platform imgui impl glfw backend flags gui backend flags mouse cursors honor mouse cursor values optional backend flags gui backend flags set mouse pos honor set mouse pos requests optional rarely window window time set clipboard text gui impl glfw set clipboard text clipboard text gui impl glfw clipboard text clipboard user data window create mouse cursors design cursors user configurable cursors missing cursor exist glfw emit error printed app temporarily disable error reporting missing cursors return nullptr update mouse cursor function arrow cursor glf werrorfun prev error callback glfw set error callback nullptr mouse cursors gui mouse cursor arrow glfw create standard cursor glfw arrow cursor mouse cursors gui mouse cursor text input glfw create standard cursor glfw ibeam cursor mouse cursors gui mouse cursor resize glfw create standard cursor glfw vresize cursor mouse cursors gui mouse cursor resize glfw create standard cursor glfw hresize cursor mouse cursors gui mouse cursor hand glfw create standard cursor glfw hand cursor glfw cursors mouse cursors gui mouse cursor resize glfw create standard cursor glfw resize cursor mouse cursors gui mouse cursor resize nesw glfw create standard cursor glfw resize nesw cursor mouse cursors gui mouse cursor resize nwse glfw create standard cursor glfw resize nwse cursor mouse cursors gui mouse cursor allowed glfw create standard cursor glfw allowed cursor mouse cursors gui mouse cursor resize glfw create standard cursor glfw arrow cursor mouse cursors gui mouse cursor resize nesw glfw create standard cursor glfw arrow cursor mouse cursors gui mouse cursor resize nwse glfw create standard cursor glfw arrow cursor mouse cursors gui mouse cursor allowed glfw create standard cursor glfw arrow cursor endif glfw set error callback prev error callback glfw geterror defined emscripten eat errors void glfw error nullptr endif chain glfw callbacks callbacks user installed callbacks install callbacks gui impl glfw install callbacks window register emscripten wheel callback workaround issue emscripten glfw emulation intentionally check install callbacks users set false glfw callback fixme break chaining case user registered emscripten callback ifdef emscripten emscripten set wheel callback emscripten event target document nullptr false gui impl emscripten wheel callback endif set platform dependent data viewport gui viewport main viewport gui main viewport ifdef win main viewport platform handle raw glfw win window window elif defined apple main viewport platform handle raw void glfw cocoa window window unused main viewport endif windows register wnd proc hook intercept messages ifdef win glfw wnd proc wndproc window long ptr hwnd main viewport platform handle raw gwlp wndproc assert glfw wnd proc nullptr set window long ptr hwnd main viewport platform handle raw gwlp wndproc long ptr gui impl glfw wnd proc endif client api client api return true bool gui impl glfw init open glf wwindow window bool install callbacks return gui impl glfw init window install callbacks glfw client api open bool gui impl glfw init vulkan glf wwindow window bool install callbacks return gui impl glfw init window install callbacks glfw client api vulkan bool gui impl glfw init glf wwindow window bool install callbacks return gui impl glfw init window install callbacks glfw client api unknown void gui impl glfw shutdown gui impl glfw data gui impl glfw backend data assert nullptr platform backend shutdown shutdown gui gui installed callbacks gui impl glfw restore callbacks window ifdef emscripten emscripten set wheel callback emscripten event target document nullptr false nullptr endif gui mouse cursor cursor cursor gui mouse cursor count cursor glfw destroy cursor mouse cursors cursor windows register wnd proc hook intercept messages ifdef win gui viewport main viewport gui main viewport set window long ptr hwnd main viewport platform handle raw gwlp wndproc long ptr glfw wnd proc glfw wnd proc nullptr endif backend platform nullptr backend platform user data nullptr backend flags gui backend flags mouse cursors gui backend flags set mouse pos gui backend flags gamepad delete static void gui impl glfw update mouse data gui impl glfw data gui impl glfw backend data gui gui braces reduce diff multi viewports support docking branch glf wwindow window window ifdef emscripten const bool window focused true const bool window focused glfw window attrib window glfw focused endif window focused optional set mouse position dear gui requested rarely gui config flags nav enable set mouse pos enabled user set mouse pos glfw set cursor pos window double mouse pos double mouse pos optional fallback provide mouse position focused gui impl glfw cursor pos callback hovered captured mouse window nullptr double mouse mouse glfw cursor pos window mouse mouse valid mouse pos vec float mouse float mouse add mouse pos event float mouse float mouse static void gui impl glfw update mouse cursor gui gui gui impl glfw data gui impl glfw backend data config flags gui config flags mouse cursor change glfw input mode window glfw cursor glfw cursor disabled return gui mouse cursor imgui cursor gui mouse cursor braces reduce diff multi viewports support docking branch glf wwindow window window imgui cursor gui mouse cursor mouse draw cursor hide mouse cursor imgui drawing cursor glfw set input mode window glfw cursor glfw cursor hidden mouse cursor fixme platform unfocused windows fail changing mouse cursor glfw works glfw set cursor window mouse cursors imgui cursor mouse cursors imgui cursor mouse cursors gui mouse cursor arrow glfw set input mode window glfw cursor glfw cursor normal update gamepad inputs static inline float saturate float return static void gui impl glfw update gamepads gui gui config flags gui config flags nav enable gamepad fixme technically feeding gamepad depend regular inputs return backend flags gui backend flags gamepad glfw gamepad api defined emscripten glf wgamepadstate gamepad glfw gamepad glfw joystick gamepad return define map button key button unused add key event key gamepad buttons button define map analog key axis unused float gamepad axes axis add key analog event key saturate int axes count buttons count const float axes glfw joystick axes glfw joystick axes count const unsigned char buttons glfw joystick buttons glfw joystick buttons count axes count buttons count return define map button key unused button add key event key buttons count button buttons button glfw press define map analog key unused axis float axes count axis axes axis add key analog event key saturate endif backend flags gui backend flags gamepad map button gui key gamepad start glfw gamepad button start map button gui key gamepad glfw gamepad button map button gui key gamepad face left glfw gamepad button xbox square map button gui key gamepad face glfw gamepad button xbox circle map button gui key gamepad face glfw gamepad button xbox triangle map button gui key gamepad face glfw gamepad button xbox cross map button gui key gamepad dpad left glfw gamepad button dpad left map button gui key gamepad dpad glfw gamepad button dpad map button gui key gamepad dpad glfw gamepad button dpad map button gui key gamepad dpad glfw gamepad button dpad map button gui key gamepad glfw gamepad button left bumper map button gui key gamepad glfw gamepad button bumper map analog gui key gamepad glfw gamepad axis left trigger map analog gui key gamepad glfw gamepad axis trigger map button gui key gamepad glfw gamepad button left thumb map button gui key gamepad glfw gamepad button thumb map analog gui key gamepad stick left glfw gamepad axis left map analog gui key gamepad stick glfw gamepad axis left map analog gui key gamepad stick glfw gamepad axis left map analog gui key gamepad stick glfw gamepad axis left map analog gui key gamepad stick left glfw gamepad axis map analog gui key gamepad stick glfw gamepad axis map analog gui key gamepad stick glfw gamepad axis map analog gui key gamepad stick glfw gamepad axis undef map button undef map analog void gui impl glfw frame gui gui gui impl glfw data gui impl glfw backend data assert nullptr gui impl glfw init xxx setup display size frame accommodate window resizing int int display display glfw window size window glfw framebuffer size window display display display size vec float float display framebuffer scale vec float display float float display float setup time step accept glfw time returning monotonically increasing disconnecting peripherals emscripten double current time glfw time current time time current time time delta time time float current time time float time current time gui impl glfw update mouse data gui impl glfw update mouse cursor update game controllers enabled gui impl glfw update gamepads ifdef emscripten static bool gui impl glfw canvas size change int event type const emscripten event event void user data gui impl glfw data gui impl glfw data user data double canvas width canvas height emscripten element css size canvas selector canvas width canvas height glfw set window size window int canvas width int canvas height return true static bool gui impl emscripten fullscreen change callback int event type const emscripten fullscreen change event event void user data gui impl glfw data gui impl glfw data user data double canvas width canvas height emscripten element css size canvas selector canvas width canvas height glfw set window size window int canvas width int canvas height return true canvas selector css selector event listener applied element matches query string persist application duration string literal ensure pointer stay valid void gui impl glfw install emscripten canvas resize callback const char canvas selector assert canvas selector nullptr gui impl glfw data gui impl glfw backend data assert nullptr gui impl glfw init xxx canvas selector canvas selector emscripten set resize callback emscripten event target window false gui impl glfw canvas size change emscripten set fullscreenchange callback emscripten event target document false gui impl emscripten fullscreen change callback change size glfw window size canvas gui impl glfw canvas size change emscripten event resize endif defined clang pragma clang diagnostic pop endif endif ifndef imgui disable