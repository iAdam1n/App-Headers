/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
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
-(id)profileTypeToString:(unsigned long long)arg1 ;
-(void)reportEvent:(unsigned long long)arg1 dictionary:(id)arg2 ;
-(void)reportEvent:(unsigned long long)arg1 ;
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
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
@end
