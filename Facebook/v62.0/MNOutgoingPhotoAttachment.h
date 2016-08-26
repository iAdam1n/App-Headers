/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBOutgoingAttachment.h>

@class NSData, NSString, NSURL;

@interface MNOutgoingPhotoAttachment : NSObject <FBOutgoingAttachment> {

	NSData* _attachmentData;
	NSString* _mimeType;
	NSString* _attachmentFilename;
	NSURL* _externalURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMimeType:(id)arg1 attachmentData:(id)arg2 attachmentFilename:(id)arg3 externalURL:(id)arg4 ;
-(id)attachmentData;
-(id)mimeType;
-(id)externalURL;
-(id)attachmentFilename;
@end
