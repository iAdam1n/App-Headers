/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSManagedObjectID, NSTimer, SLKDependencies;

@interface SLKHistoryGapOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	NSString* _channelId;
	NSString* _oldest;
	NSString* _latest;
	NSManagedObjectID* _objectID;
	NSTimer* _taskResolutionTimer;
	SLKDependencies* _dependencies_;

}

@property (assign) BOOL isExecuting;                                              //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isFinished;                                               //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,copy) NSString * channelId;                                  //@synthesize channelId=_channelId - In the implementation block
@property (nonatomic,copy) NSString * oldest;                                     //@synthesize oldest=_oldest - In the implementation block
@property (nonatomic,copy) NSString * latest;                                     //@synthesize latest=_latest - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;                        //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,retain) NSTimer * taskResolutionTimer;                       //@synthesize taskResolutionTimer=_taskResolutionTimer - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies_;              //@synthesize dependencies_=_dependencies_ - In the implementation block
-(NSString *)latest;
-(void)setLatest:(NSString *)arg1 ;
-(void)setDependencies_:(SLKDependencies *)arg1 ;
-(NSTimer *)taskResolutionTimer;
-(SLKDependencies *)dependencies_;
-(void)setTaskResolutionTimer:(NSTimer *)arg1 ;
-(id)createHistoryGap;
-(void)dealloc;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(BOOL)isConcurrent;
-(void)setOldest:(NSString *)arg1 ;
-(NSString *)oldest;
-(NSManagedObjectID *)objectID;
-(id)initWithDependencies:(id)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
@end
