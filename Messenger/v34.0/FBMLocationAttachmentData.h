/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSData, FBMLocationAttachmentDataToSend;

@interface FBMLocationAttachmentData : FBValueObject <NSCopying, NSCoding> {

	NSData* _serializedExtensibleAttachment;
	FBMLocationAttachmentDataToSend* _dataToSend;

}

@property (nonatomic,copy,readonly) NSData * serializedExtensibleAttachment;                   //@synthesize serializedExtensibleAttachment=_serializedExtensibleAttachment - In the implementation block
@property (nonatomic,copy,readonly) FBMLocationAttachmentDataToSend * dataToSend;              //@synthesize dataToSend=_dataToSend - In the implementation block
-(id)initWithSerializedExtensibleAttachment:(id)arg1 dataToSend:(id)arg2 ;
-(NSData *)serializedExtensibleAttachment;
-(FBMLocationAttachmentDataToSend *)dataToSend;
@end

