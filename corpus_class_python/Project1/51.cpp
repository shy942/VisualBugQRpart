dear imgui platform backend windows standard windows api bits bits applications renderer direct open vulkan implemented features platform clipboard support win core dear imgui platform mouse support discriminate mouse touch screen pen platform keyboard support add key event function pass gui key values key functions gui key pressed gui key space legacy values supported imgui disable obsolete keyio set platform gamepad support enabled config flags gui config flags nav enable gamepad platform mouse cursor shape visibility disable config flags gui config flags mouse cursor change unmodified imgui impl files project examples folder examples prefer including entire imgui repository project copy submodule build backends learn dear gui faq started documentation local docs folder introduction links imgui cpp include imgui ifndef imgui disable include imgui impl win ifndef win lean define win lean endif include windows include windowsx lparam lparam include tchar include dwmapi configuration flags add imconfig file define imgui impl win disable gamepad disable gamepad support meaningful load input dynamically option relevant input gamepad load dll dynamically ifndef imgui impl win disable gamepad include xinput typedef dword winapi pfn input capabilities dword dword xinput capabilities typedef dword winapi pfn input dword xinput endif changelog minor older stripped git history details inputs support extra gui key values function app inputs synthesize key event key snapshot gui key print screen windows emit behavior glfw sdl inputs support keyboard codepage conversion application compiled mbcs mode unicode window gui impl win init open facilitate combining raw win winapi open inputs support add mouse source event discriminate gui mouse source mouse gui mouse source touch screen gui mouse source pen inputs ncmousemove ncmouseleave track mouse position client area decorations app focused inputs flipping mousehwheel horizontal mouse wheel match backends offer consistent horizontal scrolling direction nullptr null switch inputs convert char values multi byte wide char window class registered mbcs unicode inputs renamed gui key mod xxx introduced gui mod xxx names supported inputs replaced short lived add key mods event weeks add key event gui key mod xxx flags confusion inputs calling add key analog event gamepad support writing nav inputs inputs calling add mouse pos event add mouse button event add mouse wheel event api inputs update key mods key event frame input queue framerates inputs update mouse inputs mousemove mouseleave fallback provide focused hovered captured standard pass future input queue api inputs maintain copy mouse buttons mask gui mouse obsoleted inputs calling add key event add key mods event set key event native data api support gui key range inputs lcontrol rcontrol lshift rshift lmenu rmenu completeness calling add focus event setfocus killfocus messages inputs fixed keyboard modifiers reported host window focus inputs mouse pos correctly reported host platform window hovered focused track mouse event receive mouseleave events reorganized backend pull data single structure facilitate usage multiple contexts xxxx access changed xxxx fixed gui impl win enable dpi awareness gui impl win dpi scale monitor handle windows features manifest monitor dpi properly calls set process dpi awareness inputs clearing keyboard array losing focus killfocus gui impl win enable alpha compositing visual studio users link dwmapi lib min gcc ldwmapi fixed gui impl win enable dpi awareness attempting set process dpi awareness shcore dll windows supported windows inputs dynamically loading input dll misc fixed setting display size invalid uninitialized data hwnd closed inputs calling add input character utf support surrogate pairs leading codepoint complete cjk inputs gui impl win enable dpi awareness gui impl win dpi scale hwnd gui impl win dpi scale monitor helper functions inputs support define imgui impl win disable gamepad imgui impl win disable linking xinput inputs support gui mouse cursor allowed mouse cursor inputs filter char calling add input character misc foreground window child active window compatible windows created thread parent inputs support mouse buttons xbutton messages inputs support input gamepads gui config flags nav enable gamepad set user application misc setting backend platform displayed window inputs support gui mouse cursor hand cursor inputs fixed handling mouse wheel messages support fine position messages typically track pads misc extracted imgui impl win cpp combined examples misc setup backend flags gui backend flags mouse cursors gui backend flags set mouse pos flags honor gui config flags mouse cursor change flag inputs support mouse cursors gui mouse cursor setcursor message handling inputs mapping gui key space inputs honoring set mouse pos repositioning mouse navigation gui config flags nav mouse set misc removed gui shutdown wip user create context destroy context inputs horizontal mouse wheel support inputs mapping gui key insert inputs lbuttondblclk double click handlers window classes dblclks flag inputs syskeydown syskeyup handlers menu key read inputs win set capture capture retrieve mouse positions client area dragging inputs win set cursor nullptr mouse draw cursor set struct gui impl win data hwnd wnd hwnd mouse hwnd int mouse tracked area tracked client client area int mouse buttons int time int ticks gui mouse cursor mouse cursor uint keyboard code ifndef imgui impl win disable gamepad bool gamepad bool update gamepad hmodule input dll pfn input capabilities input capabilities pfn input input endif gui impl win data memset void sizeof backend data stored backend platform user data support multiple dear gui contexts preferred docking branch multi viewports single dear gui context multiple windows multiple dear gui contexts fixme multi context support tested dysfunctional backend fixme shared resources mouse cursor shape gamepad mishandled multi context static gui impl win data gui impl win backend data return gui current context gui impl win data gui backend platform user data nullptr functions static void gui impl win update keyboard code retrieve keyboard code required handling unicode windows gui impl win data gui impl win backend data hkl keyboard layout keyboard layout lcid keyboard lcid makelcid hiword keyboard layout sort default locale info keyboard lcid locale return number locale idefaultansicodepage lpstr keyboard code sizeof keyboard code keyboard code acp fallback default ansi code fails static bool gui impl win init void hwnd bool platform gui gui assert backend platform user data nullptr initialized platform backend int perf frequency perf counter query performance frequency large integer perf frequency return false query performance counter large integer perf counter return false setup backend capabilities flags gui impl win data gui impl win data backend platform user data void backend platform imgui impl win backend flags gui backend flags mouse cursors honor mouse cursor values optional backend flags gui backend flags set mouse pos honor set mouse pos requests optional rarely wnd hwnd hwnd ticks perf frequency time perf counter mouse cursor gui mouse cursor count gui impl win update keyboard code set platform dependent data viewport gui main viewport platform handle raw void hwnd unused platform docking branch dynamically load input library ifndef imgui impl win disable gamepad update gamepad true const char xinput dll names xinput dll windows xinput dll direct sdk xinput dll windows vista windows xinput dll direct sdk xinput dll direct sdk int arraysize xinput dll names hmodule dll load library xinput dll names input dll dll input capabilities pfn input capabilities proc address dll input capabilities input pfn input proc address dll input break endif imgui impl win disable gamepad return true imgui impl api bool gui impl win init void hwnd return gui impl win init hwnd false imgui impl api bool gui impl win init open void hwnd open owndc return gui impl win init hwnd true void gui impl win shutdown gui impl win data gui impl win backend data assert nullptr platform backend shutdown shutdown gui gui unload input library ifndef imgui impl win disable gamepad input dll free library input dll endif imgui impl win disable gamepad backend platform nullptr backend platform user data nullptr backend flags gui backend flags mouse cursors gui backend flags set mouse pos gui backend flags gamepad delete static bool gui impl win update mouse cursor gui gui config flags gui config flags mouse cursor change return false gui mouse cursor imgui cursor gui mouse cursor imgui cursor gui mouse cursor mouse draw cursor hide mouse cursor imgui drawing cursor set cursor nullptr mouse cursor lptstr win cursor idc arrow switch imgui cursor case gui mouse cursor arrow win cursor idc arrow break case gui mouse cursor text input win cursor idc ibeam break case gui mouse cursor resize win cursor idc sizeall break case gui mouse cursor resize win cursor idc sizewe break case gui mouse cursor resize win cursor idc sizens break case gui mouse cursor resize nesw win cursor idc sizenesw break case gui mouse cursor resize nwse win cursor idc sizenwse break case gui mouse cursor hand win cursor idc hand break case gui mouse cursor allowed win cursor idc break set cursor load cursor nullptr win cursor return true static bool int return key static void gui impl win add key event gui key key bool int native keycode int native scancode gui gui add key event key set key event native data key native keycode native scancode support legacy indexing user code unused native scancode static void gui impl win process key events workarounds left shift pressed windows tend generate keyup event released gui key gui key left shift lshift gui impl win add key event gui key left shift false lshift gui key gui key shift rshift gui impl win add key event gui key shift false rshift keyup win key passed app win setups glfw gui key gui key left super lwin gui impl win add key event gui key left super false lwin gui key gui key super rwin gui impl win add key event gui key super false rwin static void gui impl win update key modifiers gui gui add key event gui mod ctrl control add key event gui mod shift shift add key event gui mod alt menu add key event gui mod super apps static void gui impl win update mouse data gui impl win data gui impl win backend data gui gui assert wnd hwnd focused window foreground window const bool app focused focused window wnd app focused optional set mouse position dear gui requested rarely gui config flags nav enable set mouse pos enabled user set mouse pos point pos int mouse pos int mouse pos client screen wnd pos set cursor pos pos pos optional fallback provide mouse position focused mousemove hovered captured fills short gap clicking client area ncmouseleave modal gap ncmousemove set mouse pos mouse tracked area point pos cursor pos pos screen client wnd pos add mouse pos event float pos float pos gamepad navigation mapping static void gui impl win update gamepads ifndef imgui impl win disable gamepad gui gui gui impl win data gui impl win backend data config flags gui config flags nav enable gamepad fixme technically feeding gamepad depend regular inputs return calling input frame disconnected gamepads slow refresh gamepad availability calling input capabilities receiving devicechange update gamepad xinput capabilities caps gamepad input capabilities input capabilities xinput flag gamepad caps error success false update gamepad false backend flags gui backend flags gamepad xinput xinput xinput gamepad gamepad xinput gamepad gamepad input nullptr input xinput error success return backend flags gui backend flags gamepad define saturate define map button key button enum add key event key gamepad buttons button enum define map analog key float float float add key analog event key saturate map button gui key gamepad start xinput gamepad start map button gui key gamepad xinput gamepad map button gui key gamepad face left xinput gamepad map button gui key gamepad face xinput gamepad map button gui key gamepad face xinput gamepad map button gui key gamepad face xinput gamepad map button gui key gamepad dpad left xinput gamepad dpad left map button gui key gamepad dpad xinput gamepad dpad map button gui key gamepad dpad xinput gamepad dpad map button gui key gamepad dpad xinput gamepad dpad map button gui key gamepad xinput gamepad left shoulder map button gui key gamepad xinput gamepad shoulder map analog gui key gamepad gamepad left trigger xinput gamepad trigger threshold map analog gui key gamepad gamepad trigger xinput gamepad trigger threshold map button gui key gamepad xinput gamepad left thumb map button gui key gamepad xinput gamepad thumb map analog gui key gamepad stick left gamepad thumb xinput gamepad left thumb deadzone map analog gui key gamepad stick gamepad thumb xinput gamepad left thumb deadzone map analog gui key gamepad stick gamepad thumb xinput gamepad left thumb deadzone map analog gui key gamepad stick gamepad thumb xinput gamepad left thumb deadzone map analog gui key gamepad stick left gamepad thumb xinput gamepad left thumb deadzone map analog gui key gamepad stick gamepad thumb xinput gamepad left thumb deadzone map analog gui key gamepad stick gamepad thumb xinput gamepad left thumb deadzone map analog gui key gamepad stick gamepad thumb xinput gamepad left thumb deadzone undef map button undef map analog endif ifndef imgui impl win disable gamepad void gui impl win frame gui gui gui impl win data gui impl win backend data assert nullptr gui impl win init setup display size frame accommodate window resizing rect rect client rect wnd rect display size vec float rect rect left float rect rect setup time step int current time query performance counter large integer current time delta time float current time time ticks time current time update mouse position gui impl win update mouse data process workarounds windows key handling issues gui impl win process key events workarounds update mouse cursor cursor requested imgui gui mouse cursor mouse cursor mouse draw cursor gui mouse cursor gui mouse cursor mouse cursor mouse cursor mouse cursor mouse cursor gui impl win update mouse cursor update game controllers enabled gui impl win update gamepads distinct xxx keypad enter return extended assign arbitrary code readable codes define keypad enter return map xxx gui key xxx static gui key gui impl win virtual key gui key wparam param switch param case tab return gui key tab case left return gui key left arrow case return gui key arrow case return gui key arrow case return gui key arrow case prior return gui key case return gui key case return gui key case return gui key case insert return gui key insert case delete return gui key delete case return gui key backspace case space return gui key space case return return gui key enter case escape return gui key escape case oem return gui key apostrophe case oem comma return gui key comma case oem return gui key case oem period return gui key period case oem return gui key slash case oem return gui key semicolon case oem return gui key equal case oem return gui key left bracket case oem return gui key backslash case oem return gui key bracket case oem return gui key grave accent case capital return gui key caps lock case scroll return gui key scroll lock case numlock return gui key num lock case snapshot return gui key print screen case pause return gui key pause case numpad return gui key keypad case numpad return gui key keypad case numpad return gui key keypad case numpad return gui key keypad case numpad return gui key keypad case numpad return gui key keypad case numpad return gui key keypad case numpad return gui key keypad case numpad return gui key keypad case numpad return gui key keypad case decimal return gui key keypad decimal case divide return gui key keypad divide case multiply return gui key keypad multiply case subtract return gui key keypad subtract case add return gui key keypad add case keypad enter return gui key keypad enter case lshift return gui key left shift case lcontrol return gui key left ctrl case lmenu return gui key left alt case lwin return gui key left super case rshift return gui key shift case rcontrol return gui key ctrl case rmenu return gui key alt case rwin return gui key super case apps return gui key menu case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case return gui key case browser return gui key app case browser return gui key app default return gui key compilation windows sdk min default win winnt winver versions ifndef mousehwheel define mousehwheel endif ifndef dbt devnodes changed define dbt devnodes changed endif win message handler process win mouse keyboard inputs application message handler calling message handler function returns true implementing backend read capture mouse capture keyboard flags dear gui inputs capture mouse true dispatch mouse input data main application clear overwrite copy mouse data capture keyboard true dispatch keyboard input data main application clear overwrite copy keyboard data generally pass inputs dear gui hide application based flags win handler capture api capture set capture release capture read mouse coordinates dragging mouse window bounds treat dblclk messages regular mouse messages code work windows classes dblclks flag set app code set flag copy cpp file declare function extern imgui impl api lresult gui impl win wnd proc handler hwnd wnd uint msg wparam param lparam param endif prefer message handler avoid possibility win calls interfering static gui mouse source mouse source message extra info lparam extra info message extra info extra info ffffff return gui mouse source pen extra info ffffff return gui mouse source touch screen return gui mouse source mouse imgui impl api lresult gui impl win wnd proc handler hwnd hwnd uint msg wparam param lparam param gui current context nullptr return gui gui gui impl win data gui impl win backend data switch msg case mousemove case ncmousemove track mouse event order receive mouseleave events gui mouse source mouse source mouse source message extra info const int area msg mousemove mouse hwnd hwnd mouse tracked area area trackmouseevent tme cancel sizeof tme cancel tme cancel hwnd trackmouseevent tme track sizeof tme track dword area tme leave tme nonclient tme leave hwnd mouse tracked area track mouse event tme cancel track mouse event tme track mouse tracked area area point mouse pos long lparam param long lparam param msg ncmousemove screen client hwnd mouse pos false ncmousemove absolute coordinates break add mouse source event mouse source add mouse pos event float mouse pos float mouse pos break case mouseleave case ncmouseleave const int area msg mouseleave mouse tracked area area mouse hwnd hwnd mouse hwnd nullptr mouse tracked area add mouse pos event flt max flt max break case lbuttondown case lbuttondblclk case rbuttondown case rbuttondblclk case mbuttondown case mbuttondblclk case xbuttondown case xbuttondblclk gui mouse source mouse source mouse source message extra info int button msg lbuttondown msg lbuttondblclk button msg rbuttondown msg rbuttondblclk button msg mbuttondown msg mbuttondblclk button msg xbuttondown msg xbuttondblclk button xbutton wparam param xbutton mouse buttons capture nullptr set capture hwnd mouse buttons button add mouse source event mouse source add mouse button event button true return case lbuttonup case rbuttonup case mbuttonup case xbuttonup gui mouse source mouse source mouse source message extra info int button msg lbuttonup button msg rbuttonup button msg mbuttonup button msg xbuttonup button xbutton wparam param xbutton mouse buttons button mouse buttons capture hwnd release capture add mouse source event mouse source add mouse button event button false return case mousewheel add mouse wheel event float wheel delta wparam param float wheel delta return case mousehwheel add mouse wheel event float wheel delta wparam param float wheel delta return case keydown case keyup case syskeydown case syskeyup const bool key msg keydown msg syskeydown param submit modifiers gui impl win update key modifiers virtual key code keypad enter return extended flag keypad enter keypad enter definition details mapped gui key key pad enter int int param param return hiword param extended keypad enter const gui key key gui impl win virtual key gui key const int scancode int lobyte hiword param special behavior snapshot gui key print screen windows emit key event key gui key print screen key gui impl win add key event key true scancode submit key event key gui key gui impl win add key event key key scancode submit individual left modifier events shift shift tend stuck pressed missing key events corrected gui impl win process key events workarounds lshift key gui impl win add key event gui key left shift key lshift scancode rshift key gui impl win add key event gui key shift key rshift scancode control lcontrol key gui impl win add key event gui key left ctrl key lcontrol scancode rcontrol key gui impl win add key event gui key ctrl key rcontrol scancode menu lmenu key gui impl win add key event gui key left alt key lmenu scancode rmenu key gui impl win add key event gui key alt key rmenu scancode return case setfocus case killfocus add focus event msg setfocus return case inputlangchange gui impl win update keyboard code return case char window unicode hwnd ascii keyboard retrieve characters param param add input character utf unsigned short param wchar wch multi byte wide char keyboard code precomposed char param wch add input character wch return case setcursor required restore cursor transitioning resize borders client area loword param htclient gui impl win update mouse cursor return return case devicechange ifndef imgui impl win disable gamepad uint param dbt devnodes changed update gamepad true endif return return dpi helpers optional enable dpi awareness create application manifest app manifest explicit calls examples apps theory simple functions windows sdk set process dpi aware set process dpi awareness functions microsoft require windows sdk compile time windows runtime require user dynamically select load functions avoid dependencies scheme glfw borrowed code apps aiming highly portable gui impl win enable dpi awareness helper called main cpp automatically implement backend engine ignore noise perform check rtl verify version info functions version helpers require manifest functional checks static bool windows version greater word major word minor word typedef long winapi pfn rtl verify version info osversioninfoexw ulong ulonglong static pfn rtl verify version info rtl verify version info nullptr rtl verify version info nullptr hmodule ntdll module module handle ntdll dll rtl verify version info pfn rtl verify version info proc address ntdll module rtl verify version info rtl verify version info nullptr return false rtl osversioninfoexw version info ulonglong condition mask version info version info size sizeof rtl osversioninfoexw version info major version major version info minor version minor ver set condition condition mask ver majorversion ver greater equal ver set condition condition mask ver minorversion ver greater equal return rtl verify version info version info ver majorversion ver minorversion condition mask true false define windows vista greater windows version greater hibyte lobyte win winnt vista define windows greater windows version greater hibyte lobyte win winnt win define windows point greater windows version greater hibyte lobyte win winnt winblue define windows greater windows version greater hibyte lobyte win winnt winthreshold win winnt win ifndef dpi enums declared typedef enum process dpi unaware process dpi aware process monitor dpi aware process dpi awareness typedef enum mdt effective dpi mdt angular dpi mdt raw dpi mdt default mdt effective dpi monitor dpi type endif ifndef dpi awareness contexts declare handle dpi awareness context define dpi awareness context monitor aware dpi awareness context endif ifndef dpi awareness context monitor aware define dpi awareness context monitor aware dpi awareness context endif typedef hresult winapi pfn set process dpi awareness process dpi awareness shcore lib dll windows typedef hresult winapi pfn dpi monitor hmonitor monitor dpi type uint uint shcore lib dll windows typedef dpi awareness context winapi pfn set thread dpi awareness context dpi awareness context user lib dll windows creators update helper function enable dpi awareness setting manifest void gui impl win enable dpi awareness windows greater static hinstance user dll load library user dll reference counted process pfn set thread dpi awareness context set thread dpi awareness context pfn set thread dpi awareness context proc address user dll set thread dpi awareness context set thread dpi awareness context dpi awareness context monitor aware return windows point greater static hinstance shcore dll load library shcore dll reference counted process pfn set process dpi awareness set process dpi awareness pfn set process dpi awareness proc address shcore dll set process dpi awareness set process dpi awareness process monitor dpi aware return win winnt set process dpi aware endif defined msc ver defined nogdi pragma comment lib gdi link gdi lib device caps min require linking lgdi endif float gui impl win dpi scale monitor void monitor uint xdpi ydpi windows point greater static hinstance shcore dll load library shcore dll reference counted process static pfn dpi monitor dpi monitor nullptr dpi monitor nullptr shcore dll nullptr dpi monitor pfn dpi monitor proc address shcore dll dpi monitor dpi monitor nullptr dpi monitor hmonitor monitor mdt effective dpi xdpi ydpi assert xdpi ydpi contact hit assert return xdpi ifndef nogdi const hdc nullptr xdpi device caps logpixelsx ydpi device caps logpixelsy assert xdpi ydpi contact hit assert release nullptr endif return xdpi float gui impl win dpi scale hwnd void hwnd hmonitor monitor monitor window hwnd hwnd monitor defaulttonearest return gui impl win dpi scale monitor monitor transparency helpers optional defined msc ver pragma comment lib dwmapi link dwmapi lib min require linking ldwmapi endif experimental borrowed glfw function update framebuffer transparency src win window dwm functions vista era functions borrowing logic glfw void gui impl win enable alpha compositing void hwnd windows vista greater return bool composition failed dwm composition enabled composition composition return bool opaque dword color windows greater succeeded dwm colorization color color opaque opaque hrgn region create rect rgn dwm blurbehind flags dwm enable dwm blurregion rgn blur region enable true dwm enable blur window hwnd hwnd delete object region dwm blurbehind flags dwm enable dwm enable blur window hwnd hwnd endif ifndef imgui disable