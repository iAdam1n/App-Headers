/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNPaymentsFriendSearchViewControllerDelegate.h>
#import <Messenger/MNPeoplePickerSearchBarViewDelegate.h>
#import <Messenger/MNPeopleSuggestionsViewControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol MNPaymentsFriendSearchBarViewControllerDelegate;
@class MNPeopleSuggestionsViewController, MNPaymentsFriendSearchViewController, MNPeoplePickerSearchBarView, NSString;

@interface MNPaymentsFriendSearchBarViewController : FBContainerViewController <MNPaymentsFriendSearchViewControllerDelegate, MNPeoplePickerSearchBarViewDelegate, MNPeopleSuggestionsViewControllerDelegate, UISearchBarDelegate> {

	MNPeopleSuggestionsViewController* _suggestionsViewController;
	MNPaymentsFriendSearchViewController* _searchViewController;
	MNPeoplePickerSearchBarView* _searchBarView;
	long long _viewState;
	id<MNPaymentsFriendSearchBarViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPaymentsFriendSearchBarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGraphQLService:(id)arg1 userStore:(id)arg2 threadParticipantFilter:(id)arg3 peopleCellFactory:(id)arg4 suggestedContactsRetriever:(id)arg5 suggestionsViewControllerCreationBlock:(/*^block*/id)arg6 ;
-(void)addScrollListener:(id)arg1 ;
-(void)removeScrollListener:(id)arg1 ;
-(void)_setShowSuggestionsView:(BOOL)arg1 ;
-(void)_setShowSearchResultView:(BOOL)arg1 ;
-(void)_clearSearchBar;
-(void)friendSearchViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)dimmingViewTouched;
-(BOOL)peopleSuggestionsViewController:(id)arg1 shouldShowContact:(id)arg2 ;
-(BOOL)peopleSuggestionsViewController:(id)arg1 didTapContact:(id)arg2 ;
-(void)peopleSuggestionsViewController:(id)arg1 didTapActionButtonWithContact:(id)arg2 ;
-(BOOL)peopleSuggestionViewController:(id)arg1 shouldSelectCellWithContact:(id)arg2 ;
-(BOOL)peopleSuggestionViewController:(id)arg1 shouldDisableCellWithContact:(id)arg2 ;
-(BOOL)peopleSuggestionViewController:(id)arg1 shouldDisableActionButtonForContact:(id)arg2 ;
-(void)setDelegate:(id<MNPaymentsFriendSearchBarViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPaymentsFriendSearchBarViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)_setViewState:(long long)arg1 ;
@end
