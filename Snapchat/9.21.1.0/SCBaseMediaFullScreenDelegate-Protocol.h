//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCDiscoverBarDelegate.h"

@class SCBaseMediaFullScreenView;

@protocol SCBaseMediaFullScreenDelegate <NSObject, SCDiscoverBarDelegate>
- (void)fullScreenViewWasDismissed:(SCBaseMediaFullScreenView *)arg1;
- (void)fullScreenViewWillAppear:(SCBaseMediaFullScreenView *)arg1;
@end
