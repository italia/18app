#include <UIKit/UIKit.h>

#include <Uno/Uno.h>
#include <Uno-iOS/AppDelegate.h>
#include <Uno-iOS/Uno-iOS.h>

#include <Uno.Platform.Displays.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.Diagnostics.Clock.h>

@implementation uDisplayTickNotifier
- (void)uOnDisplayTick:(CADisplayLink *)sender
{
    double lastTickTimestamp = sender.timestamp;
    double tickDuration = sender.duration * sender.frameInterval;

    uAutoReleasePool pool;
    double currentTime = ::g::Uno::Diagnostics::Clock::GetSeconds();
    ::g::Uno::Platform::TimerEventArgs* args = ::g::Uno::Platform::TimerEventArgs::New2(lastTickTimestamp, tickDuration, currentTime);
    ::g::Uno::Platform::Displays::TickAll(args);
}
@end
