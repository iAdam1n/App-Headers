/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFetchedTableViewController.h>
#import <Messenger/FBAvatarTaggingSectionDataSourceDelegate.h>
#import <Messenger/FBEntityPickerTextFieldDelegate.h>

@protocol FBAvatarPickerControllerDelegate, FBAvatarTaggingSearchProviderProtocol;
@class NSMutableArray, NSArray, FBAvatarPickerControllerDataSource, NSSet, NSMutableSet, FBKVOController, NSString, NSTimer, FBUserSession, FBEntityPickerTextField, NSPredicate, FBAvatarPickerView, FBLoadingIndicatorView;

@interface FBAvatarPickerController : FBFetchedTableViewController <FBAvatarTaggingSectionDataSourceDelegate, FBEntityPickerTextFieldDelegate> {

	NSMutableArray* _selectedAvatars;
	NSArray* _taggableCollections;
	NSArray* _sortDescriptors;
	FBAvatarPickerControllerDataSource* _searchDataSource;
	NSSet* _forcedSelectionAvatarGraphQLIDs;
	NSSet* _disabledAvatarGraphQLIDs;
	NSMutableSet* _selectedAvatarGraphQLIDs;
	BOOL _multiSelect;
	BOOL _showClearButton;
	BOOL _requireSelection;
	BOOL _collectionIsLoading;
	BOOL _viewAppeared;
	BOOL _pagedDisplay;
	BOOL _hideListWhenNotFocused;
	BOOL _hideListWhenEmpty;
	BOOL _dataSourceSet;
	BOOL _keepSearchTextOnDone;
	BOOL _tableViewDataSourceFetched;
	BOOL _boldSectionTitle;
	BOOL _forceBlackEntityTokenText;
	BOOL _shouldShowSearchField;
	BOOL _presentEmbedded;
	BOOL _presentEmbeddedWithStatusBar;
	FBKVOController* _KVOController;
	NSString* _searchBarPlaceHolder;
	NSTimer* _searchCommitTimer;
	FBUserSession* _session;
	BOOL _useOwningViewControllersBackButton;
	BOOL _searchFieldIsDefaultResponder;
	BOOL _delayActive;
	int _state;
	int _pushToLoadMoreState;
	NSString* _doneButtonTitle;
	id<FBAvatarPickerControllerDelegate> _delegate;
	id<FBAvatarTaggingSearchProviderProtocol> _searchProvider;
	FBEntityPickerTextField* _searchField;
	NSPredicate* _allPredicate;
	unsigned long long _cellStyle;
	FBAvatarPickerView* _avatarPickerView;
	FBLoadingIndicatorView* _loadingIndicatorView;
	UIEdgeInsets _searchFieldSeparatorInsets;

}

@property (nonatomic,readonly) FBUserSession * session;                                               //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * doneButtonTitle;                                                //@synthesize doneButtonTitle=_doneButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL useOwningViewControllersBackButton;                                 //@synthesize useOwningViewControllersBackButton=_useOwningViewControllersBackButton - In the implementation block
@property (assign,nonatomic,__weak) id<FBAvatarPickerControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<FBAvatarTaggingSearchProviderProtocol> searchProvider;              //@synthesize searchProvider=_searchProvider - In the implementation block
@property (nonatomic,copy) NSArray * selectedAvatars;                                                 //@synthesize selectedAvatars=_selectedAvatars - In the implementation block
@property (nonatomic,copy,readonly) NSSet * forcedSelectionAvatarGraphQLIDs;                          //@synthesize forcedSelectionAvatarGraphQLIDs=_forcedSelectionAvatarGraphQLIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * disabledAvatarGraphQLIDs;                                 //@synthesize disabledAvatarGraphQLIDs=_disabledAvatarGraphQLIDs - In the implementation block
@property (assign,nonatomic) BOOL searchFieldIsDefaultResponder;                                      //@synthesize searchFieldIsDefaultResponder=_searchFieldIsDefaultResponder - In the implementation block
@property (nonatomic,retain) FBEntityPickerTextField * searchField;                                   //@synthesize searchField=_searchField - In the implementation block
@property (assign,nonatomic) UIEdgeInsets searchFieldSeparatorInsets;                                 //@synthesize searchFieldSeparatorInsets=_searchFieldSeparatorInsets - In the implementation block
@property (nonatomic,retain) NSPredicate * allPredicate;                                              //@synthesize allPredicate=_allPredicate - In the implementation block
@property (assign,nonatomic) BOOL delayActive;                                                        //@synthesize delayActive=_delayActive - In the implementation block
@property (assign,nonatomic) unsigned long long cellStyle;                                            //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,retain) FBAvatarPickerView * avatarPickerView;                                   //@synthesize avatarPickerView=_avatarPickerView - In the implementation block
@property (assign,nonatomic) int state;                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) FBLoadingIndicatorView * loadingIndicatorView;                           //@synthesize loadingIndicatorView=_loadingIndicatorView - In the implementation block
@property (assign,nonatomic) int pushToLoadMoreState;                                                 //@synthesize pushToLoadMoreState=_pushToLoadMoreState - In the implementation block
@property (nonatomic,retain) NSTimer * searchCommitTimer;                                             //@synthesize searchCommitTimer=_searchCommitTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavigationJewels;
-(void)textField:(id)arg1 didAddObject_DEPRECATED:(id)arg2 ;
-(void)textField:(id)arg1 willRemoveObject_DEPRECATED:(id)arg2 ;
-(void)textFieldHeightDidChange:(id)arg1 ;
-(void)textField:(id)arg1 searchTextChanged:(id)arg2 ;
-(id)cellIdentifierAtIndexPath:(id)arg1 ;
-(id)newCellWithIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)dataSourceDidFinishFetchingResults:(id)arg1 ;
-(void)dataSource:(id)arg1 didSearchAvatars:(id)arg2 forText:(id)arg3 ;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 ;
-(id<FBAvatarTaggingSearchProviderProtocol>)searchProvider;
-(void)fetchedResultsDataSourceDidFetch:(id)arg1 ;
-(id)indexPathsForObject:(id)arg1 ;
-(void)hideResults;
-(void)showResults;
-(void)clearSearchField;
-(id)_standardLeftNavigationBarButton;
-(void)didTapDone;
-(BOOL)_taggableCollectionsFinishedFetching;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 searchProvider:(id)arg3 ;
-(void)_collectionPageLoaded;
-(void)clearButtonPressed;
-(void)setAvatarPickerView:(FBAvatarPickerView *)arg1 ;
-(void)_updatePushToLoadFooterState;
-(BOOL)isAvatarSelected:(id)arg1 ;
-(void)didSelectAvatar:(id)arg1 atIndexPath:(id)arg2 ;
-(void)didUnselectAvatar:(id)arg1 atIndexPath:(id)arg2 ;
-(void)didTapDone:(id)arg1 ;
-(void)_applySubtleStyleToCell:(id)arg1 ;
-(void)addSeparatorToCellIfNeeded:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldAddSeparatorInIndexPath:(id)arg1 ;
-(void)_updateFromTimer:(id)arg1 ;
-(void)setSearchCommitTimer:(NSTimer *)arg1 ;
-(void)_updateRightBarButtonEnabled;
-(NSArray *)selectedAvatars;
-(void)didTapCancel;
-(void)setPushToLoadMoreState:(int)arg1 ;
-(void)_setPushToLoadMoreState:(int)arg1 ;
-(BOOL)_hasMoreToSync;
-(void)setSelectedAvatars:(NSArray *)arg1 ;
-(void)setDelayActive:(BOOL)arg1 ;
-(void)addPredicate:(id)arg1 ;
-(void)setUseOwningViewControllersBackButton:(BOOL)arg1 ;
-(void)setAvatarPickerFooterView:(id)arg1 hidden:(BOOL)arg2 ;
-(id)avatarPickerFooterView;
-(NSString *)doneButtonTitle;
-(void)setDoneButtonTitle:(NSString *)arg1 ;
-(BOOL)useOwningViewControllersBackButton;
-(NSSet *)forcedSelectionAvatarGraphQLIDs;
-(NSSet *)disabledAvatarGraphQLIDs;
-(BOOL)searchFieldIsDefaultResponder;
-(void)setSearchFieldIsDefaultResponder:(BOOL)arg1 ;
-(void)setSearchField:(FBEntityPickerTextField *)arg1 ;
-(UIEdgeInsets)searchFieldSeparatorInsets;
-(void)setSearchFieldSeparatorInsets:(UIEdgeInsets)arg1 ;
-(NSPredicate *)allPredicate;
-(void)setAllPredicate:(NSPredicate *)arg1 ;
-(BOOL)delayActive;
-(FBAvatarPickerView *)avatarPickerView;
-(int)pushToLoadMoreState;
-(NSTimer *)searchCommitTimer;
-(void)setFetchedResultsDataSource:(id)arg1 ;
-(void)_updateClearButton;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBAvatarPickerControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<FBAvatarPickerControllerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(FBEntityPickerTextField *)searchField;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(FBUserSession *)session;
-(void)setLoadingIndicatorView:(FBLoadingIndicatorView *)arg1 ;
-(FBLoadingIndicatorView *)loadingIndicatorView;
-(unsigned long long)cellStyle;
-(void)setCellStyle:(unsigned long long)arg1 ;
@end
