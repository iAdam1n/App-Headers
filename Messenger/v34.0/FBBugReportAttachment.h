/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/NSCoding.h>
#import <Messenger/FBInvalidating.h>

@class FBAccessToken, NSString;

@interface FBBugReportAttachment : NSObject <NSCoding, FBInvalidating> {

	FBAccessToken* _accessToken;
	int _type;
	NSString* _filename;
	NSString* _backupPath;
	NSString* _bugID;

}

@property (nonatomic,copy) NSString * filename;                        //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSString * backupPath;                      //@synthesize backupPath=_backupPath - In the implementation block
@property (nonatomic,copy) NSString * bugID;                           //@synthesize bugID=_bugID - In the implementation block
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(BOOL)_createAttachmentsFolders;
+(id)_filenameForAttachment:(id)arg1 ;
+(id)savedAttachments;
+(void)saveAttachments:(id)arg1 ;
-(void)setBugID:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 filename:(id)arg2 bugID:(id)arg3 accessToken:(id)arg4 ;
-(void)setBackupPath:(NSString *)arg1 ;
-(NSString *)bugID;
-(id)_attachmentData;
-(id)initWithImageData:(id)arg1 filename:(id)arg2 composerPath:(id)arg3 bugID:(id)arg4 accessToken:(id)arg5 ;
-(NSString *)backupPath;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(id)parameters;
@end

