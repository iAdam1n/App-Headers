//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdTrackInfo.h"

@class NSString;

@interface SOJUAdTrackInfo : NSObject <SOJUAdTrackInfo>
{
    NSString *_userData;
    NSString *_trackHostAndPath;
}

@property(readonly, copy, nonatomic) NSString *trackHostAndPath; // @synthesize trackHostAndPath=_trackHostAndPath;
@property(readonly, copy, nonatomic) NSString *userData; // @synthesize userData=_userData;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserData:(id)arg1 trackHostAndPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
