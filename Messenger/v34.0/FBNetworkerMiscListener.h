/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBHttpExecutorListener.h>

@protocol OS_dispatch_queue;
@class FBHttpExecutor, NSNotificationCenter, FBNetworkActivityManager, NSObject, NSString;

@interface FBNetworkerMiscListener : NSObject <FBHttpExecutorListener> {

	FBHttpExecutor* _executor;
	NSNotificationCenter* _notificationCenter;
	FBNetworkActivityManager* _activityManager;
	unsigned long long _taskID;
	BOOL _backgrounded;
	BOOL _idle;
	unsigned long long _taskCount;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedListenerForExecutor:(id)arg1 ;
-(void)httpRequest:(id)arg1 didStartWithStatus:(id)arg2 ;
-(void)httpRequestWasAdded:(id)arg1 ;
-(void)httpRequest:(id)arg1 didCancelWithStatus:(id)arg2 wasStarted:(BOOL)arg3 ;
-(void)httpRequest:(id)arg1 didSucceedWithStatus:(id)arg2 ;
-(void)httpRequest:(id)arg1 didFailWithStatus:(id)arg2 error:(id)arg3 wasStarted:(BOOL)arg4 ;
-(void)httpRequest:(id)arg1 willRetryWithStatus:(id)arg2 error:(id)arg3 ;
-(id)initWithExecutor:(id)arg1 notificationCenter:(id)arg2 activityManager:(id)arg3 ;
-(void)_willEnterForeground;
-(void)_didEnterBackground;
-(void)incrementActiveCount;
-(void)decrementActiveCount;
-(void)setIdle:(BOOL)arg1 ;
-(void)_endBackgroundTask;
-(void)dealloc;
-(void)_beginBackgroundTask;
@end
