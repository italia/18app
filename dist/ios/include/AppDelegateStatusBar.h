#pragma once

#ifdef __OBJC__
#include <UIKit/UIKit.h>
#include <Uno-iOS/AppDelegate.h>
#include <Uno-iOS/Uno-iOS.h>



#include <Uno.Rect.h>

@interface uAppDelegate (StatusBar)

- (BOOL)prefersStatusBarHidden;
- (UIStatusBarStyle)preferredStatusBarStyle;
- (UIStatusBarAnimation)preferredStatusBarUpdateAnimation;

@end

#endif
