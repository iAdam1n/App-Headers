/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GSDK_PBGeneratedMessage.h>

@interface GGL_CLEARCUTAutoUpdateData : GSDK_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasAutoUpdateSuccess; 
@property (assign,nonatomic) BOOL autoUpdateSuccess; 
@property (assign,nonatomic) BOOL hasNumFailedAttempts; 
@property (assign,nonatomic) int numFailedAttempts; 
@property (assign,nonatomic) BOOL hasTimeSinceFirstFailMs; 
@property (assign,nonatomic) long long timeSinceFirstFailMs; 
@property (assign,nonatomic) BOOL hasWifiCheckIntervalMs; 
@property (assign,nonatomic) long long wifiCheckIntervalMs; 
@property (assign,nonatomic) BOOL hasSkippedDueToProjection; 
@property (assign,nonatomic) BOOL skippedDueToProjection; 
@property (assign,nonatomic) BOOL hasSkippedDueToPower; 
@property (assign,nonatomic) BOOL skippedDueToPower; 
@property (assign,nonatomic) BOOL hasSkippedDueToWifi; 
@property (assign,nonatomic) BOOL skippedDueToWifi; 
@property (assign,nonatomic) BOOL hasRecheckState; 
@property (assign,nonatomic) int recheckState; 
@property (assign,nonatomic) BOOL hasSkippedDueToNewPermission; 
@property (assign,nonatomic) BOOL skippedDueToNewPermission; 
@property (assign,nonatomic) BOOL hasSkippedDueToLargeDownload; 
@property (assign,nonatomic) BOOL skippedDueToLargeDownload; 
@property (assign,nonatomic) BOOL hasSkippedDueToDisabledByUser; 
@property (assign,nonatomic) BOOL skippedDueToDisabledByUser; 
@property (assign,nonatomic) BOOL hasSkippedDueToGlobalDisabled; 
@property (assign,nonatomic) BOOL skippedDueToGlobalDisabled; 
@property (assign,nonatomic) BOOL hasNumPackagesInstalled; 
@property (assign,nonatomic) int numPackagesInstalled; 
@property (assign,nonatomic) BOOL hasNumPackagesDeferred; 
@property (assign,nonatomic) int numPackagesDeferred; 
@property (assign,nonatomic) BOOL hasSkippedDueToForeground; 
@property (assign,nonatomic) BOOL skippedDueToForeground; 
@property (assign,nonatomic) BOOL hasRescheduled; 
@property (assign,nonatomic) BOOL rescheduled; 
+(id)descriptor;
@end

