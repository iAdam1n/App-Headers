/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/GPBMessage.h>

@class NSString, NSData, WAPBContextInfo;

@interface WAPBMessage_VideoMessage : GPBMessage

@property (nonatomic,copy) NSString * URL; 
@property (assign,nonatomic) BOOL hasURL; 
@property (nonatomic,copy) NSString * mimetype; 
@property (assign,nonatomic) BOOL hasMimetype; 
@property (nonatomic,copy) NSData * fileSha256; 
@property (assign,nonatomic) BOOL hasFileSha256; 
@property (assign,nonatomic) unsigned long long fileLength; 
@property (assign,nonatomic) BOOL hasFileLength; 
@property (assign,nonatomic) unsigned seconds; 
@property (assign,nonatomic) BOOL hasSeconds; 
@property (nonatomic,copy) NSData * mediaKey; 
@property (assign,nonatomic) BOOL hasMediaKey; 
@property (nonatomic,copy) NSString * caption; 
@property (assign,nonatomic) BOOL hasCaption; 
@property (assign,nonatomic) BOOL gifPlayback; 
@property (assign,nonatomic) BOOL hasGifPlayback; 
@property (nonatomic,copy) NSData * jpegThumbnail; 
@property (assign,nonatomic) BOOL hasJpegThumbnail; 
@property (nonatomic,retain) WAPBContextInfo * contextInfo; 
@property (assign,nonatomic) BOOL hasContextInfo; 
@property (nonatomic,copy) NSData * streamingSidecar; 
@property (assign,nonatomic) BOOL hasStreamingSidecar; 
@property (assign,nonatomic) int gifAttribution; 
@property (assign,nonatomic) BOOL hasGifAttribution; 
+(id)descriptor;
@end
