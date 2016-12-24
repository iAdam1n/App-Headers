/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBOutgoingAttachment.h>

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
-(id)attachmentData;
-(id)initWithMimeType:(id)arg1 attachmentData:(id)arg2 attachmentFilename:(id)arg3 externalURL:(id)arg4 ;
-(id)mimeType;
-(id)externalURL;
-(id)attachmentFilename;
@end
