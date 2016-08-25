/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber;

@interface CRReportableEvent : NSManagedObject

@property (nonatomic,retain) NSNumber * reportStatus; 
+(id)createRequestsForEvents:(id)arg1 appLocator:(id)arg2 ;
+(double)defaultReportFrequency;
+(BOOL)isEnabledByDefault;
+(long long)defaultTimeToLive;
-(void)setReportStatus:(NSNumber *)arg1 ;
-(void)postReadyToSendNotification;
-(unsigned long long)finishedSendingAction;
-(void)awakeFromInsert;
@end

