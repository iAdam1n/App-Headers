/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class GADCSIConfiguration, NSObject, GADScheduler, NSMutableDictionary;

@interface GADCSI : NSObject {

	long long _batchSize;
	GADCSIConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _lockQueue;
	long long _requestCount;
	GADScheduler* _scheduler;
	BOOL _shouldSendReport;
	NSMutableDictionary* _timeRecorders;

}
+(id)sharedInstance;
-(id)timeRecorderForAction:(id)arg1 ;
-(void)didMakeAdRequest;
-(void)sendReport;
-(void)sendReportInternal;
-(void)dealloc;
-(id)init;
@end

