/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MNSecureMessageReportableContent : FBValueObject <NSCoding, NSCopying> {

	NSData* _originalPayload;
	NSData* _serverSignature;

}

@property (nonatomic,copy,readonly) NSData * originalPayload;              //@synthesize originalPayload=_originalPayload - In the implementation block
@property (nonatomic,copy,readonly) NSData * serverSignature;              //@synthesize serverSignature=_serverSignature - In the implementation block
-(id)initWithOriginalPayload:(id)arg1 serverSignature:(id)arg2 ;
-(NSData *)originalPayload;
-(NSData *)serverSignature;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
