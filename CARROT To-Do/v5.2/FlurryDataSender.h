/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:35:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BAB6B524-089F-49C7-9E02-F76A6A5EBF73/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CARROT/CARROT-Structs.h>
#import <CARROT/FlurryDataSenderBase.h>
#import <CARROT/FlurryHttpAsyncTaskDelegate.h>

@class FlurryDataSenderIndex;

@interface FlurryDataSender : FlurryDataSenderBase <FlurryHttpAsyncTaskDelegate> {

	FlurryDataSenderIndex* _dataIndex;

}

@property (nonatomic,retain) FlurryDataSenderIndex * dataIndex;              //@synthesize dataIndex=_dataIndex - In the implementation block
+(Class)httpAsyncTaskClass;
+(void)setupInstanceWithQueue:(dispatch_queue_sRef)arg1 ;
+(void)cleanup;
+(id)instance;
+(id)dataKey;
-(void)sendSessionsData:(id)arg1 ;
-(char)everSentReportSuccessfully;
-(void)requestDidFail:(id)arg1 withResponse:(id)arg2 ;
-(void)requestSuccessful:(id)arg1 withResponse:(id)arg2 ;
-(void)requestDidCancel:(id)arg1 withResponse:(id)arg2 ;
-(FlurryDataSenderIndex *)dataIndex;
-(void)retransmitNotSentBlocks;
-(id)storeData:(id)arg1 ;
-(void)sendData:(id)arg1 withIdentifier:(id)arg2 ;
-(void)requestSuccessComplete:(id)arg1 withResponse:(id)arg2 ;
-(void)removeStoredDataWithIdentifier:(id)arg1 ;
-(void)parseResponse:(id)arg1 ;
-(int)parseCookies:(id)arg1 ;
-(void)didCompleteAllTasks;
-(void)setDataIndex:(FlurryDataSenderIndex *)arg1 ;
-(void)dealloc;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 ;
-(void)setup;
@end

