/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/GPBMessage.h>

@class NSString, NSData, WAPBContextInfo;

@interface WAPBMessage_AudioMessage : GPBMessage

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
@property (assign,nonatomic) BOOL ptt; 
@property (assign,nonatomic) BOOL hasPtt; 
@property (nonatomic,copy) NSData * mediaKey; 
@property (assign,nonatomic) BOOL hasMediaKey; 
@property (nonatomic,retain) WAPBContextInfo * contextInfo; 
@property (assign,nonatomic) BOOL hasContextInfo; 
+(id)descriptor;
@end

