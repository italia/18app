#include <Uno/Uno.h>
#include <Uno-iOS/Uno-iOS.h>
#include <Window.h>
#include <Uno.Platform.iOSDisplay.h>

@implementation uWindow
- (void)setFrame:(CGRect)frame
{
    [super setFrame:frame];

    if (self.uDisplay)
    {
        uAutoReleasePool pool;
        ((::g::Uno::Platform::iOSDisplay*)self.uDisplay)->OnFrameChanged();
    }
}
@end


@implementation UIWindow (uPlatform)
- (void)uSetDisplay:(void*)unoDisplay
{
}
@end
