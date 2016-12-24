/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/KochavaNetworkAccessDelegate.h>
#import <SolitaireFree/KochavaLocationManagerDelegate.h>
#import <SolitaireFree/KochavaiAdAttributionDelegate.h>

@protocol KochavaTrackerClientDelegate;
@class NSString;

@interface KochavaTracker : NSObject <KochavaNetworkAccessDelegate, KochavaLocationManagerDelegate, KochavaiAdAttributionDelegate> {

	id<KochavaTrackerClientDelegate> trackerDelegate;

}

@property (assign,nonatomic) id<KochavaTrackerClientDelegate> trackerDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)trackEvent:(id)arg1 :(id)arg2 ;
-(id)initWithKochavaAppId:(id)arg1 ;
-(void)setLimitAdTracking:(BOOL)arg1 ;
-(void)iAdAttributionData:(id)arg1 :(BOOL)arg2 ;
-(id)initKochavaWithParams:(id)arg1 ;
-(void)enableConsoleLogging:(BOOL)arg1 ;
-(void)identityLinkEvent:(id)arg1 ;
-(void)spatialEvent:(id)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
-(void)sendDeepLink:(id)arg1 :(id)arg2 ;
-(id)retrieveAttribution;
-(id)initWithKochavaAppId:(id)arg1 :(id)arg2 ;
-(id)initWithKochavaAppId:(id)arg1 :(id)arg2 :(BOOL)arg3 ;
-(id)initWithKochavaAppId:(id)arg1 :(id)arg2 :(BOOL)arg3 :(BOOL)arg4 ;
-(id)initWithKochavaAppId:(id)arg1 :(id)arg2 :(BOOL)arg3 :(BOOL)arg4 :(BOOL)arg5 ;
-(id)getKochavaDeviceId;
-(id)createDeviceId;
-(void)appDidLaunch:(id)arg1 ;
-(void)initEvent:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(BOOL)arg5 ;
-(void)kochavaAttributionCheckTimerFired:(id)arg1 ;
-(void)rcascadeTimerFired:(id)arg1 ;
-(void)checkReportLocation;
-(void)initialEvent;
-(void)checkWatchPropertiesChanged;
-(void)determineOutsideServices:(id)arg1 ;
-(BOOL)isOSGenuine;
-(id)enqueueKochavaEvent:(id)arg1 ;
-(id)currentLocalTime;
-(id)returnUptime;
-(id)returnAndSetUptimeDelta;
-(void)iAdAttributionPayloadTimeout:(id)arg1 ;
-(void)handleWatchEvents:(id)arg1 :(BOOL)arg2 ;
-(void)appendBatchEvent:(id)arg1 ;
-(id)getFullFilename:(id)arg1 ;
-(void)sessionEvent:(id)arg1 ;
-(void)sendQueueEvents;
-(void)flushBatchQueue:(BOOL)arg1 ;
-(void)stopTrackerWaitTimer;
-(BOOL)isEventSending:(id)arg1 ;
-(void)batchQueueTimerFired:(id)arg1 ;
-(void)retryiAdAttribution:(id)arg1 ;
-(void)sendInitial:(id)arg1 ;
-(void)kochavaAttributionTimerFired:(id)arg1 ;
-(void)handleWatchEvents:(id)arg1 ;
-(void)KochavaRetrieveAttribution:(id)arg1 ;
-(void)KochavaInitResult:(id)arg1 ;
-(void)KochavaInitialResult:(id)arg1 ;
-(void)currentLocationUpdate:(id)arg1 ;
-(id)swiftInitKochavaWithParams:(id)arg1 ;
-(void)swiftEnableConsoleLogging:(BOOL)arg1 ;
-(void)swiftTrackEvent:(id)arg1 :(id)arg2 ;
-(void)swiftIdentityLinkEvent:(id)arg1 ;
-(void)swiftSpatialEvent:(id)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
-(void)swiftSetLimitAdTracking:(BOOL)arg1 ;
-(void)swiftSendDeepLink:(id)arg1 :(id)arg2 ;
-(id)swiftRetrieveAttribution;
-(void)trackEvent:(id)arg1 withValue:(id)arg2 andReceipt:(id)arg3 ;
-(void)handleWatchEvents;
-(void)trackWatchEvent:(id)arg1 :(id)arg2 ;
-(id<KochavaTrackerClientDelegate>)trackerDelegate;
-(void)setTrackerDelegate:(id<KochavaTrackerClientDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)locationServicesApproved;
-(void)appWillResignActive:(id)arg1 ;
-(void)appDidBecomeActive:(id)arg1 ;
-(void)appWillTerminate:(id)arg1 ;
@end
