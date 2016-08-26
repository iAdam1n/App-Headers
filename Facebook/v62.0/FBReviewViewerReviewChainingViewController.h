/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBGraphQLConnectionControllerListener.h>
#import <Facebook/FBComponentTableViewDataSourceSectionHeaderHandler.h>
#import <Facebook/FBStreamListViewDelegate.h>

@protocol FBServiceTransactionMutating;
@class FBUserSession, NSString, FBStreamListView, FBComponentTableViewDataSource, FBMemViewer, FBLocalFeedbackActionHandler, FBScenePath, FBLocalReviewDetailsStoryComponentContext, FBFeedToolbox, FBGraphQLConnectionController, FBGQLConnectionFlatteningAdapter, FBLocalStoriesSectionIndexAdapter, FBConsistentLookasideCacheObservationHandle, FBStreamListViewStateManager;

@interface FBReviewViewerReviewChainingViewController : UIViewController <FBGraphQLConnectionControllerListener, FBComponentTableViewDataSourceSectionHeaderHandler, FBStreamListViewDelegate> {

	FBUserSession* _session;
	NSString* _pageId;
	FBStreamListView* _listView;
	FBComponentTableViewDataSource* _dataSource;
	id<FBServiceTransactionMutating> _activeToken;
	FBMemViewer* _viewer;
	NSString* _viewerID;
	FBLocalFeedbackActionHandler* _actionHandler;
	FBScenePath* _scenePath;
	FBLocalReviewDetailsStoryComponentContext* _context;
	FBFeedToolbox* _toolbox;
	FBGraphQLConnectionController* _pageReviewSuggestionConnectionController;
	FBGQLConnectionFlatteningAdapter* _adapter;
	FBLocalStoriesSectionIndexAdapter* _sectionIndexAdapter;
	FBConsistentLookasideCacheObservationHandle* _reviewStoryObservationHandle;
	FBStreamListViewStateManager* _viewStateManager;
	BOOL _spinnerInserted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataSource:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)dataSource:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)graphQLConnectionControllerDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)streamListViewDidScrollToBottom:(id)arg1 ;
-(void)streamListViewDidScrollToTop:(id)arg1 ;
-(void)_handleFailure:(id)arg1 ;
-(void)_performHeadLoad;
-(void)_showLoadingSpinner;
-(id)initWithSession:(id)arg1 pageId:(id)arg2 ;
-(void)_hideLoadingSpinner;
-(void)_selfReviewConsistentFieldDidChange:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)_handleCancel;
@end
