/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MNSecureMessagingAttachmentEncryptionConfig : FBValueObject <NSCoding, NSCopying> {

	NSData* _key;
	NSData* _iv;

}

@property (nonatomic,copy,readonly) NSData * key;              //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSData * iv;               //@synthesize iv=_iv - In the implementation block
-(id)initWithKey:(id)arg1 iv:(id)arg2 ;
-(NSData *)iv;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)key;
@end
