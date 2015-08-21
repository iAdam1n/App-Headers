/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSearchTypeaheadActivityListener.h>
#import <Messenger/FBPlacePickerSearchBarDelegate.h>

@class FBUserSession, FBSearchTypeaheadActivityListenerAnnouncer, NSArray, FBScenePath, FBPlacePickerSearchBar, FBSecondaryNavigationControl, UIViewController, FBAttachmentPickerNullStateCoordinator, FBAttachmentPickerResultsCoordinator, NSString;

@interface FBAttachmentPickerCoordinator : NSObject <FBSearchTypeaheadActivityListener, FBPlacePickerSearchBarDelegate> {

	FBUserSession* _session;
	long long _currentTabIndex;
	BOOL _resultsOnlyMode;
	FBSearchTypeaheadActivityListenerAnnouncer* _typeaheadAnnouncer;
	NSArray* _embedsTypes;
	FBScenePath* _scenePath;
	FBPlacePickerSearchBar* _searchBar;
	FBSecondaryNavigationControl* _tabBar;
	NSArray* _nullStateCoordinatorArray;
	NSArray* _resultsCoordinatorArray;
	UIViewController* _contentViewController;
	/*^block*/id _contentViewControllerDidUpdateBlock;

}

@property (nonatomic,readonly) UIViewController * contentViewController;                                          //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,copy) id contentViewControllerDidUpdateBlock;                                                //@synthesize contentViewControllerDidUpdateBlock=_contentViewControllerDidUpdateBlock - In the implementation block
@property (nonatomic,readonly) FBAttachmentPickerNullStateCoordinator * currentNullStateCoordinator; 
@property (nonatomic,readonly) FBAttachmentPickerResultsCoordinator * currentResultsCoordinator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)graphSearchDidTapOnSuggestion:(id)arg1 position:(unsigned long long)arg2 ;
-(void)_didChangeTapBarSegment:(id)arg1 ;
-(void)_updateSearchBarPlaceholderForResultTypeChange;
-(void)_contentViewDidScroll;
-(FBAttachmentPickerNullStateCoordinator *)currentNullStateCoordinator;
-(FBAttachmentPickerResultsCoordinator *)currentResultsCoordinator;
-(unsigned long long)_currentEmbedsType;
-(id)contentViewControllerDidUpdateBlock;
-(id)initWithSession:(id)arg1 embedsTypes:(id)arg2 inputData:(id)arg3 tabBar:(id)arg4 searchBar:(id)arg5 resultsAnnouncer:(id)arg6 scenePath:(id)arg7 ;
-(void)setContentViewControllerDidUpdateBlock:(id)arg1 ;
-(void)dealloc;
-(UIViewController *)contentViewController;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
@end

