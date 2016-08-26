/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBBackstageReactionsStackViewControllerDelegate.h>
#import <Facebook/FBBackstageSeenStateListener.h>
#import <Facebook/FBGraphQLConnectionControllerListener.h>
#import <Facebook/FBGraphQLConnectionControllerLoadListener.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBComponentTableViewDataSourceSelectionEventListener.h>
#import <Facebook/FBComponentScrollEventListener.h>

@class FBUserSession, UITableView, FBComponentTableViewDataSource, FBGraphQLConnectionController, FBDisplayableMediaTransitionManager, NSString;

@interface FBSnacksInboxViewController : UIViewController <FBBackstageReactionsStackViewControllerDelegate, FBBackstageSeenStateListener, FBGraphQLConnectionControllerListener, FBGraphQLConnectionControllerLoadListener, FBComponentTableViewDataSourceCellConfigProvider, FBComponentTableViewDataSourceSelectionEventListener, FBComponentScrollEventListener> {

	FBUserSession* _session;
	UITableView* _tableView;
	FBComponentTableViewDataSource* _dataSource;
	FBGraphQLConnectionController* _controller;
	FBDisplayableMediaTransitionManager* _transitionManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_showAuxiliaryViewController;
-(void)graphQLConnectionControllerDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didBeginLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didCompleteLoad:(id)arg2 ;
-(BOOL)fb_hideNavBarRightButton;
-(void)reactionsStackViewController:(id)arg1 shouldMarkAsSeen:(id)arg2 inThread:(id)arg3 ;
-(void)reactionsStackViewController:(id)arg1 shouldAddPost:(id)arg2 toThread:(id)arg3 ;
-(void)seenStateHandler:(id)arg1 didUpdatePost:(id)arg2 inThread:(id)arg3 ;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_loadData;
-(id)initWithSession:(id)arg1 ;
@end
