/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKPStatisticsAriaClient, NSMutableArray, NSOperationQueue;

@interface SKPStatistics : NSObject {

	BOOL _reportingUnreportedEvents;
	BOOL _launchingInBackground;
	BOOL _protectedSkyLibDataAvailable;
	BOOL _observingProvisioning;
	BOOL _observingAccountManager;
	SKPStatisticsAriaClient* _ariaClient;
	NSMutableArray* _unreportedAriaEvents;
	NSOperationQueue* _queue;

}

@property (nonatomic,retain) SKPStatisticsAriaClient * ariaClient;               //@synthesize ariaClient=_ariaClient - In the implementation block
@property (nonatomic,retain) NSMutableArray * unreportedAriaEvents;              //@synthesize unreportedAriaEvents=_unreportedAriaEvents - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                           //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL reportingUnreportedEvents;                     //@synthesize reportingUnreportedEvents=_reportingUnreportedEvents - In the implementation block
@property (assign,nonatomic) BOOL launchingInBackground;                         //@synthesize launchingInBackground=_launchingInBackground - In the implementation block
@property (assign,nonatomic) BOOL protectedSkyLibDataAvailable;                  //@synthesize protectedSkyLibDataAvailable=_protectedSkyLibDataAvailable - In the implementation block
@property (assign,nonatomic) BOOL observingProvisioning;                         //@synthesize observingProvisioning=_observingProvisioning - In the implementation block
@property (assign,nonatomic) BOOL observingAccountManager;                       //@synthesize observingAccountManager=_observingAccountManager - In the implementation block
+(BOOL)isAriaEnabled;
-(void)reportEvent:(unsigned long long)arg1 dictionary:(id)arg2 ;
-(void)setObservingAccountManager:(BOOL)arg1 ;
-(BOOL)protectedSkyLibDataAvailable;
-(BOOL)launchingInBackground;
-(void)updateObservation;
-(void)setLaunchingInBackground:(BOOL)arg1 ;
-(void)setProtectedSkyLibDataAvailable:(BOOL)arg1 ;
-(BOOL)observingAccountManager;
-(void)setObservingProvisioning:(BOOL)arg1 ;
-(void)loadUnreportedEvents;
-(void)reportEvent:(unsigned long long)arg1 userInfo:(id)arg2 options:(unsigned long long)arg3 ;
-(void)reportEvent:(unsigned long long)arg1 dictionary:(id)arg2 options:(unsigned long long)arg3 ;
-(void)updateQueueSuspension;
-(NSMutableArray *)unreportedAriaEvents;
-(BOOL)reportingUnreportedEvents;
-(void)setReportingUnreportedEvents:(BOOL)arg1 ;
-(void)reportUnreportedEvents;
-(void)ariaStatisticsProvisioningChanged;
-(SKPStatisticsAriaClient *)ariaClient;
-(void)setAriaClient:(SKPStatisticsAriaClient *)arg1 ;
-(void)reportEventContainer:(id)arg1 toAria:(BOOL)arg2 ;
-(void)saveUnreportedEvents;
-(id)loadUnreportedEventsWithData:(id)arg1 ;
-(void)setUnreportedAriaEvents:(NSMutableArray *)arg1 ;
-(BOOL)observingProvisioning;
-(id)profileTypeToString:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)reportEvent:(unsigned long long)arg1 ;
@end

