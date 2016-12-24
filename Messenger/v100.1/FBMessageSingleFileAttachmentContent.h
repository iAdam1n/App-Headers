/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBMessageSingleAttachmentContentDedupable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBMessageSingleFileAttachmentContent : FBValueObject <FBMessageSingleAttachmentContentDedupable, NSCopying> {

	NSString* _offlineFileId;
	NSURL* _fileURL;
	NSString* _filename;

}

@property (nonatomic,copy,readonly) NSString * offlineFileId;              //@synthesize offlineFileId=_offlineFileId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;                   //@synthesize filename=_filename - In the implementation block
-(id)initWithOfflineFileId:(id)arg1 fileURL:(id)arg2 filename:(id)arg3 ;
-(NSString *)offlineFileId;
-(id)dedupeKey;
-(NSURL *)fileURL;
-(NSString *)filename;
@end
