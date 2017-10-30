#include <Uno-iOS/Context.h>
#include <Uno-iOS/Uno-iOS.h>
#include <uObjC.Foreign.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno.Platform.EventSources.InterAppInvoke.h>


@interface uContext()
{
@private
    uRuntime* _uno;
    EAGLContext* _glContext;
    UIWindow* (^_windowGetter)();
}
@end

@implementation uContext

@synthesize window = _window;
@synthesize glContext = _glContext;

struct NotificationSelector
{
    NSString* name;
    SEL selector;
};

const static NotificationSelector _notifications[] = {
    { UIApplicationDidFinishLaunchingNotification, @selector(applicationDidFinishLaunching:) },
    { UIApplicationWillEnterForegroundNotification, @selector(applicationWillEnterForeground:) },
    { UIApplicationDidBecomeActiveNotification, @selector(applicationDidBecomeActive:) },
    { UIApplicationWillResignActiveNotification, @selector(applicationWillResignActive:) },
    { UIApplicationDidEnterBackgroundNotification, @selector(applicationDidEnterBackground:) },
    { UIApplicationWillTerminateNotification, @selector(applicationWillTerminate:) },
    { UIApplicationDidReceiveMemoryWarningNotification, @selector(applicationDidReceiveMemoryWarning:) },
};

static uContext* instance = nil;
+ (instancetype)sharedContext
{
    if (instance == nil)
    {
        NSException* notInitializedException = [NSException
            exceptionWithName:@"Failed to get sharedContext"
            reason:@"uContext has not been initialized"
            userInfo: nil];
        @throw notInitializedException;
    }
    return instance;
}

+ (instancetype)initSharedContext
{
    if (instance == nil)
    {
        instance = [[uContext alloc] init];
    }
    return instance;
}

+ (instancetype)initSharedContextWithWindow:(UIWindow*(^)())windowGetter
{
    uContext* context = [uContext initSharedContext];
    context->_windowGetter = windowGetter;
    return context;
}

- (UIWindow*)window
{
    if (self->_windowGetter != nil)
    {
        return self->_windowGetter();
    }
    else
    {
        return nil;
    }
}

- (instancetype)init
{
    if (self = [super init])
    {
        _uno = new uRuntime();
        _glContext = [[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES2];
        [EAGLContext setCurrentContext:_glContext];

        NSNotificationCenter* nc = [NSNotificationCenter defaultCenter];

        int num_notifications = sizeof(_notifications) / sizeof(_notifications[0]);

        for (int i = 0; i < num_notifications; ++i)
        {
            [nc addObserver:self
                selector:_notifications[i].selector
                name:_notifications[i].name
                object:nil];
        }
    }
    return self;
}

- (void)dealloc
{
    NSNotificationCenter* nc = [NSNotificationCenter defaultCenter];

    int num_notifications = sizeof(_notifications) / sizeof(_notifications[0]);

    for (int i = 0; i < num_notifications; ++i)
    {
        [nc removeObserver:self
            name:_notifications[i].name
            object:nil];
    }

    delete _uno;
}

- (BOOL)application:(UIApplication *)application willFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::Start(); }();
    ::g::Uno::Platform::iOS::Application::LaunchOptions(::g::ObjC::Object::Create(launchOptions));
    return YES;
}

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::EventSources::InterAppInvoke::OnReceivedURI(::uObjC::UnoString([url absoluteString])); }();
    return YES;
}

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary*)options
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::EventSources::InterAppInvoke::OnReceivedURI(::uObjC::UnoString([url absoluteString])); }();
    return YES;
}

- (void)applicationDidFinishLaunching:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::EnterForeground(); }();
    
}

- (void)applicationWillEnterForeground:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::EnterForeground(); }();
}

- (void)applicationDidBecomeActive:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::EnterInteractive(); }();
}

- (void)applicationWillResignActive:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::ExitInteractive(); }();
}

- (void)applicationDidEnterBackground:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::EnterBackground(); }();
}

- (void)applicationWillTerminate:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::Terminate(); }();
}

- (void)applicationDidReceiveMemoryWarning:(NSNotification*)notification
{
    [&]() -> void { ::uForeignPool __foreignPool; ::g::Uno::Platform::CoreApp::OnReceivedLowMemoryWarning(); }();
}

@end
