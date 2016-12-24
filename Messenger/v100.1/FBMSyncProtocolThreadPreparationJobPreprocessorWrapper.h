/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagesSyncThreadPreparationJobPreprocessing.h>

@protocol OS_dispatch_queue;
@class FBMSyncProtocolThreadPreparationJobPreprocessor, NSObject, NSString;

@interface FBMSyncProtocolThreadPreparationJobPreprocessorWrapper : NSObject <MNMessagesSyncThreadPreparationJobPreprocessing> {

	FBMSyncProtocolThreadPreparationJobPreprocessor* _preprocessor;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFetchedThreadKeyTracker:(id)arg1 deletedThreadKeyTracker:(id)arg2 queue:(id)arg3 ;
-(void)performPreprocessingForJobs:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
