/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <WhatsApp/WAJobDelegate.h>

@protocol WAPersistentJobDelegate;
@class WAJob, NSData, NSArray, NSString;

@interface WAPersistentJob : NSManagedObject <WAJobDelegate> {

	BOOL _blocked;
	unsigned _jobToken;
	id<WAPersistentJobDelegate> _delegate;
	WAJob* _job;

}

@property (assign,nonatomic) unsigned persistentId; 
@property (assign,nonatomic) unsigned retryCount; 
@property (nonatomic,copy) NSData * jobData; 
@property (assign,nonatomic) BOOL blocked;                                             //@synthesize blocked=_blocked - In the implementation block
@property (assign,nonatomic,__weak) id<WAPersistentJobDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WAJob * job;                                              //@synthesize job=_job - In the implementation block
@property (assign,nonatomic) unsigned jobToken;                                        //@synthesize jobToken=_jobToken - In the implementation block
@property (nonatomic,readonly) NSArray * requirements; 
@property (nonatomic,readonly) NSString * groupId; 
@property (nonatomic,readonly) unsigned maxRetryCount; 
@property (nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSString * descriptiveName; 
-(NSString *)descriptiveName;
-(NSArray *)requirements;
-(void)didCancelJob;
-(void)setJobToken:(unsigned)arg1 ;
-(void)reloadJobForRetryIfNecessary;
-(unsigned)jobToken;
-(void)didUnblock:(id)arg1 withResult:(unsigned long long)arg2 ;
-(void)setJob:(WAJob *)arg1 ;
-(void)setDelegate:(id<WAPersistentJobDelegate>)arg1 ;
-(id<WAPersistentJobDelegate>)delegate;
-(BOOL)valid;
-(void)setBlocked:(BOOL)arg1 ;
-(BOOL)blocked;
-(void)awakeFromInsert;
-(void)awakeFromFetch;
-(WAJob *)job;
-(unsigned long long)execute;
-(NSString *)groupId;
-(unsigned)maxRetryCount;
@end
