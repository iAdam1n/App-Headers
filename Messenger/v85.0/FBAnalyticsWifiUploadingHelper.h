/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FBAnalyticsWifiUploadingHelper : NSObject {

	NSObject*<OS_dispatch_queue> _processingQueue;
	double _timestampOfOldestLoggedEvent;
	double _maxDelayTimeoutForLogUpload;

}

@property (assign,nonatomic) double maxDelayTimeoutForLogUpload;              //@synthesize maxDelayTimeoutForLogUpload=_maxDelayTimeoutForLogUpload - In the implementation block
-(id)initWithQueue:(id)arg1 delayUploadTimeout:(double)arg2 ;
-(void)setTimestampForOldestUnflusedEvent:(double)arg1 ;
-(BOOL)shouldUploadEvents;
-(void)resetTimestampOfOldestEvent;
-(BOOL)isOldestEventExceedTimeout;
-(void)changeDelayUploadTimeout:(double)arg1 ;
-(double)_fetchTimestampForOldestEvent;
-(BOOL)_isWifiAvailable;
-(void)_putTimestampForOldestEvent:(double)arg1 ;
-(double)maxDelayTimeoutForLogUpload;
-(void)setMaxDelayTimeoutForLogUpload:(double)arg1 ;
@end
