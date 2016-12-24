/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TLMetaRpc.h>

@class NSString;

@interface TLRPCaccount_sendChangePhoneCode : TLMetaRpc {

	BOOL _current_number;
	int _flags;
	NSString* _phone_number;

}

@property (assign,nonatomic) int flags;                            //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSString * phone_number;              //@synthesize phone_number=_phone_number - In the implementation block
@property (assign,nonatomic) BOOL current_number;                  //@synthesize current_number=_current_number - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLdeserialize:(id)arg1 signature:(int)arg2 environment:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)TLserialize:(id)arg1 ;
-(int)impliedResponseSignature;
-(int)layerVersion;
-(void)setPhone_number:(NSString *)arg1 ;
-(NSString *)phone_number;
-(BOOL)current_number;
-(void)setCurrent_number:(BOOL)arg1 ;
-(Class)responseClass;
-(void)setFlags:(int)arg1 ;
-(int)flags;
@end
