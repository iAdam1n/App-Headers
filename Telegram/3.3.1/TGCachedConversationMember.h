//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSCoding.h"

@class NSString;

@interface TGCachedConversationMember : NSObject <PSCoding>
{
    int _uid;
    int _role;
    int _timestamp;
}

@property(readonly, nonatomic) int timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) int role; // @synthesize role=_role;
@property(readonly, nonatomic) int uid; // @synthesize uid=_uid;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithKeyValueCoder:(id)arg1;
- (id)initWithKeyValueCoder:(id)arg1;
- (id)initWithUid:(int)arg1 role:(int)arg2 timestamp:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
