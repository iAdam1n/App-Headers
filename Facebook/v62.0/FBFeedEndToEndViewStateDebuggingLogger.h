/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface FBFeedEndToEndViewStateDebuggingLogger : NSObject {

	BOOL _applicationActive;
	BOOL _viewAppeared;
	unsigned long long _state;
	NSObject*<OS_dispatch_source> _timer;

}
+(id)loggerWithUserSession:(id)arg1 feedType:(long long)arg2 ;
-(void)feedViewStateDidUpdate:(unsigned long long)arg1 ;
-(id)init;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)_timerFired;
-(void)_cancelTimer;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(void)_updateTimer;
@end
