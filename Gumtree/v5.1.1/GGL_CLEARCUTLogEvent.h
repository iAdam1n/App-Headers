/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GSDK_PBGeneratedMessage.h>

@class NSString, GSDK_PBMutableArray, GGL_CLEARCUTPlayStoreLogEvent, GGL_CLEARCUTAppUsage1pLogEvent, NSData, GGL_CLEARCUTActiveExperiments, GGL_CLEARCUTExperimentIds;

@interface GGL_CLEARCUTLogEvent : GSDK_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasEventTimeMs; 
@property (assign,nonatomic) long long eventTimeMs; 
@property (assign,nonatomic) BOOL hasEventUptimeMs; 
@property (assign,nonatomic) long long eventUptimeMs; 
@property (assign,nonatomic) BOOL hasTag; 
@property (nonatomic,retain) NSString * tag; 
@property (assign,nonatomic) BOOL hasEventCode; 
@property (assign,nonatomic) int eventCode; 
@property (assign,nonatomic) BOOL hasEventFlowId; 
@property (assign,nonatomic) int eventFlowId; 
@property (assign,nonatomic) BOOL hasIsUserInitiated; 
@property (assign,nonatomic) BOOL isUserInitiated; 
@property (assign,nonatomic) BOOL hasValueArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * valueArray; 
@property (assign,nonatomic) BOOL hasStore; 
@property (nonatomic,retain) GGL_CLEARCUTPlayStoreLogEvent * store; 
@property (assign,nonatomic) BOOL hasAppUsage1P; 
@property (nonatomic,retain) GGL_CLEARCUTAppUsage1pLogEvent * appUsage1P; 
@property (assign,nonatomic) BOOL hasSourceExtension; 
@property (nonatomic,retain) NSData * sourceExtension; 
@property (assign,nonatomic) BOOL hasSourceExtensionJs; 
@property (nonatomic,retain) NSData * sourceExtensionJs; 
@property (assign,nonatomic) BOOL hasSourceExtensionJson; 
@property (nonatomic,retain) NSData * sourceExtensionJson; 
@property (assign,nonatomic) BOOL hasExp; 
@property (nonatomic,retain) GGL_CLEARCUTActiveExperiments * exp; 
@property (assign,nonatomic) BOOL hasTestId; 
@property (nonatomic,retain) NSString * testId; 
@property (assign,nonatomic) BOOL hasTimezoneOffsetSeconds; 
@property (assign,nonatomic) long long timezoneOffsetSeconds; 
@property (assign,nonatomic) BOOL hasExperimentIds; 
@property (nonatomic,retain) GGL_CLEARCUTExperimentIds * experimentIds; 
@property (assign,nonatomic) BOOL hasClientVe; 
@property (nonatomic,retain) NSData * clientVe; 
@property (assign,nonatomic) BOOL hasInternalEvent; 
@property (assign,nonatomic) int internalEvent; 
@property (assign,nonatomic) BOOL hasTestCodeArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * testCodeArray; 
+(id)descriptor;
@end
