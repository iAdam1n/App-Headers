//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString;

@protocol SOJUAnalyticsCommonParams <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *sessionId;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *scUserAgent;
@property(readonly, copy, nonatomic) NSString *region;
@property(readonly, copy, nonatomic) NSString *latlon;
@property(readonly, copy, nonatomic) NSNumber *friendCount;
@property(readonly, copy, nonatomic) NSString *country;
@property(readonly, copy, nonatomic) NSString *city;
@end
