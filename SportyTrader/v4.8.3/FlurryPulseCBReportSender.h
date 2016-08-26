/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FlurryDataSenderBase.h>
#import <SportyTrader/FlurryHttpAsyncTaskDelegate.h>

@class FlurryDataSenderIndex, NSString;

@interface FlurryPulseCBReportSender : FlurryDataSenderBase <FlurryHttpAsyncTaskDelegate> {

	FlurryDataSenderIndex* _pulseCBReportDataIndex;

}

@property (nonatomic,retain) FlurryDataSenderIndex * pulseCBReportDataIndex;              //@synthesize pulseCBReportDataIndex=_pulseCBReportDataIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pulseCBReportDataKey;
+(Class)httpAsyncTaskClass;
+(void)setupInstanceWithQueue:(dispatch_queue_sRef)arg1 ;
+(void)cleanup;
+(id)instance;
-(void)requestDidFail:(id)arg1 withResponse:(id)arg2 ;
-(void)requestDidCancel:(id)arg1 withResponse:(id)arg2 ;
-(void)requestSuccessful:(id)arg1 withResponse:(id)arg2 ;
-(void)retransmitNotSentBlocks;
-(void)didCompleteAllTasks;
-(void)sendPulseReportsData:(id)arg1 ;
-(FlurryDataSenderIndex *)pulseCBReportDataIndex;
-(id)storePulseCBReportData:(id)arg1 withGrpupId:(id)arg2 ;
-(void)sendData:(id)arg1 withIdentifier:(id)arg2 ;
-(void)requestSuccessComplete:(id)arg1 withResponse:(id)arg2 ;
-(void)removeStoredDataWithIdentifier:(id)arg1 ;
-(void)setPulseCBReportDataIndex:(FlurryDataSenderIndex *)arg1 ;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 ;
-(void)setup;
@end
