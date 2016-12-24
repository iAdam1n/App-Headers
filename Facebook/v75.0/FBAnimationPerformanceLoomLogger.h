/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBLoomTraceProvider.h>
#import <Facebook/FBAnimationPerformanceTrackerDelegate.h>
#import <Facebook/FBAnimationPerformanceLogging.h>

@class NSString, FBAnalytics, FBAnimationPerformanceTracker;

@interface FBAnimationPerformanceLoomLogger : NSObject <FBLoomTraceProvider, FBAnimationPerformanceTrackerDelegate, FBAnimationPerformanceLogging> {

	unsigned _mainMachPort;
	NSString* _moduleName;
	NSString* _eventName;
	FBAnalytics* _analytics;
	atomic<bool> _isTracing;
	FBAnimationPerformanceTracker* _tracker;
	/*^block*/id _extrasBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMainMachPort:(unsigned)arg1 moduleName:(id)arg2 eventName:(id)arg3 analytics:(id)arg4 trackerConfiguration:(FBAnimationPerformanceTrackerConfiguration)arg5 ;
-(void)loomTraceWillBeginWithContext:(id)arg1 ;
-(void)loomTraceDidEnd;
-(unsigned long long)eventProviderIdentifier;
-(id)customHeaderFromProviderWithContext:(id)arg1 ;
-(void)reportDurationInMS:(long long)arg1 smallDropEvents:(double)arg2 largeDropEvents:(double)arg3 totalStallTimeInMS:(long long)arg4 ;
-(void)reportStackTrace:(id)arg1 ;
-(void)willReportStackTraces;
-(void)didReportStackTraces;
-(void)stopWithAdditionalExtras:(/*^block*/id)arg1 ;
-(void)stop;
-(void)start;
@end
