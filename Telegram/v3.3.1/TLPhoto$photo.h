//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLPhoto.h"

@class NSArray;

@interface TLPhoto$photo : TLPhoto
{
    int _date;
    long long _access_hash;
    NSArray *_sizes;
}

@property(retain, nonatomic) NSArray *sizes; // @synthesize sizes=_sizes;
@property(nonatomic) int date; // @synthesize date=_date;
@property(nonatomic) long long access_hash; // @synthesize access_hash=_access_hash;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end

