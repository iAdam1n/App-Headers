/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSingleViewModelLoading.h>

@class MNMontageViewModelGenerator, NSMutableDictionary, NSString;

@interface MNMontageViewModelLoader : NSObject <MNSingleViewModelLoading> {

	MNMontageViewModelGenerator* _generator;
	NSMutableDictionary* _requestIdToRequestMap;
	NSMutableDictionary* _requestIdToGeneratorRequestIdMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanUpForRequestId:(unsigned long long)arg1 ;
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long long)arg2 ;
-(id)initWithMessageQuerier:(id)arg1 pendingThreadQuerier:(id)arg2 threadStore:(id)arg3 userStore:(id)arg4 threadSummaryOptimisticStateApplier:(id)arg5 loggedInUserInfoManager:(id)arg6 ;
-(void)_handleSuccessWithViewModel:(id)arg1 requestId:(unsigned long long)arg2 ;
-(void)_handleProgressWithLongOperationDidBegin:(BOOL)arg1 requestId:(unsigned long long)arg2 ;
-(void)_handleFailureWithError:(id)arg1 requestId:(unsigned long long)arg2 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
@end

