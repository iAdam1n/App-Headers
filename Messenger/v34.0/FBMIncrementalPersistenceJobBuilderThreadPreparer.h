/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNIncrementalPersistenceJobBuilderThreadPreparing.h>

@protocol MNAuthenticationManager;
@class FBMThreadStore, MNAsyncOperationTracker, NSString;

@interface FBMIncrementalPersistenceJobBuilderThreadPreparer : NSObject <MNIncrementalPersistenceJobBuilderThreadPreparing> {

	FBMThreadStore* _threadStore;
	id<MNAuthenticationManager> _authManager;
	MNAsyncOperationTracker* _asyncOperationTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareLocalCopiesOfThreadsWithThreadKeys:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_handleFetchedForRequestId:(long long)arg1 withResponse:(id)arg2 ;
-(void)_handleFailureForRequestId:(long long)arg1 ;
-(void)_handleProgressForRequestId:(long long)arg1 withResponse:(id)arg2 ;
-(void)_finishRequestWithInternalId:(long long)arg1 andMostCompleteResponse:(id)arg2 ;
-(id)initWithThreadStore:(id)arg1 authManager:(id)arg2 ;
@end

