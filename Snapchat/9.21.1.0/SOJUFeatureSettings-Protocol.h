//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber;

@protocol SOJUFeatureSettings <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *qrcodeEnabled;
@property(readonly, copy, nonatomic) NSNumber *barcodeEnabled;
@property(readonly, copy, nonatomic) NSNumber *lensStoreAvailable;
@property(readonly, copy, nonatomic) NSNumber *payReplaySnaps;
@property(readonly, copy, nonatomic) NSNumber *travelMode;
@property(readonly, copy, nonatomic) NSNumber *replaySnaps;
@property(readonly, copy, nonatomic) NSNumber *frontFacingFlash;
@property(readonly, copy, nonatomic) NSNumber *visualFilters;
@property(readonly, copy, nonatomic) NSNumber *smartFilters;
@end
