//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Manager, NSNotificationCenter, SCAPIClient, SCBackgroundFetchLogger, SCStudySettings;

@interface SCBackgroundFetchController : NSObject
{
    Manager *_manager;
    SCStudySettings *_studySettings;
    SCAPIClient *_httpClient;
    SCBackgroundFetchLogger *_logger;
    NSNotificationCenter *_notificationCenter;
    double _fetchInterval;
    double _appMustBeActiveThreshold;
    double _lastAppActiveTimestamp;
}

@property(nonatomic) double lastAppActiveTimestamp; // @synthesize lastAppActiveTimestamp=_lastAppActiveTimestamp;
- (void).cxx_destruct;
@property(readonly, nonatomic) double appMustBeActiveThreshold; // @synthesize appMustBeActiveThreshold=_appMustBeActiveThreshold;
@property(readonly, nonatomic) double fetchInterval; // @synthesize fetchInterval=_fetchInterval;
- (_Bool)shouldPerformBackgroundFetch;
- (void)_performFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)performFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithManager:(id)arg1 studySettings:(id)arg2 httpClient:(id)arg3 logger:(id)arg4 notificationCenter:(id)arg5;

@end
