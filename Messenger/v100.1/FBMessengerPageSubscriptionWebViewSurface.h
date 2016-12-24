/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMessengerPageSubscriptionCTAViewDelegate.h>
#import <Messenger/FBBrowserSurface.h>

@class FBMessengerPageSubscriptionCTAView, FBUserSession, NSString;

@interface FBMessengerPageSubscriptionWebViewSurface : NSObject <FBMessengerPageSubscriptionCTAViewDelegate, FBBrowserSurface> {

	FBMessengerPageSubscriptionCTAView* _ctaView;
	FBUserSession* _session;
	/*^block*/id _dismissBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapFollowButton:(id)arg1 ;
-(id)surfaceView;
-(unsigned long long)surfacePosition;
-(void)surfaceDidAppear:(BOOL)arg1 ;
-(id)initWithSurfaceData:(id)arg1 dismissBlock:(/*^block*/id)arg2 ;
-(void)_dismissSurfaceView;
@end
