//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLObject.h"

@class NSString;

@interface TLMessageGroup : NSObject <TLObject>
{
    int _min_id;
    int _max_id;
    int _count;
    int _date;
}

@property(nonatomic) int date; // @synthesize date=_date;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) int max_id; // @synthesize max_id=_max_id;
@property(nonatomic) int min_id; // @synthesize min_id=_min_id;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
