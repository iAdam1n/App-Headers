/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNLocationPickerViewDelegate.h>
#import <Messenger/MNLocationPickerNearbyPlacesViewControllerDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNDismissableViewController.h>

@protocol MNLocationPickerViewControllerDelegate;
@class MNLocationPickerView, MNLocationPickerNearbyPlacesViewController, CLLocation, UISearchDisplayController, UISearchBar, FBKeyboardObserver, FBNearbyPlace, NSTimer, NSString;

@interface MNLocationPickerViewController : FBContainerViewController <MNLocationPickerViewDelegate, MNLocationPickerNearbyPlacesViewControllerDelegate, UISearchDisplayDelegate, FBKeyboardObserverDelegate, UISearchBarDelegate, FBClassProvidable, MNDismissableViewController> {

	MNLocationPickerView* _locationPickerView;
	MNLocationPickerNearbyPlacesViewController* _nearbyPlacesController;
	CLLocation* _currentLocation;
	UISearchDisplayController* _searchDisplayController;
	UISearchBar* _searchBar;
	FBKeyboardObserver* _keyboardObserver;
	FBNearbyPlace* _selectedPlace;
	unsigned long long _selectedLocationType;
	NSTimer* _enableSendingForInaccurateLocationTimer;
	/*^block*/id _dismissBlock;
	id<MNLocationPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNLocationPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id dismissBlock;                                                           //@synthesize dismissBlock=_dismissBlock - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(long long)dismissButtonPosition;
-(long long)dismissButtonItem;
-(id)dismissBlock;
-(void)setDismissBlock:(id)arg1 ;
-(void)_setupNavigationBarRightButton;
-(void)_didTapSend;
-(void)nearbyPlacesViewController:(id)arg1 didFailSearchingWithError:(id)arg2 ;
-(void)nearbyPlacesViewController:(id)arg1 didFailFetchingPlacesWithError:(id)arg2 ;
-(void)nearbyPlacesViewController:(id)arg1 didFetchPlacesWihtLocation:(id)arg2 ;
-(void)nearbyPlacesViewController:(id)arg1 didFinishSearchingWithQuery:(id)arg2 ;
-(void)nearbyPlacesViewController:(id)arg1 didSelectPlace:(id)arg2 ;
-(void)updateWithCurrentLocation:(id)arg1 ;
-(void)locationUpdateFailedWithError:(id)arg1 ;
-(void)locationPickerView:(id)arg1 didChangeSelectedLocationType:(unsigned long long)arg2 ;
-(void)_updateSearchResultsTableViewContentInset;
-(void)_enableSendingForInaccurateLocationTimerDidFire;
-(void)_loadDefaultState;
-(void)_updateSendButtonState;
-(void)_fetchNearbyPlacesIfPossible;
-(void)_updateSendButtonStateForCurrentLocation;
-(void)_setSendButtonEnabled:(BOOL)arg1 ;
-(BOOL)_hasGoodEnoughCurrentLocation;
-(id)_createLocationExtensibleAttachment;
-(id)_createLocationAttachmentDataToSend;
-(void)_logAnalyticsForLocationSend;
-(void)_updateLocationPickerViewWithSelectedLocation;
-(id)_createLocationPickerViewModel;
-(void)_searchNearbyPlacesWithQuery:(id)arg1 ;
-(void)_setSelectedLocationType:(unsigned long long)arg1 selectedPlace:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<MNLocationPickerViewControllerDelegate>)arg1 ;
-(id<MNLocationPickerViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldDismiss;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

