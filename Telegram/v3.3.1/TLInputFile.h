//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLObject.h"

@class NSString;

@interface TLInputFile : NSObject <TLObject>
{
    int _parts;
    long long _n_id;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int parts; // @synthesize parts=_parts;
@property(nonatomic) long long n_id; // @synthesize n_id=_n_id;
- (void).cxx_destruct;
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
