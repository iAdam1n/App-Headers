/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAURLDownloadTaskData.h>

@class NSString, NSURL, NSData;

@interface WAMMSDownloadTaskData : WAURLDownloadTaskData {

	NSString* _originalHost;
	BOOL _autodownload;
	int _mediaType;
	NSURL* _fallbackRemoteURL;
	NSData* _mediaKey;
	NSString* _mediaHash;
	NSString* _MIMEType;
	NSString* _fileExtension;

}

@property (nonatomic,copy,readonly) NSURL * fallbackRemoteURL;                       //@synthesize fallbackRemoteURL=_fallbackRemoteURL - In the implementation block
@property (getter=isAutodownload,nonatomic,readonly) BOOL autodownload;              //@synthesize autodownload=_autodownload - In the implementation block
@property (assign,nonatomic) int mediaType;                                          //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSData * mediaKey;                                        //@synthesize mediaKey=_mediaKey - In the implementation block
@property (nonatomic,copy) NSString * mediaHash;                                     //@synthesize mediaHash=_mediaHash - In the implementation block
@property (nonatomic,copy) NSString * MIMEType;                                      //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,copy) NSString * fileExtension;                                 //@synthesize fileExtension=_fileExtension - In the implementation block
+(Class)taskClass;
-(void)setMediaKey:(NSData *)arg1 ;
-(void)setMIMEType:(NSString *)arg1 ;
-(void)setMediaHash:(NSString *)arg1 ;
-(id)modifyRequestConfigForRetry:(id)arg1 bytesReceived:(long long)arg2 error:(id)arg3 ;
-(BOOL)endToEndEncrypted;
-(BOOL)validateResponseForTask:(id)arg1 error:(id*)arg2 ;
-(void)validateDownloadedFileForTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transformDownloadedFileForTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)fallbackRemoteURL;
-(BOOL)isAutodownload;
-(NSString *)mediaHash;
-(void)calculateHashOfFileAtPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transformImageAtURLIfNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transformVideoAtURLIfNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMessage:(id)arg1 autodownload:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)MIMEType;
-(NSString *)fileExtension;
-(void)setFileExtension:(NSString *)arg1 ;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(NSData *)mediaKey;
@end
