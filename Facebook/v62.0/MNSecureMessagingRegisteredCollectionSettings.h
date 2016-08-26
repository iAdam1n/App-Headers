/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, FBStringWithRedactedDescription;

@interface MNSecureMessagingRegisteredCollectionSettings : FBValueObject <NSCoding, NSCopying> {

	NSData* _publicKey;
	long long _deviceStatus;
	FBStringWithRedactedDescription* _codeName;

}

@property (nonatomic,copy,readonly) NSData * publicKey;                                      //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) long long deviceStatus;                                       //@synthesize deviceStatus=_deviceStatus - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * codeName;              //@synthesize codeName=_codeName - In the implementation block
-(id)initWithPublicKey:(id)arg1 deviceStatus:(long long)arg2 codeName:(id)arg3 ;
-(FBStringWithRedactedDescription *)codeName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)deviceStatus;
-(NSData *)publicKey;
@end
