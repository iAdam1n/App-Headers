/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, FBDataWithRedactedDescription;

@interface MNSecureMessagingKeyPair : FBValueObject <NSCoding, NSCopying> {

	NSData* _publicKey;
	FBDataWithRedactedDescription* _privateKey;

}

@property (nonatomic,copy,readonly) NSData * publicKey;                                      //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy,readonly) FBDataWithRedactedDescription * privateKey;              //@synthesize privateKey=_privateKey - In the implementation block
-(id)initWithPublicKey:(id)arg1 privateKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)publicKey;
-(FBDataWithRedactedDescription *)privateKey;
@end
