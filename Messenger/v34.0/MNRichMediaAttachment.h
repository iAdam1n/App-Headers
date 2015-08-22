/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/FBOutgoingAttachment.h>

@class NSString, NSData;

@interface MNRichMediaAttachment : FBValueObject <NSCopying, FBOutgoingAttachment> {

	NSString* _mimeType;
	NSData* _attachmentData;
	NSString* _attachmentFilename;
	NSString* _preTranscodeDataSHA256Hash;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * mimeType;                                //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy,readonly) NSData * attachmentData;                            //@synthesize attachmentData=_attachmentData - In the implementation block
@property (nonatomic,copy,readonly) NSString * attachmentFilename;                      //@synthesize attachmentFilename=_attachmentFilename - In the implementation block
@property (nonatomic,copy,readonly) NSString * preTranscodeDataSHA256Hash;              //@synthesize preTranscodeDataSHA256Hash=_preTranscodeDataSHA256Hash - In the implementation block
-(NSString *)preTranscodeDataSHA256Hash;
-(id)initWithMimeType:(id)arg1 attachmentData:(id)arg2 attachmentFilename:(id)arg3 preTranscodeDataSHA256Hash:(id)arg4 ;
-(NSString *)mimeType;
-(NSString *)attachmentFilename;
-(NSData *)attachmentData;
@end
