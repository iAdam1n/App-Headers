/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSMutableArray, NSString, NSDate, NSNumber, CRSession, NSSet;

@interface CRApp : NSManagedObject {

	NSMutableArray* eventReporters;

}

@property (nonatomic,retain) NSString * appId; 
@property (nonatomic,retain) NSString * deviceId; 
@property (nonatomic,retain) NSDate * lastBackgroundDate; 
@property (nonatomic,retain) NSNumber * numberOfSessions; 
@property (nonatomic,retain) NSNumber * optedOut; 
@property (nonatomic,retain) NSNumber * reportAppLoadsImmediately; 
@property (nonatomic,retain) CRSession * currentSession; 
@property (nonatomic,retain) CRSession * previousSession; 
@property (nonatomic,retain) NSSet * sessions; 
@property (nonatomic,retain) NSSet * userMetadata; 
@property (nonatomic,retain) NSMutableArray * eventReporters; 
+(id)_PFPlaceHolderSingleton_core;
+(id)appForContext:(id)arg1 appId:(id)arg2 ;
-(id)initWithContext:(id)arg1 appId:(id)arg2 ;
-(BOOL)backupOptOutStatusWithAppId:(id)arg1 ;
-(void)setOptedOut:(NSNumber *)arg1 ;
-(id)backupDeviceIdWithAppId:(id)arg1 ;
-(id)startNewSessionAtTime:(id)arg1 isColdLaunch:(BOOL)arg2 ;
-(void)deleteOldSessions;
-(id)sessionsSortedByDate;
-(id)warmStartSessionAtTime:(id)arg1 ;
-(id)coldStartSessionAtTime:(id)arg1 ;
-(void)insertSessionBreadcrumbAtTime:(id)arg1 ;
-(NSMutableArray *)eventReporters;
-(void)setEventReporters:(NSMutableArray *)arg1 ;
-(void)awakeFromFetch;
-(void)setDeviceId:(NSString *)arg1 ;
@end
