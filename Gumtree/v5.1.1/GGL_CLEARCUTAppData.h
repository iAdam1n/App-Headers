/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GSDK_PBGeneratedMessage.h>

@class NSString;

@interface GGL_CLEARCUTAppData : GSDK_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version; 
@property (assign,nonatomic) BOOL hasOldVersion; 
@property (assign,nonatomic) int oldVersion; 
@property (assign,nonatomic) BOOL hasSystemApp; 
@property (assign,nonatomic) BOOL systemApp; 
@property (assign,nonatomic) BOOL hasDownloadExternal; 
@property (assign,nonatomic) BOOL downloadExternal; 
@property (assign,nonatomic) BOOL hasDownloadGzip; 
@property (assign,nonatomic) BOOL downloadGzip; 
@property (assign,nonatomic) BOOL hasDownloadPatch; 
@property (assign,nonatomic) BOOL downloadPatch; 
@property (assign,nonatomic) BOOL hasSplitId; 
@property (nonatomic,retain) NSString * splitId; 
@property (assign,nonatomic) BOOL hasForWear; 
@property (assign,nonatomic) BOOL forWear; 
@property (assign,nonatomic) BOOL hasDownloadedBytes; 
@property (assign,nonatomic) long long downloadedBytes; 
+(id)descriptor;
@end
