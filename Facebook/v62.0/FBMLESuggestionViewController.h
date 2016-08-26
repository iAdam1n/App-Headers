/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPresentableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Facebook/FBMLEIconPickerViewControllerDelegate.h>

@protocol FBServiceTransactionMutating, FBMLESuggestionViewControllerDelegate;
@class FBUserSession, UISearchBar, UIButton, NSArray, UITableView, NSTimer, FBComposerEventDate, FBTransientViewStateManager, FBMLESuggestion, UIView, NSString;

@interface FBMLESuggestionViewController : UIViewController <FBPresentableViewController, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, FBMLEIconPickerViewControllerDelegate> {

	FBUserSession* _session;
	UISearchBar* _textSearchField;
	UIButton* _bannerButton;
	NSArray* _allLifeEvents;
	NSArray* _filteredLifeEvents;
	NSArray* _categories;
	NSArray* _categorySubtitles;
	NSArray* _lifeEventsForEachCategory;
	NSArray* _suggestedLifeEvents;
	UITableView* _tableView;
	NSTimer* _timer;
	id<FBServiceTransactionMutating> _token;
	FBComposerEventDate* _birthDate;
	FBTransientViewStateManager* _viewStateManager;
	FBMLESuggestion* _selectedSuggestion;
	UIView* _sourceView;
	id<FBMLESuggestionViewControllerDelegate> _delegate;
	FBMLESuggestion* _customLifeEventSuggestion;

}

@property (nonatomic,retain) UIView * sourceView;                                                    //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) id<FBMLESuggestionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBMLESuggestion * customLifeEventSuggestion;                          //@synthesize customLifeEventSuggestion=_customLifeEventSuggestion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(BOOL)fb_showNavBarSearchField;
-(id)analyticsModule;
-(unsigned long long)preferredPresentationOptions;
-(unsigned long long)preferredPresentationMethod;
-(void)_handleDownloadedResponse:(id)arg1 error:(id)arg2 ;
-(BOOL)isSearchingForLifeEvent;
-(id)_suggestions;
-(id)cellForMLESuggestion:(id)arg1 withOldCell:(id)arg2 ;
-(void)tappedSuggestion:(id)arg1 ;
-(void)_presentLifeEventIconPicker:(id)arg1 navigationCoordinator:(id)arg2 session:(id)arg3 iconURL:(id)arg4 title:(id)arg5 ;
-(void)_filterAndReload:(id)arg1 ;
-(id)_filterSuggestionWithText:(id)arg1 ;
-(void)lifeEventPickerUpdate:(id)arg1 iconURL:(id)arg2 title:(id)arg3 iconId:(id)arg4 ;
-(void)lifeEventPickerDidSkip:(id)arg1 ;
-(FBMLESuggestion *)customLifeEventSuggestion;
-(void)lifeEventPickerDidCancel:(id)arg1 ;
-(void)_didTapCancel;
-(void)setDelegate:(id<FBMLESuggestionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<FBMLESuggestionViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)_textDidChange:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
