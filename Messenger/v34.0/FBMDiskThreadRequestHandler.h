/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMThreadRequestHandling.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBMThreadRequestHandling;
@class FBMessagingStore, FBMThreadResultValidator, FBMThreadRestorer, FBMThreadSet, FBAnalytics, FBExperimentManager, NSString;

@interface FBMDiskThreadRequestHandler : NSObject <FBMThreadRequestHandling, FBClassProvidable> {

	id<FBMThreadRequestHandling> _nextRequestHandler;
	FBMessagingStore* _store;
	FBMThreadResultValidator* _resultValidator;
	FBMThreadRestorer* _restorer;
	FBMThreadSet* _threadSet;
	FBAnalytics* _analytics;
	FBExperimentManager* _experimentManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithMessagingStore:(id)arg1 resultValidator:(id)arg2 threadRestorer:(id)arg3 threadSet:(id)arg4 analytics:(id)arg5 experimentManager:(id)arg6 ;
-(void)_processLoadThreadsResult:(id)arg1 pendingResult:(id)arg2 request:(id)arg3 listener:(id)arg4 ;
-(void)_processLoadThreadResultOnMainThread:(id)arg1 pendingResult:(id)arg2 request:(id)arg3 listener:(id)arg4 ;
-(void)configureWithNextResponder:(id)arg1 ;
-(void)handleBatchThreadRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3 ;
-(id)init;
@end
