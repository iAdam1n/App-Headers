//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLObject.h"

@class NSArray, NSString;

@interface TLcontacts_ImportedContacts : NSObject <TLObject>
{
    NSArray *_imported;
    NSArray *_retry_contacts;
    NSArray *_users;
}

@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSArray *retry_contacts; // @synthesize retry_contacts=_retry_contacts;
@property(retain, nonatomic) NSArray *imported; // @synthesize imported=_imported;
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

