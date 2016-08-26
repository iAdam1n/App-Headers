/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBLoomTraceControlling.h>

@protocol OS_dispatch_queue;
@class FBLoomQPLController, FBLoomTraceManager, FBTimer, NSObject;

@interface FBLoomTimerController : NSObject <FBLoomTraceControlling> {

	FBLoomQPLController* _QPLController;
	FBLoomTraceManager* _traceManager;
	FBTimer* _timer;
	BOOL _hasFirstTimer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (__weak) FBLoomTraceManager * manager;              //@synthesize traceManager=_traceManager - In the implementation block
-(void)traceManager:(id)arg1 traceDidTimeout:(id)arg2 ;
-(void)traceManager:(id)arg1 traceDidFail:(id)arg2 ;
-(id)initWithQPLController:(id)arg1 ;
-(void)activateTrace;
-(void)setupRecurringTimer;
-(FBLoomTraceManager *)manager;
-(void)setManager:(FBLoomTraceManager *)arg1 ;
@end
