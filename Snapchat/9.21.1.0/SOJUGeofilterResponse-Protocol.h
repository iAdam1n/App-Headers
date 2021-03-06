//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUDynamicContentSetting, SOJUGeofence, SOJULensData, SOJUSponsoredSlugPosAndText;

@protocol SOJUGeofilterResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *gplayIapId;
@property(readonly, copy, nonatomic) NSString *appstoreIapId;
@property(readonly, copy, nonatomic) NSNumber *isFeatured;
@property(readonly, copy, nonatomic) SOJULensData *lensData;
@property(readonly, copy, nonatomic) NSNumber *isLens;
@property(readonly, copy, nonatomic) SOJUDynamicContentSetting *dynamicContentSetting;
@property(readonly, copy, nonatomic) NSString *sponsoredSlugImgLink;
@property(readonly, copy, nonatomic) NSString *sponsoredSlugPosition;
@property(readonly, copy, nonatomic) SOJUSponsoredSlugPosAndText *sponsoredSlug;
@property(readonly, copy, nonatomic) NSNumber *isSponsored;
@property(readonly, copy, nonatomic) NSNumber *clientCacheTtlMinutes;
@property(readonly, copy, nonatomic) NSDictionary *clientCacheExpirationDateTime;
@property(readonly, copy, nonatomic) NSNumber *isDynamicGeofilter;
@property(readonly, copy, nonatomic) NSArray *dynamicContent;
@property(readonly, copy, nonatomic) NSArray *position;
@property(readonly, copy, nonatomic) NSNumber *priority;
@property(readonly, copy, nonatomic) SOJUGeofence *geofence;
@property(readonly, copy, nonatomic) NSString *image;
@property(readonly, copy, nonatomic) NSNumber *expiresCountdown;
@property(readonly, copy, nonatomic) NSString *filterId;
@end

