/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <Messenger/MNPeopleSearchControllerDelegate.h>
#import <Messenger/MNPeopleSearchControllerRTCDelegate.h>
#import <Messenger/MNPeopleSearchResultsDataSourceRTCCallButtonDataSource.h>
#import <Messenger/MNPeopleSuggestionsViewControllerDelegate.h>
#import <Messenger/MNPeopleSuggestionsViewControllerRTCDelegate.h>
#import <Messenger/MNPeopleSuggestionsViewControllerRTCCallButtonDataSource.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBWebRTCCancelableUserInterface.h>

@protocol MNSuggestedContactsRetriever, FBWebRTCPersonPickerViewControllerDelegate;
@class UISearchDisplayController, MNContactsRetrieverSimpleLogger, FBWebRTCPhoneButtonStyleExperimentContext, UIImage, UISearchBar, MNPeopleSearchController, MNPeopleSuggestionsViewController, NSString;

@interface FBWebRTCPersonPickerViewController : FBContainerViewController <UISearchBarDelegate, UISearchDisplayDelegate, MNPeopleSearchControllerDelegate, MNPeopleSearchControllerRTCDelegate, MNPeopleSearchResultsDataSourceRTCCallButtonDataSource, MNPeopleSuggestionsViewControllerDelegate, MNPeopleSuggestionsViewControllerRTCDelegate, MNPeopleSuggestionsViewControllerRTCCallButtonDataSource, FBClassProvidable, FBWebRTCCancelableUserInterface> {

	UISearchDisplayController* _searchDisplayController;
	id<MNSuggestedContactsRetriever> _contactSuggestions;
	MNContactsRetrieverSimpleLogger* _contactsRetrieverSimpleLogger;
	FBWebRTCPhoneButtonStyleExperimentContext* _phoneButtonStyleExperimentContext;
	UIImage* _audioCallButtonImage;
	UIImage* _videoCallButtonImage;
	id<FBWebRTCPersonPickerViewControllerDelegate> _delegate;
	UISearchBar* _searchBar;
	MNPeopleSearchController* _peopleSearchController;
	MNPeopleSuggestionsViewController* _peopleSuggestionsViewController;

}

@property (assign,nonatomic,__weak) id<FBWebRTCPersonPickerViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                          //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) MNPeopleSearchController * peopleSearchController;                                //@synthesize peopleSearchController=_peopleSearchController - In the implementation block
@property (nonatomic,retain) MNPeopleSuggestionsViewController * peopleSuggestionsViewController;              //@synthesize peopleSuggestionsViewController=_peopleSuggestionsViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNPeopleSearchController *)peopleSearchController;
-(BOOL)peopleSuggestionsViewController:(id)arg1 shouldShowContact:(id)arg2 ;
-(BOOL)peopleSuggestionsViewController:(id)arg1 didTapContact:(id)arg2 ;
-(BOOL)peopleSuggestionViewController:(id)arg1 shouldSelectCellWithContact:(id)arg2 ;
-(BOOL)peopleSuggestionViewController:(id)arg1 shouldDisableCellWithContact:(id)arg2 ;
-(id)searchTextForPeopleSearchController:(id)arg1 ;
-(id)pickedUserIdsForPeopleSearchController:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludeGroup:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldIncludeCommerce:(id)arg1 ;
-(BOOL)peopleSearchControllerShouldSearchServer:(id)arg1 ;
-(void)peopleSearchController:(id)arg1 didSelectResult:(id)arg2 withAnalyticsExtras:(id)arg3 ;
-(void)peopleSearchControllerDidFinishSearch:(id)arg1 ;
-(BOOL)peopleSearchController:(id)arg1 shouldShowResult:(id)arg2 ;
-(void)peopleSearchController:(id)arg1 didTapCallButtonForContact:(id)arg2 isVideoCall:(BOOL)arg3 ;
-(id)peopleSearchDataSourceAudioCallButtonImage;
-(BOOL)peopleSearchDataSourceIsAudioCallingAvailableForContact:(id)arg1 ;
-(id)peopleSearchDataSourceVideoCallButtonImage;
-(BOOL)peopleSearchDataSourceIsVideoCallingAvailableForContact:(id)arg1 ;
-(id)peopleSuggestionsViewControllerAudioCallButtonImage:(id)arg1 ;
-(BOOL)peopleSuggestionsViewController:(id)arg1 isAudioCallingAvailableForContact:(id)arg2 ;
-(id)peopleSuggestionsViewControllerVideoCallButtonImage:(id)arg1 ;
-(BOOL)peopleSuggestionsViewController:(id)arg1 isVideoCallingAvailableForContact:(id)arg2 ;
-(void)peopleSuggestionsViewController:(id)arg1 didTapCallButtonForContact:(id)arg2 isVideoCall:(BOOL)arg3 ;
-(id)initWithPeopleSearchController:(id)arg1 peopleSuggestionsController:(id)arg2 contactSuggestions:(id)arg3 phoneButtonStyleExperimentContext:(id)arg4 ;
-(void)didPressCancel;
-(id)modalPresentingViewController;
-(void)dismissModalUserInterface;
-(void)setPeopleSearchController:(MNPeopleSearchController *)arg1 ;
-(MNPeopleSuggestionsViewController *)peopleSuggestionsViewController;
-(void)setPeopleSuggestionsViewController:(MNPeopleSuggestionsViewController *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBWebRTCPersonPickerViewControllerDelegate>)arg1 ;
-(id<FBWebRTCPersonPickerViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UISearchBar *)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
@end

