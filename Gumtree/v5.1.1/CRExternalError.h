/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/CRReportableEvent.h>
#import <Gumtree/CRGarbageCollection.h>

@class NSNumber, NSString, NSDate, CRSession;

@interface CRExternalError : CRReportableEvent <CRGarbageCollection>

@property (nonatomic,retain) NSNumber * batteryLevel; 
@property (nonatomic,retain) id breadcrumbs; 
@property (nonatomic,retain) NSNumber * diskSpaceFree; 
@property (nonatomic,retain) NSNumber * errorType; 
@property (nonatomic,retain) NSNumber * isOnline; 
@property (nonatomic,retain) NSNumber * isOnWifi; 
@property (nonatomic,retain) NSNumber * memoryUsage; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSNumber * orientation; 
@property (nonatomic,retain) NSString * developmentPlatform; 
@property (nonatomic,retain) NSString * reason; 
@property (nonatomic,retain) id stacktrace; 
@property (nonatomic,retain) NSDate * timestamp; 
@property (nonatomic,retain) id userflows; 
@property (nonatomic,retain) CRSession * session; 
+(unsigned long long)garbageCollectionHighWaterMark;
+(unsigned long long)garbageCollectionLowWaterMark;
+(id)garbageCollectionSortDescriptor;
+(id)createRequestsForEvents:(id)arg1 appLocator:(id)arg2 ;
-(id)json;
-(id)reporttingUrlForAppLocator:(id)arg1 ;
-(id)developmentPlatformNameFromType:(unsigned long long)arg1 ;
-(id)parseStacktrace:(id)arg1 ;
-(id)initWithCurrentSession:(id)arg1 previousSession:(id)arg2 timestamp:(id)arg3 name:(id)arg4 reason:(id)arg5 stacktrace:(id)arg6 platformType:(unsigned long long)arg7 errorType:(unsigned long long)arg8 ;
@end

