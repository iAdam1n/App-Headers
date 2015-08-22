/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBFeedVideoViewPoller.h>

@protocol FBFeedVideoViewPoller <NSObject>
@property (assign,nonatomic,__weak) id<FBFeedVideoViewPollerTarget> target; 
@required
-(void)addSuspensionReason:(unsigned long long)arg1;
-(void)removeSuspensionReason:(unsigned long long)arg1;
-(void)setTarget:(id)arg1;
-(id<FBFeedVideoViewPollerTarget>)target;

@end


@protocol OS_dispatch_source, FBFeedVideoViewPollerTarget;
@class NSObject, NSString;

@interface FBFeedVideoViewPoller : NSObject <FBFeedVideoViewPoller> {

	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _suspensionReasons;
	id<FBFeedVideoViewPollerTarget> _target;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBFeedVideoViewPollerTarget> target;              //@synthesize target=_target - In the implementation block
-(void)timerFired;
-(void)addSuspensionReason:(unsigned long long)arg1 ;
-(void)removeSuspensionReason:(unsigned long long)arg1 ;
-(id)init;
-(void)setTarget:(id<FBFeedVideoViewPollerTarget>)arg1 ;
-(id<FBFeedVideoViewPollerTarget>)target;
-(void)_updateTimer;
@end
