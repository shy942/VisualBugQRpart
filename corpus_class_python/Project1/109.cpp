dear gui standalone application glfw vulkan learn dear gui faq started documentation local docs folder introduction links imgui cpp note reader integrate imgui impl vulkan cpp engine app common gui impl vulkan xxx functions structures interface imgui impl vulkan cpp rendering backend engine app helper gui impl vulkan xxx functions structures main cpp backend imgui impl vulkan cpp engine app code read comments imgui impl vulkan include imgui include imgui impl glfw include imgui impl vulkan include stdio printf fprintf include stdlib abort define glfw include define glfw include vulkan include glfw glfw include vulkan vulkan include vulkan vulkan beta win includes copy glfw lib pre compiled maximize ease testing compatibility compilers link era libraries requires linking legacy stdio definitions lib pragma project link newer binary glfw adequate version visual studio defined msc ver msc ver defined imgui disable win functions pragma comment lib legacy stdio definitions endif define app unlimited frame rate ifdef debug define app vulkan debug report endif data static allocation callbacks allocator nullptr static instance instance null handle static physical device physical device null handle static device device null handle static uint queue family uint static queue queue null handle static debug report callback ext debug report null handle static pipeline cache pipeline cache null handle static descriptor pool descriptor pool null handle static gui impl vulkan window main window data static int min image count static bool swap chain rebuild false static void glfw error callback int error const char description fprintf stderr glfw error error description static void check result result err err return fprintf stderr vulkan error result err err abort ifdef app vulkan debug report static vkapi attr bool vkapi debug report debug report flags ext flags debug report object type ext object type uint object size location int message code const char layer prefix const char message void user data void flags void object void location void message code void user data void layer prefix unused arguments fprintf stderr vulkan debug report object type message object type message return false endif app vulkan debug report static bool extension const vector extension properties properties const char extension const extension properties properties strcmp extension extension return true return false static physical device setup vulkan select physical device uint gpu count result err enumerate physical devices instance gpu count nullptr check result err assert gpu count vector physical device gpus gpus resize gpu count err enumerate physical devices instance gpu count gpus data check result err number reported discrete gpu covers common cases multi gpu integrated dedicated graphics handling complicated setups multiple dedicated scope sample physical device device gpus physical device properties properties physical device properties device properties properties device type physical device type discrete gpu return device gpu integrated discrete gpu count return gpus return null handle static void setup vulkan vector const char instance extensions result err create vulkan instance instance create info create info create info type structure type instance create info enumerate extensions uint properties count vector extension properties properties enumerate instance extension properties nullptr properties count nullptr properties resize properties count err enumerate instance extension properties nullptr properties count properties data check result err enable required extensions extension properties khr physical device properties extension instance extensions push khr physical device properties extension ifdef khr portability enumeration extension extension properties khr portability enumeration extension instance extensions push khr portability enumeration extension create info flags instance create enumerate portability bit khr endif enabling validation layers ifdef app vulkan debug report const char layers layer khronos validation create info enabled layer count create info enabled layer names layers instance extensions push ext debug report endif create vulkan instance create info enabled extension count uint instance extensions size create info enabled extension names instance extensions data err create instance create info allocator instance check result err setup debug report callback ifdef app vulkan debug report auto create debug report callback ext pfn create debug report callback ext instance proc addr instance create debug report callback ext assert create debug report callback ext nullptr debug report callback create info ext debug report debug report type structure type debug report callback create info ext debug report flags debug report error bit ext debug report warning bit ext debug report performance warning bit ext debug report pfn callback debug report debug report user data nullptr err create debug report callback ext instance debug report allocator debug report check result err endif select physical device gpu physical device setup vulkan select physical device select graphics queue family uint count physical device queue family properties physical device count nullptr queue family properties queues queue family properties malloc sizeof queue family properties count physical device queue family properties physical device count queues uint count queues queue flags queue graphics bit queue family break free queues assert queue family uint create logical device queue vector const char device extensions device extensions push khr swapchain enumerate physical device extension uint properties count vector extension properties properties enumerate device extension properties physical device nullptr properties count nullptr properties resize properties count enumerate device extension properties physical device nullptr properties count properties data ifdef khr portability subset extension extension properties khr portability subset extension device extensions push khr portability subset extension endif const float queue priority device queue create info queue info queue info type structure type device queue create info queue info queue family queue family queue info queue count queue info queue priorities queue priority device create info create info create info type structure type device create info create info queue create info count sizeof queue info sizeof queue info create info queue create infos queue info create info enabled extension count uint device extensions size create info enabled extension names device extensions data err create device physical device create info allocator device check result err device queue device queue family queue create descriptor pool requires single combined image sampler descriptor font image descriptor set load additional textures alter pools sizes descriptor pool size pool sizes descriptor type combined image sampler descriptor pool create info pool info pool info type structure type descriptor pool create info pool info flags descriptor pool create free descriptor set bit pool info max sets pool info pool size count uint arraysize pool sizes pool info pool sizes pool sizes err create descriptor pool device pool info allocator descriptor pool check result err gui impl vulkan xxx structures functions optional helpers demo real engine app static void setup vulkan window gui impl vulkan window surface khr surface int width int height surface surface check wsi support bool res physical device surface support khr physical device queue family surface res res true fprintf stderr error wsi support physical device exit select surface format const format request surface image format format unorm format unorm format unorm format unorm const color space khr request surface color space colorspace srgb nonlinear khr surface format gui impl vulkan select surface format physical device surface request surface image format size arraysize request surface image format request surface color space select mode ifdef app unlimited frame rate mode khr modes mode mailbox khr mode khr mode fifo khr mode khr modes mode fifo khr endif mode gui impl vulkan select mode physical device surface modes arraysize modes printf vulkan selected mode mode create swap chain render pass framebuffer assert min image count gui impl vulkan create resize window instance physical device device queue family allocator width height min image count static void cleanup vulkan destroy descriptor pool device descriptor pool allocator ifdef app vulkan debug report remove debug report callback auto destroy debug report callback ext pfn destroy debug report callback ext instance proc addr instance destroy debug report callback ext destroy debug report callback ext instance debug report allocator endif app vulkan debug report destroy device device allocator destroy instance instance allocator static void cleanup vulkan window gui impl vulkan destroy window instance device main window data allocator static void frame render gui impl vulkan window draw data draw data result err semaphore image acquired semaphore frame semaphores semaphore image acquired semaphore semaphore render complete semaphore frame semaphores semaphore render complete semaphore err acquire image khr device swapchain uint max image acquired semaphore null handle frame err error khr err suboptimal khr swap chain rebuild true return check result err gui impl vulkan frame frames frame err wait fences device fence true uint max wait indefinitely periodically checking check result err err reset fences device fence check result err err reset command pool device command pool check result err command buffer info info info type structure type command buffer info info flags command buffer usage time submit bit err command buffer command buffer info check result err render pass info info info type structure type render pass info info render pass render pass info framebuffer framebuffer info render area extent width width info render area extent height height info clear count info clear values clear cmd render pass command buffer info subpass contents inline record dear imgui primitives command buffer gui impl vulkan render draw data draw data command buffer submit command buffer cmd render pass command buffer pipeline stage flags wait stage pipeline stage color attachment output bit submit info info info type structure type submit info info wait semaphore count info wait semaphores image acquired semaphore info wait dst stage mask wait stage info command buffer count info command buffers command buffer info signal semaphore count info signal semaphores render complete semaphore err command buffer command buffer check result err err queue submit queue info fence check result err static void frame gui impl vulkan window swap chain rebuild return semaphore render complete semaphore frame semaphores semaphore render complete semaphore info khr info info type structure type info khr info wait semaphore count info wait semaphores render complete semaphore info swapchain count info swapchains swapchain info image indices frame result err queue khr queue info err error khr err suboptimal khr swap chain rebuild true return check result err semaphore semaphore semaphore count set semaphores main code int main int char glfw set error callback glfw error callback glfw init return create window vulkan context glfw window hint glfw client api glfw api glf wwindow window glfw create window dear gui glfw vulkan nullptr nullptr glfw vulkan supported printf glfw vulkan supported return vector const char extensions uint extensions count const char glfw extensions glfw required instance extensions extensions count uint extensions count extensions push glfw extensions setup vulkan extensions create window surface surface khr surface result err glfw create window surface instance window allocator surface check result err create framebuffers int glfw framebuffer size window gui impl vulkan window main window data setup vulkan window surface setup dear gui context imgui checkversion gui create context gui gui void config flags gui config flags nav enable keyboard enable keyboard controls config flags gui config flags nav enable gamepad enable gamepad controls setup dear gui style gui style colors dark gui style colors light setup platform renderer backends gui impl glfw init vulkan window true gui impl vulkan init info init info init info instance instance init info physical device physical device init info device device init info queue family queue family init info queue queue init info pipeline cache pipeline cache init info descriptor pool descriptor pool init info render pass render pass init info subpass init info min image count min image count init info image count image count init info msaa samples sample count bit init info allocator allocator init info check result check result gui impl vulkan init init info load fonts fonts loaded dear imgui default font load multiple fonts gui push font pop font select add font file ttf return font store select font multiple file loaded function return nullptr handle errors application assertion display error quit fonts rasterized size oversampling stored texture calling font atlas build tex data xxxx gui impl xxxx frame define imgui enable freetype imconfig file freetype higher quality font rendering read docs fonts instructions details remember include backslash string literal write double backslash fonts add font default fonts add font file ttf windows fonts segoeui ttf fonts add font file ttf misc fonts droid sans ttf fonts add font file ttf misc fonts roboto medium ttf fonts add font file ttf misc fonts cousine regular ttf font font fonts add font file ttf windows fonts arial uni ttf nullptr fonts glyph ranges japanese assert font nullptr bool demo window true bool window false vec clear color vec main loop glfw window close window poll handle events inputs window resize read capture mouse capture keyboard flags dear imgui inputs capture mouse true dispatch mouse input data main application clear overwrite copy mouse data capture keyboard true dispatch keyboard input data main application clear overwrite copy keyboard data generally pass inputs dear imgui hide application based flags glfw poll events resize swap chain swap chain rebuild int width height glfw framebuffer size window width height width height gui impl vulkan set min image count min image count gui impl vulkan create resize window instance physical device device main window data queue family allocator width height min image count main window data frame swap chain rebuild false start dear gui frame gui impl vulkan frame gui impl glfw frame gui frame big demo window sample code gui demo window browse code learn dear gui demo window gui demo window demo window simple window create pair create named window static float static int counter gui create window called append gui text text display text format strings gui checkbox demo window demo window edit bools storing window open close gui checkbox window window gui slider float float edit float slider gui color edit clear color float clear color edit floats representing color gui button button buttons return true clicked widgets return true edited activated counter gui gui text counter counter gui text application average frame fps framerate framerate gui simple window window gui window window pass pointer bool variable window closing button clear bool clicked gui text window gui button close window false gui rendering gui render draw data draw data gui draw data const bool minimized draw data display size draw data display size minimized clear color float clear color clear color clear color float clear color clear color clear color float clear color clear color clear color float clear color frame render draw data frame cleanup err device wait idle device check result err gui impl vulkan shutdown gui impl glfw shutdown gui destroy context cleanup vulkan window cleanup vulkan glfw destroy window window glfw terminate return