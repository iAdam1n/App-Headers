//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCVerticalSwipeView;

@protocol SCVerticalSwipeViewDelegate <NSObject>

@optional
- (void)verticalSwipeView:(SCVerticalSwipeView *)arg1 didScrollToOffset:(double)arg2 offsetEnabled:(_Bool)arg3;
- (void)verticalSwipeView:(SCVerticalSwipeView *)arg1 didChangePageIndex:(unsigned long long)arg2;
- (void)verticalSwipeView:(SCVerticalSwipeView *)arg1 pageDidFullyAppearForIndex:(unsigned long long)arg2 offsetEnabled:(_Bool)arg3;
- (void)verticalSwipeView:(SCVerticalSwipeView *)arg1 bottomSubviewDidBecomeVisible:(_Bool)arg2 offsetEnabled:(_Bool)arg3;
@end
