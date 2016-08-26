/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/CRReportableEvent.h>
#import <Gumtree/CRGarbageCollection.h>

@class NSDate, NSString, NSNumber, NSSet, CRSession;

@interface CRUserflow : CRReportableEvent <CRGarbageCollection>

@property (nonatomic,retain) id breadcrumbs; 
@property (nonatomic,retain) NSDate * endTime; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSDate * startTime; 
@property (nonatomic,retain) NSNumber * state; 
@property (nonatomic,retain) NSNumber * timeout; 
@property (nonatomic,retain) NSNumber * type; 
@property (nonatomic,retain) NSNumber * value; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * appVisibilityLog; 
@property (nonatomic,retain) CRSession * session; 
+(id)_PFPlaceHolderSingleton_core;
+(unsigned long long)garbageCollectionHighWaterMark;
+(unsigned long long)garbageCollectionLowWaterMark;
+(id)garbageCollectionSortDescriptor;
+(id)fetchRequestForActiveUserflows;
+(id)fetchRequestForActiveUserflowsWithType:(unsigned long long)arg1 ;
+(id)fetchRunningUserflowsInContext:(id)arg1 ;
+(unsigned long long)fetchNumberOfUserflowsInContext:(id)arg1 ;
+(unsigned long long)fetchNumberOfUserflowsInContext:(id)arg1 withType:(unsigned long long)arg2 ;
+(id)fetchRunningUserflowFromContext:(id)arg1 withName:(id)arg2 ;
+(id)createRequestsForEvents:(id)arg1 appLocator:(id)arg2 ;
-(id)json;
-(id)initWithContext:(id)arg1 startTime:(id)arg2 name:(id)arg3 value:(id)arg4 timeout:(double)arg5 type:(unsigned long long)arg6 ;
-(void)endAtDate:(id)arg1 ;
-(void)timedoutAtDate:(id)arg1 ;
-(double)foregroundTime;
-(void)collectBreadcrumbs;
-(void)failAtDate:(id)arg1 ;
-(void)crashAtDate:(id)arg1 ;
-(void)cancel;
-(double)elapsedTime;
-(double)activeTime;
-(void)prepareForDeletion;
-(id)stateString;
@end
