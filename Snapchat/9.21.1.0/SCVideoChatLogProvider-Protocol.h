//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SCAUserTrackedEvent;

@protocol SCVideoChatLogProvider <NSObject>
- (NSString *)flurryHistogramBucketFor:(double)arg1 and:(double)arg2 and:(int)arg3;
- (void)logEndSessionForType:(NSString *)arg1;
- (void)logStartSessionForType:(NSString *)arg1;
- (void)logUserTrackedEvent:(SCAUserTrackedEvent *)arg1;
- (void)logEvent:(NSString *)arg1 parameters:(NSDictionary *)arg2 secretParameters:(NSDictionary *)arg3;
- (void)logEvent:(NSString *)arg1 parameters:(NSDictionary *)arg2;
- (void)logEvent:(NSString *)arg1;
- (void)logUserTraceEvent:(NSString *)arg1;
@end
