/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/FlurryDataSenderBase.h>
#import <SolitaireFree/FlurryHttpAsyncTaskDelegate.h>

@protocol FlurryDataSenderDelegate;
@class FlurryDataSenderIndex, NSString;

@interface FlurryDataSender : FlurryDataSenderBase <FlurryHttpAsyncTaskDelegate> {

	FlurryDataSenderIndex* _dataIndex;
	id<FlurryDataSenderDelegate> _dataSenderDelegate;
	Class _httpAsyncTaskClass;

}

@property (assign,nonatomic,__weak) id<FlurryDataSenderDelegate> dataSenderDelegate;              //@synthesize dataSenderDelegate=_dataSenderDelegate - In the implementation block
@property (nonatomic,retain) Class httpAsyncTaskClass;                                            //@synthesize httpAsyncTaskClass=_httpAsyncTaskClass - In the implementation block
@property (nonatomic,retain) FlurryDataSenderIndex * dataIndex;                                   //@synthesize dataIndex=_dataIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setupInstanceWithQueue:(id)arg1 ;
+(void)setupInstanceWithQueue:(id)arg1 backgroundTracker:(id)arg2 ;
+(void)cleanup;
+(id)dataKey;
+(id)instance;
-(void)requestDidFail:(id)arg1 withResponse:(id)arg2 ;
-(void)requestDidCancel:(id)arg1 withResponse:(id)arg2 ;
-(void)requestSuccessful:(id)arg1 withResponse:(id)arg2 ;
-(id)initWithQueue:(id)arg1 backgroundTracker:(id)arg2 ;
-(void)retransmitNotSentBlocks;
-(void)didCompleteAllTasks;
-(void)setHttpAsyncTaskClass:(Class)arg1 ;
-(void)setDataSenderDelegate:(id<FlurryDataSenderDelegate>)arg1 ;
-(void)sendSessionsData:(id)arg1 ;
-(BOOL)everSentReportSuccessfully;
-(id<FlurryDataSenderDelegate>)dataSenderDelegate;
-(void)sendData:(id)arg1 withIdentifier:(id)arg2 ;
-(Class)httpAsyncTaskClass;
-(void)requestSuccessComplete:(id)arg1 withResponse:(id)arg2 ;
-(void)removeStoredDataWithIdentifier:(id)arg1 ;
-(FlurryDataSenderIndex *)dataIndex;
-(id)storeData:(id)arg1 ;
-(void)parseResponse:(id)arg1 ;
-(int)parseCookies:(id)arg1 ;
-(void)setDataIndex:(FlurryDataSenderIndex *)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)setup;
@end
