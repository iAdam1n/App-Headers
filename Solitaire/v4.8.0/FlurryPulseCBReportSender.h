/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/FlurryDataSenderBase.h>
#import <SolitaireFree/FlurryHttpAsyncTaskDelegate.h>

@class FlurryDataSenderIndex, NSString;

@interface FlurryPulseCBReportSender : FlurryDataSenderBase <FlurryHttpAsyncTaskDelegate> {

	FlurryDataSenderIndex* _pulseCBReportDataIndex;

}

@property (nonatomic,retain) FlurryDataSenderIndex * pulseCBReportDataIndex;              //@synthesize pulseCBReportDataIndex=_pulseCBReportDataIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setupInstanceWithQueue:(id)arg1 ;
+(id)pulseCBReportDataKey;
+(Class)httpAsyncTaskClass;
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
-(id)initWithQueue:(id)arg1 ;
-(void)setup;
@end

