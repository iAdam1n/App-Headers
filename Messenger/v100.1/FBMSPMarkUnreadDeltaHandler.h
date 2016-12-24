/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessagesSyncIrisDeltaProcessing.h>

@protocol MNAuthenticationManager;
@class MNThreadSummaryCacheThreadListFilterer, MNThreadUpdateService, NSString;

@interface FBMSPMarkUnreadDeltaHandler : NSObject <FBViewerContextClassProvidable, MNMessagesSyncIrisDeltaProcessing> {

	MNThreadSummaryCacheThreadListFilterer* _threadListFilterer;
	MNThreadUpdateService* _threadUpdateService;
	id<MNAuthenticationManager> _authenticationManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithThreadListFilterer:(id)arg1 threadUpdateService:(id)arg2 authenticationManager:(id)arg3 ;
-(void)_processThreadKeysFromDeltaData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processFoldersFromDeltaData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_markUnreadThreadsFromThreadsProviderBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)deltasWithMetadataFromDeltaWrapper:(id)arg1 ;
@end
