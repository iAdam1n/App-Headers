/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FlurryDataSenderBase.h>
#import <SportyTrader/FlurryHttpAsyncTaskDelegate.h>

@protocol FlurryDataSenderDelegate;
@class FlurryDataSenderIndex, NSString;

@interface FlurryDataSender : FlurryDataSenderBase <FlurryHttpAsyncTaskDelegate> {

	FlurryDataSenderIndex* _dataIndex;
	id<FlurryDataSenderDelegate> _dataSenderDelegate;

}

@property (assign,nonatomic,__weak) id<FlurryDataSenderDelegate> dataSenderDelegate;              //@synthesize dataSenderDelegate=_dataSenderDelegate - In the implementation block
@property (nonatomic,retain) FlurryDataSenderIndex * dataIndex;                                   //@synthesize dataIndex=_dataIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)httpAsyncTaskClass;
+(void)setupInstanceWithQueue:(dispatch_queue_sRef)arg1 ;
+(void)cleanup;
+(id)dataKey;
+(id)instance;
-(void)requestDidFail:(id)arg1 withResponse:(id)arg2 ;
-(void)requestDidCancel:(id)arg1 withResponse:(id)arg2 ;
-(void)requestSuccessful:(id)arg1 withResponse:(id)arg2 ;
-(void)retransmitNotSentBlocks;
-(void)didCompleteAllTasks;
-(void)sendData:(id)arg1 withIdentifier:(id)arg2 ;
-(void)requestSuccessComplete:(id)arg1 withResponse:(id)arg2 ;
-(void)removeStoredDataWithIdentifier:(id)arg1 ;
-(void)setDataSenderDelegate:(id<FlurryDataSenderDelegate>)arg1 ;
-(void)sendSessionsData:(id)arg1 ;
-(BOOL)everSentReportSuccessfully;
-(id<FlurryDataSenderDelegate>)dataSenderDelegate;
-(FlurryDataSenderIndex *)dataIndex;
-(id)storeData:(id)arg1 ;
-(void)parseResponse:(id)arg1 ;
-(int)parseCookies:(id)arg1 ;
-(void)setDataIndex:(FlurryDataSenderIndex *)arg1 ;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 ;
-(void)setup;
@end
