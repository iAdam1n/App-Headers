//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSData, NSDictionary;

@interface MTDatacenterAuthInfo : NSObject <NSCoding>
{
    NSData *_authKey;
    long long _authKeyId;
    NSArray *_saltSet;
    NSDictionary *_authKeyAttributes;
}

@property(readonly, nonatomic) NSDictionary *authKeyAttributes; // @synthesize authKeyAttributes=_authKeyAttributes;
@property(readonly, nonatomic) NSArray *saltSet; // @synthesize saltSet=_saltSet;
@property(readonly, nonatomic) long long authKeyId; // @synthesize authKeyId=_authKeyId;
@property(readonly, nonatomic) NSData *authKey; // @synthesize authKey=_authKey;
- (void).cxx_destruct;
- (id)mergeSaltSet:(id)arg1 forTimestamp:(double)arg2;
- (long long)authSaltForMessageId:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthKey:(id)arg1 authKeyId:(long long)arg2 saltSet:(id)arg3 authKeyAttributes:(id)arg4;

@end
