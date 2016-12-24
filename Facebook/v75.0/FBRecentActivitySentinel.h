/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDate, NSMutableArray, NSMutableDictionary, NSObject, FBRecentActivitySentinelSettings, NSDateFormatter;

@interface FBRecentActivitySentinel : NSObject {

	NSDate* _lastPersistToDiskTime;
	NSMutableArray* _recentEventsRingBuffer;
	NSMutableDictionary* _recentEventsRingBufferContainer;
	NSObject*<OS_dispatch_queue> _recentEventsRingBufferContainerSyncQueue;
	FBRecentActivitySentinelSettings* _settings;
	NSDateFormatter* _dateFormatter;
	NSObject*<OS_dispatch_queue> _saveToDiskQueue;

}
-(void)significantEventDidOccur:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(void)significantEventDidOccur:(id)arg1 module:(id)arg2 extraBlock:(/*^block*/id)arg3 ;
-(id)recentActivitiesFilename;
-(id)previousRecentActivitiesFilename;
-(void)moveSavedFileToPrevious;
-(id)recentActivitiesFromDisk;
-(BOOL)timeIsWithinTimeInterval:(id)arg1 timeInterval:(double)arg2 ;
-(id)arrayOfStrings:(id)arg1 ;
-(id)arrayOfStringsWithEvaluatedExtraBlocks:(id)arg1 ;
-(void)addSignificantEventToRecentEventsRingBufferContainer:(id)arg1 module:(id)arg2 extra:(id)arg3 extraBlock:(/*^block*/id)arg4 ;
-(void)recordEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(id)recentActivitiesFromCurrentSession:(BOOL)arg1 ;
-(id)recentActivitiesFromPreviousSession;
-(id)customizeActivitiesBeforeReport:(id)arg1 ;
-(void)recentActivitySentinelOnlyEventDidOccur:(id)arg1 extra:(id)arg2 ;
-(id)initWithSettings:(id)arg1 ;
@end
