//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLMetaRpc.h"

@class NSString;

@interface TLRPCauth_sendCode : TLMetaRpc
{
    int _sms_type;
    int _api_id;
    NSString *_phone_number;
    NSString *_api_hash;
    NSString *_lang_code;
}

@property(retain, nonatomic) NSString *lang_code; // @synthesize lang_code=_lang_code;
@property(retain, nonatomic) NSString *api_hash; // @synthesize api_hash=_api_hash;
@property(nonatomic) int api_id; // @synthesize api_id=_api_id;
@property(nonatomic) int sms_type; // @synthesize sms_type=_sms_type;
@property(retain, nonatomic) NSString *phone_number; // @synthesize phone_number=_phone_number;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;
- (int)layerVersion;
- (int)impliedResponseSignature;
- (Class)responseClass;

@end
