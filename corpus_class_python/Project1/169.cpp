dear gui standalone application direct learn dear gui faq started documentation local docs folder introduction links imgui cpp compile bit systems direct backend requires code compiled define texture texture carry bit default texture defined void define set vcxproj file replicated app adding imconfig file include imgui include imgui impl win include imgui impl include include dxgi include tchar ifdef debug define enable debug layer endif ifdef enable debug layer include dxgidebug pragma comment lib dxguid lib endif struct frame context command allocator command allocator uint fence data static int const num frames flight static frame context frame context num frames flight static uint frame static int const num buffers static device device nullptr static descriptor heap rtv desc heap nullptr static descriptor heap srv desc heap nullptr static command queue command queue nullptr static graphics command list command list nullptr static fence fence nullptr static handle fence event nullptr static uint fence signaled static idxgi swap chain swap chain nullptr static handle swap chain waitable object nullptr static resource main render target resource num buffers static cpu descriptor handle main render target descriptor num buffers declarations helper functions bool create device hwnd wnd void cleanup device void create render target void cleanup render target void wait submitted frame frame context wait frame resources lresult winapi wnd proc hwnd wnd uint msg wparam param lparam param main code int main int char create application window gui impl win enable dpi awareness wndclassexw sizeof classdc wnd proc module handle nullptr nullptr nullptr nullptr nullptr gui nullptr register class hwnd hwnd create window lpsz class dear gui direct overlappedwindow nullptr nullptr instance nullptr initialize direct create device hwnd cleanup device unregister class lpsz class instance return window window hwnd showdefault update window hwnd setup dear gui context imgui checkversion gui create context gui gui void config flags gui config flags nav enable keyboard enable keyboard controls config flags gui config flags nav enable gamepad enable gamepad controls setup dear gui style gui style colors dark gui style colors light setup platform renderer backends gui impl win init hwnd gui impl init device num frames flight dxgi format unorm srv desc heap srv desc heap cpu descriptor handle heap start srv desc heap gpu descriptor handle heap start load fonts fonts loaded dear imgui default font load multiple fonts gui push font pop font select add font file ttf return font store select font multiple file loaded function return nullptr handle errors application assertion display error quit fonts rasterized size oversampling stored texture calling font atlas build tex data xxxx gui impl xxxx frame define imgui enable freetype imconfig file freetype higher quality font rendering read docs fonts instructions details remember include backslash string literal write double backslash fonts add font default fonts add font file ttf windows fonts segoeui ttf fonts add font file ttf misc fonts droid sans ttf fonts add font file ttf misc fonts roboto medium ttf fonts add font file ttf misc fonts cousine regular ttf font font fonts add font file ttf windows fonts arial uni ttf nullptr fonts glyph ranges japanese assert font nullptr bool demo window true bool window false vec clear color vec main loop bool false poll handle messages inputs window resize wnd proc function dispatch events win backend msg msg peek message msg nullptr remove translate message msg dispatch message msg msg message quit true break start dear gui frame gui impl frame gui impl win frame gui frame big demo window sample code gui demo window browse code learn dear gui demo window gui demo window demo window simple window create pair create named window static float static int counter gui create window called append gui text text display text format strings gui checkbox demo window demo window edit bools storing window open close gui checkbox window window gui slider float float edit float slider gui color edit clear color float clear color edit floats representing color gui button button buttons return true clicked widgets return true edited activated counter gui gui text counter counter gui text application average frame fps framerate framerate gui simple window window gui window window pass pointer bool variable window closing button clear bool clicked gui text window gui button close window false gui rendering gui render frame context frame ctx wait frame resources uint buffer idx swap chain current buffer frame ctx command allocator reset resource barrier barrier barrier type resource barrier type transition barrier flags resource barrier flag barrier transition resource main render target resource buffer idx barrier transition subresource resource barrier subresources barrier transition resource barrier transition resource render target command list reset frame ctx command allocator nullptr command list resource barrier barrier render dear gui graphics const float clear color alpha clear color clear color clear color clear color clear color clear color clear color command list clear render target view main render target descriptor buffer idx clear color alpha nullptr command list set render targets main render target descriptor buffer idx false nullptr command list set descriptor heaps srv desc heap gui impl render draw data gui draw data command list barrier transition resource render target barrier transition resource command list resource barrier barrier command list close command queue execute command lists command list const command list swap chain vsync swap chain vsync uint fence fence signaled command queue signal fence fence fence signaled fence frame ctx fence fence wait submitted frame cleanup gui impl shutdown gui impl win shutdown gui destroy context cleanup device destroy window hwnd unregister class lpsz class instance return helper functions bool create device hwnd wnd setup swap chain dxgi swap chain desc memory sizeof buffer count num buffers width height format dxgi format unorm flags dxgi swap chain flag frame latency waitable object buffer usage dxgi usage render target output sample desc count sample desc quality swap dxgi swap flip discard alpha mode dxgi alpha mode unspecified scaling dxgi scaling stretch stereo false debug enable debug interface ifdef enable debug layer debug pdx debug nullptr succeeded debug interface iid ppv args pdx debug pdx debug enable debug layer endif create device feature level feature level feature level create device nullptr feature level iid ppv args device return false debug setup debug interface break warnings errors ifdef enable debug layer pdx debug nullptr info queue info queue nullptr device query interface iid ppv args info queue info queue set break severity message severity error true info queue set break severity message severity corruption true info queue set break severity message severity warning true info queue release pdx debug release endif descriptor heap desc desc desc type descriptor heap type rtv desc num descriptors num buffers desc flags descriptor heap flag desc node mask device create descriptor heap desc iid ppv args rtv desc heap return false size rtv descriptor size device descriptor handle increment size descriptor heap type rtv cpu descriptor handle rtv handle rtv desc heap cpu descriptor handle heap start uint num buffers main render target descriptor rtv handle rtv handle ptr rtv descriptor size descriptor heap desc desc desc type descriptor heap type cbv srv uav desc num descriptors desc flags descriptor heap flag shader visible device create descriptor heap desc iid ppv args srv desc heap return false command queue desc desc desc type command list type direct desc flags command queue flag desc node mask device create command queue desc iid ppv args command queue return false uint num frames flight device create command allocator command list type direct iid ppv args frame context command allocator return false device create command list command list type direct frame context command allocator nullptr iid ppv args command list command list close return false device create fence fence flag iid ppv args fence return false fence event create event nullptr false false nullptr fence event nullptr return false idxgi factory dxgi factory nullptr idxgi swap chain swap chain nullptr create dxgi factory iid ppv args dxgi factory return false dxgi factory create swap chain hwnd command queue wnd nullptr nullptr swap chain return false swap chain query interface iid ppv args swap chain return false swap chain release dxgi factory release swap chain set maximum frame latency num buffers swap chain waitable object swap chain frame latency waitable object create render target return true void cleanup device cleanup render target swap chain swap chain set fullscreen false nullptr swap chain release swap chain nullptr swap chain waitable object nullptr close handle swap chain waitable object uint num frames flight frame context command allocator frame context command allocator release frame context command allocator nullptr command queue command queue release command queue nullptr command list command list release command list nullptr rtv desc heap rtv desc heap release rtv desc heap nullptr srv desc heap srv desc heap release srv desc heap nullptr fence fence release fence nullptr fence event close handle fence event fence event nullptr device device release device nullptr ifdef enable debug layer idxgi debug debug nullptr succeeded dxgi debug interface iid ppv args debug debug report live objects dxgi debug dxgi debug rlo summary debug release endif void create render target uint num buffers resource buffer nullptr swap chain buffer iid ppv args buffer device create render target view buffer nullptr main render target descriptor main render target resource buffer void cleanup render target wait submitted frame uint num buffers main render target resource main render target resource release main render target resource nullptr void wait submitted frame frame context frame ctx frame context frame num frames flight uint fence frame ctx fence fence return fence signaled frame ctx fence fence completed fence return fence set event completion fence fence event wait single object fence event infinite frame context wait frame resources uint frame frame frame frame handle waitable objects swap chain waitable object nullptr dword num waitable objects frame context frame ctx frame context frame num frames flight uint fence frame ctx fence fence fence signaled frame ctx fence fence set event completion fence fence event waitable objects fence event num waitable objects wait multiple objects num waitable objects waitable objects true infinite return frame ctx declare message handler imgui impl win cpp extern imgui impl api lresult gui impl win wnd proc handler hwnd wnd uint msg wparam param lparam param win message handler read capture mouse capture keyboard flags dear imgui inputs capture mouse true dispatch mouse input data main application clear overwrite copy mouse data capture keyboard true dispatch keyboard input data main application clear overwrite copy keyboard data generally pass inputs dear imgui hide application based flags lresult winapi wnd proc hwnd wnd uint msg wparam param lparam param gui impl win wnd proc handler wnd msg param param return true switch msg case size device nullptr param size minimized wait submitted frame cleanup render target hresult result swap chain resize buffers uint loword param uint hiword param dxgi format unknown dxgi swap chain flag frame latency waitable object assert succeeded result failed resize swapchain create render target return case syscommand param xfff keymenu disable alt application menu return break case destroy post quit message return return def window proc wnd msg param param