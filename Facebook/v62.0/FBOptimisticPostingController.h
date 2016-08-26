/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedOutboxListDelegate.h>
#import <Facebook/FBFeedOptimisticStoryDownloadCoordinatorListener.h>

@protocol FBOptimisticPostingControllerDelegate, FBCompositionOwnershipTracker, FBCompositionModelBundleCache;
@class FBFeedPublicationTracker, FBFeedOptimisticStoryDownloadCoordinator, NSString, FBFeedOptimisticPostPerfLogger, FBFeedOutboxList, FBFeedOutboxPublicationHandler;

@interface FBOptimisticPostingController : NSObject <FBFeedOutboxListDelegate, FBFeedOptimisticStoryDownloadCoordinatorListener> {

	id<FBOptimisticPostingControllerDelegate> _delegate;
	FBFeedPublicationTracker* _publicationTracker;
	FBFeedOptimisticStoryDownloadCoordinator* _optimisticStoryDownloadCoordinator;
	id<FBCompositionOwnershipTracker> _compositionOwnershipTracker;
	NSString* _targetType;
	id<FBCompositionModelBundleCache> _compositionModelBundleCache;
	FBFeedOptimisticPostPerfLogger* _optimisticPerfLogger;
	FBFeedOutboxList* _outboxList;
	FBFeedOutboxPublicationHandler* _publicationEventHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)containerNoLongerVisible;
-(void)removeListenerForStream:(id)arg1 ;
-(id)initWithCompositionModelBundleCache:(id)arg1 compositionOwnershipTracker:(id)arg2 publisherManager:(id)arg3 publishTargetType:(id)arg4 delegate:(id)arg5 hostingViewController:(id)arg6 toolbox:(id)arg7 ;
-(id)listViewDataSource;
-(void)setMutator:(id)arg1 ;
-(void)optimisticPostingWithCompositionSourceType:(id)arg1 composerSessionID:(id)arg2 ;
-(void)addListenerForStream:(id)arg1 ;
-(BOOL)doesConnection:(id)arg1 supportOptimisticStoryForPublisherData:(id)arg2 andResponse:(id)arg3 ;
-(void)willInsertNewStoriesWithMutationIdentifiers:(id)arg1 ;
-(void)outboxListInsertedNewStories;
-(void)outboxListRemovedStories;
-(void)outboxListWillRefresh;
-(void)outboxListDidRefresh;
-(void)feedOptimisticStoryDownloadCoordinatorWillLoadStory:(id)arg1 withMutationIdentifier:(id)arg2 intoConnections:(id)arg3 ;
-(void)feedOptimisticStoryDownloadCoordinatorFailedLoadingStoryWithMutationIdentifier:(id)arg1 ;
-(void)dealloc;
@end
