//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUIdentityFindNearbyFriendsRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSNumber *_lat;
    NSNumber *_longValue;
    NSNumber *_accuracyMeters;
    NSNumber *_totalPollingDurationMillis;
    NSString *_action;
}

+ (id)withJUIdentityFindNearbyFriendsRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setAction:(id)arg1;
- (id)setTotalPollingDurationMillis:(id)arg1;
- (id)setAccuracyMeters:(id)arg1;
- (id)setLongValue:(id)arg1;
- (id)setLat:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)build;

@end
