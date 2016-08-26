/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMobileCanvas.h>

@protocol FBNavigationCoordinator;
@class UIViewController, FBUserSession;

@interface FBMobileCanvasWilde : FBMobileCanvas {

	UIViewController* _dialogViewController;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBUserSession* _session;

}

@property (nonatomic,readonly) BOOL disablePullToRefresh; 
-(BOOL)handlePossibleBridgeRequestURL:(id)arg1 ;
-(id)initWithDialog:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 ;
-(BOOL)disablePullToRefresh;
@end
