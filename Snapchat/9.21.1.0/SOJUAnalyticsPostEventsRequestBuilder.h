//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SOJUAnalyticsCommonParams;

@interface SOJUAnalyticsPostEventsRequestBuilder : NSObject
{
    NSString *_batchId;
    SOJUAnalyticsCommonParams *_commonParams;
    NSArray *_events;
}

+ (id)withJUAnalyticsPostEventsRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setEvents:(id)arg1;
- (id)setCommonParams:(id)arg1;
- (id)setBatchId:(id)arg1;
- (id)build;

@end
