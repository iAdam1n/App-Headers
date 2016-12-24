/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface FBSymmetricEncryptionAESInput : FBValueObject <NSCopying> {

	NSData* _data;
	NSData* _key;
	NSData* _iv;

}

@property (nonatomic,copy,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSData * key;               //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSData * iv;                //@synthesize iv=_iv - In the implementation block
-(NSData *)iv;
-(id)initWithData:(id)arg1 key:(id)arg2 iv:(id)arg3 ;
-(NSData *)key;
-(NSData *)data;
@end
