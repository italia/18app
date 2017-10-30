#include <Uno-iOS/AppDelegate.h>
#include <Uno-iOS/Context.h>


@interface uAppDelegate()
{
@private
    uContext* _unoContext;
}
@end

@implementation uAppDelegate
- (id)init
{
    if ((self = [super init]))
    {
        _unoContext = [uContext initSharedContext];
        _context = [_unoContext glContext];
    }
    return self;
}

- (void)setView:(UIView *)view
{
    [super setView:view];
}

- (BOOL)application:(UIApplication *)application willFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [EAGLContext setCurrentContext:self.context];
    return [_unoContext
        application:application
        willFinishLaunchingWithOptions:launchOptions];
}

-(BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation
{
    BOOL result = [_unoContext
        application:application
        openURL:url
        sourceApplication:sourceApplication
        annotation:annotation];
    ;
    return result;
}

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary*)options
{
    BOOL result = [_unoContext
        application:app
        openURL:url
        options:options];
    ;
    return result;
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    uAutoReleasePool pool;
    
    return YES;
}

- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken
{
    id cxt = _unoContext;
    if ([cxt respondsToSelector:@selector(application:didRegisterForRemoteNotificationsWithDeviceToken:)])
        [cxt application:application didRegisterForRemoteNotificationsWithDeviceToken:deviceToken];
}

- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error
{
    id cxt = _unoContext;
    if ([cxt respondsToSelector:@selector(application:didFailToRegisterForRemoteNotificationsWithError:)])
        [cxt application:application didFailToRegisterForRemoteNotificationsWithError:error];
}

- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo
{
    id cxt = _unoContext;
    if ([cxt respondsToSelector:@selector(application:didReceiveRemoteNotification:)])
        [cxt application:application didReceiveRemoteNotification:userInfo];
}

- (void)application:(UIApplication *)application dispatchPushNotification:(NSDictionary *)userInfo fromBar:(BOOL)fromBar
{
    id cxt = _unoContext;
    if ([cxt respondsToSelector:@selector(application:dispatchPushNotification:fromBar:)])
        [cxt application:application dispatchPushNotification:userInfo fromBar:fromBar];
}

- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification
{
    id cxt = _unoContext;
    if ([cxt respondsToSelector:@selector(application:didReceiveLocalNotification:)])
        [cxt application:application didReceiveLocalNotification:notification];
}



@end
