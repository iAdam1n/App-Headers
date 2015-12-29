//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController;

@protocol SwipeViewParentDelegate <NSObject>
- (void)didHideFullscreenSubview;
- (_Bool)isVisibleViewControllerAndCapableOfPlayingSnaps;
- (_Bool)isRightOfViewController:(UIViewController *)arg1;
- (_Bool)isLeftOfViewController:(UIViewController *)arg1;
- (void)unlockScrollWithRequestId:(NSString *)arg1;
- (void)lockScrollWithRequestId:(NSString *)arg1;
- (_Bool)isAnimatingScroll;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)cancelScroll;
- (_Bool)isFullyVisible:(UIViewController *)arg1;
- (_Bool)isPartiallyVisible:(UIViewController *)arg1;
@end
