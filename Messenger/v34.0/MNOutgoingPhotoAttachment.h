/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBOutgoingAttachment.h>

@class NSData, NSString, NSURL;

@interface MNOutgoingPhotoAttachment : NSObject <FBOutgoingAttachment> {

	NSData* _attachmentData;
	NSString* _mimeType;
	NSString* _attachmentFilename;
	NSURL* _externalURL;
	NSString* _attachmentDataSha256Hash;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMimeType:(id)arg1 attachmentData:(id)arg2 attachmentFilename:(id)arg3 externalURL:(id)arg4 ;
-(id)attachmentDataSHA256Hash;
-(id)externalURL;
-(id)mimeType;
-(id)attachmentFilename;
-(id)attachmentData;
@end
