/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPoller.h>

@protocol OS_dispatch_source, FBPollerTarget;
@class NSObject, NSString;

@interface FBBasicPoller : NSObject <FBPoller> {

	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _suspensionReasons;
	unsigned long long _interval;
	NSString* _logCounter;
	NSString* _eventName;
	id<FBPollerTarget> _target;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPollerTarget> target;              //@synthesize target=_target - In the implementation block
-(void)addSuspensionReason:(unsigned long long)arg1 ;
-(void)removeSuspensionReason:(unsigned long long)arg1 ;
-(id)initWithPollingInterval:(unsigned long long)arg1 logCounter:(id)arg2 eventName:(id)arg3 ;
-(void)dealloc;
-(void)setTarget:(id<FBPollerTarget>)arg1 ;
-(id<FBPollerTarget>)target;
-(void)_timerFired;
-(void)_updateTimer;
@end
