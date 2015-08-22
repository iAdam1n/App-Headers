/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBBackgroundFetchRequestDelegate.h>
#import <Messenger/FBAppService.h>

@protocol OS_dispatch_queue;
@class NSDate, NSMutableArray, NSMutableSet, NSObject, FBReachabilityAnnouncer, NSString, NSSet;

@interface FBBackgroundFetchManager : NSObject <FBBackgroundFetchRequestDelegate, FBAppService> {

	unsigned long long _backgroundFetchCountSinceLastBackgrounded;
	NSDate* _lastBackgroundedDate;
	NSDate* _lastBackgroundFetchDate;
	NSMutableArray* _registeredObservers;
	NSMutableSet* _pendingRequests;
	BOOL _hasPendingIntervalFetch;
	NSObject*<OS_dispatch_queue> _applicationQueue;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	BOOL _sharedManagerEnabled;

}

@property (assign,nonatomic) BOOL sharedManagerEnabled;                             //@synthesize sharedManagerEnabled=_sharedManagerEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appServiceID; 
@property (nonatomic,copy,readonly) NSSet * appServiceDependencyIDs; 
@property (nonatomic,readonly) unsigned long long serviceStartupLevel; 
+(void)logEvent:(id)arg1 extraData:(id)arg2 ;
+(void)logBackgroundFetchwithCategory:(id)arg1 ;
+(id)intervalToString:(double)arg1 ;
+(id)resultToString:(unsigned long long)arg1 ;
+(unsigned long long)stringToResult:(id)arg1 ;
+(double)stringToInterval:(id)arg1 ;
+(id)sharedManager;
-(id)analyticsModule;
-(void)onApplicationDidEnterBackground:(id)arg1 ;
-(unsigned long long)serviceStartupLevel;
-(NSString *)appServiceID;
-(NSSet *)appServiceDependencyIDs;
-(void)startAppServiceWithDependencies:(id)arg1 ;
-(void)stopAppServiceWithDependencies:(id)arg1 ;
-(void)onApplicationWillEnterForeground:(id)arg1 ;
-(void)updateMinimumInterval;
-(BOOL)isSharedManager;
-(BOOL)sharedManagerEnabled;
-(double)resultingMinimumIntervalFromIntervalOne:(double)arg1 intervalTwo:(double)arg2 ;
-(id)_callableRegisteredObservers:(id)arg1 ;
-(void)performFetchFromAppDelegateWithCompletionHandler:(/*^block*/id)arg1 withNotification:(id)arg2 ;
-(void)logBackgroundFetchWithResult:(unsigned long long)arg1 observerCount:(unsigned long long)arg2 duration:(double)arg3 notification:(BOOL)arg4 ;
-(void)setSharedManagerEnabled:(BOOL)arg1 ;
-(id)registerPushNotificationObserver:(id)arg1 withMinimumIntervalUnderCellular:(double)arg2 ;
-(id)registerObserver:(id)arg1 withMinimumInterval:(FBBackgroundFetchMinimumInterval)arg2 ;
-(void)performFetchFromAppDelegateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)registeredObservers;
-(void)backgroundFetchFinished:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)unregisterObserver:(id)arg1 ;
-(double)minimumInterval;
@end
