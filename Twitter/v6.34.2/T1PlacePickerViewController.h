/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNItemsDataViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Twitter/TFNScrollingTitleViewDataSource.h>
#import <Twitter/T1PlacePickerDisclaimerRowAdapterDelegate.h>

@protocol T1PlacePickerViewControllerDelegate;
@class TFNTwitterComposePlaceStore, TFNTwitterCompositionGeotagSession, NSArray, TFNBarButtonItem, T1PlacePickerTableRowAdapter, T1PlacePickerDisclaimerRowAdapter, T1PlacePickerActionAdapter, T1PlacePickerAttributionTableRowAdapter, T1PlacePickerDisclaimer, TFNTwitterPlaceAttribution, TFNTwitterDummyStatus, T1PreciseLocationSwitch, TFNScrollingTitleView, UISearchBar, TFNTwitterPlace, NSString;

@interface T1PlacePickerViewController : TFNItemsDataViewController <UISearchBarDelegate, TFNScrollingTitleViewDataSource, T1PlacePickerDisclaimerRowAdapterDelegate> {

	BOOL _preciseLocationSwitchVisible;
	BOOL _clientFilterActive;
	TFNTwitterComposePlaceStore* _placeStore;
	TFNTwitterCompositionGeotagSession* _geotagSession;
	long long _preciseLocationMode;
	id<T1PlacePickerViewControllerDelegate> _delegate;
	NSArray* _placeItems;
	TFNBarButtonItem* _removeBarButton;
	TFNBarButtonItem* _doneBarButton;
	T1PlacePickerTableRowAdapter* _placeAdapter;
	T1PlacePickerDisclaimerRowAdapter* _disclaimerAdapter;
	T1PlacePickerActionAdapter* _searchItemAdapter;
	T1PlacePickerAttributionTableRowAdapter* _attributionAdapter;
	T1PlacePickerDisclaimer* _placeDisclaimer;
	TFNTwitterPlaceAttribution* _placeAttribution;
	TFNTwitterDummyStatus* _errorRetryStatus;
	T1PreciseLocationSwitch* _preciseLocationSwitch;
	TFNScrollingTitleView* _titleView;
	UISearchBar* _searchBar;

}

@property (nonatomic,readonly) TFNTwitterComposePlaceStore * placeStore;                                //@synthesize placeStore=_placeStore - In the implementation block
@property (nonatomic,retain) TFNTwitterCompositionGeotagSession * geotagSession;                        //@synthesize geotagSession=_geotagSession - In the implementation block
@property (assign,nonatomic) long long preciseLocationMode;                                             //@synthesize preciseLocationMode=_preciseLocationMode - In the implementation block
@property (nonatomic,__weak,readonly) id<T1PlacePickerViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * placeItems;                                                      //@synthesize placeItems=_placeItems - In the implementation block
@property (nonatomic,retain) TFNBarButtonItem * removeBarButton;                                        //@synthesize removeBarButton=_removeBarButton - In the implementation block
@property (nonatomic,retain) TFNBarButtonItem * doneBarButton;                                          //@synthesize doneBarButton=_doneBarButton - In the implementation block
@property (nonatomic,retain) T1PlacePickerTableRowAdapter * placeAdapter;                               //@synthesize placeAdapter=_placeAdapter - In the implementation block
@property (nonatomic,retain) T1PlacePickerDisclaimerRowAdapter * disclaimerAdapter;                     //@synthesize disclaimerAdapter=_disclaimerAdapter - In the implementation block
@property (nonatomic,retain) T1PlacePickerActionAdapter * searchItemAdapter;                            //@synthesize searchItemAdapter=_searchItemAdapter - In the implementation block
@property (nonatomic,retain) T1PlacePickerAttributionTableRowAdapter * attributionAdapter;              //@synthesize attributionAdapter=_attributionAdapter - In the implementation block
@property (nonatomic,retain) T1PlacePickerDisclaimer * placeDisclaimer;                                 //@synthesize placeDisclaimer=_placeDisclaimer - In the implementation block
@property (nonatomic,retain) TFNTwitterPlaceAttribution * placeAttribution;                             //@synthesize placeAttribution=_placeAttribution - In the implementation block
@property (nonatomic,retain) TFNTwitterDummyStatus * errorRetryStatus;                                  //@synthesize errorRetryStatus=_errorRetryStatus - In the implementation block
@property (nonatomic,retain) T1PreciseLocationSwitch * preciseLocationSwitch;                           //@synthesize preciseLocationSwitch=_preciseLocationSwitch - In the implementation block
@property (assign,nonatomic) BOOL preciseLocationSwitchVisible;                                         //@synthesize preciseLocationSwitchVisible=_preciseLocationSwitchVisible - In the implementation block
@property (nonatomic,retain) TFNScrollingTitleView * titleView;                                         //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                   //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic) BOOL clientFilterActive;                                                   //@synthesize clientFilterActive=_clientFilterActive - In the implementation block
@property (nonatomic,readonly) TFNTwitterPlace * selectedPlace; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)legacyContentPadding;
-(id)calculatedLayoutMetrics;
-(void)didSelectItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_updateSections;
-(void)saveScrollPosition;
-(TFNTwitterComposePlaceStore *)placeStore;
-(TFNTwitterPlace *)selectedPlace;
-(TFNBarButtonItem *)doneBarButton;
-(TFNTwitterCompositionGeotagSession *)geotagSession;
-(id)initWithPlaceStore:(id)arg1 delegate:(id)arg2 ;
-(void)setGeotagSession:(TFNTwitterCompositionGeotagSession *)arg1 ;
-(void)setPreciseLocationMode:(long long)arg1 ;
-(void)disclaimerRowAdapterDidDisplayDisclaimerCell:(id)arg1 ;
-(void)_placeFetchSuccessful:(id)arg1 ;
-(void)_placeFetchFailed:(id)arg1 ;
-(void)_placeSearchSuccessful:(id)arg1 ;
-(void)_placeSearchFailed:(id)arg1 ;
-(id)_barButtonItemWithTitle:(id)arg1 action:(SEL)arg2 font:(id)arg3 ;
-(void)_okButtonTapped:(id)arg1 ;
-(void)_preciseLocationSwitchDidChange:(id)arg1 ;
-(UIOffset)_searchTextOffset;
-(id)_searchBarBackgroundImage;
-(void)setPlaceDisclaimer:(T1PlacePickerDisclaimer *)arg1 ;
-(T1PreciseLocationSwitch *)preciseLocationSwitch;
-(BOOL)preciseLocationSwitchVisible;
-(double)_preciseLocationSwitchYForVisible:(BOOL)arg1 ;
-(void)_updatePlaceholder:(id)arg1 ;
-(void)_updateRemoveButtonState;
-(TFNBarButtonItem *)removeBarButton;
-(T1PlacePickerTableRowAdapter *)placeAdapter;
-(T1PlacePickerDisclaimerRowAdapter *)disclaimerAdapter;
-(T1PlacePickerDisclaimer *)placeDisclaimer;
-(long long)preciseLocationMode;
-(id)_emptyLoadStatus;
-(void)setPlaceItems:(NSArray *)arg1 ;
-(void)setPlaceAttribution:(TFNTwitterPlaceAttribution *)arg1 ;
-(void)_setPreciseLocationSwitchVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_errorLoadRetryStatus;
-(void)setErrorRetryStatus:(TFNTwitterDummyStatus *)arg1 ;
-(TFNTwitterDummyStatus *)errorRetryStatus;
-(id)_emptySearchStatus;
-(id)_errorSearchRetryStatus;
-(NSArray *)placeItems;
-(BOOL)clientFilterActive;
-(T1PlacePickerActionAdapter *)searchItemAdapter;
-(TFNTwitterPlaceAttribution *)placeAttribution;
-(void)setClientFilterActive:(BOOL)arg1 ;
-(void)_executeSearchWithQuery:(id)arg1 ;
-(void)_syncTitleViewScrollWithScrollView:(id)arg1 ;
-(void)_showNavBarShadow:(BOOL)arg1 ;
-(BOOL)_shouldShowPreciseLocationSwitch;
-(void)_executeSearch;
-(id)_errorDummyStatusWithMessage:(id)arg1 ;
-(/*^block*/id)_errorActionBlockForQuery:(id)arg1 ;
-(id)_emptyDummyStatusWithMessage:(id)arg1 ;
-(id)titleView:(id)arg1 titleTupleAtIndex:(long long)arg2 ;
-(long long)numberOfTitlesForTitleView:(id)arg1 ;
-(id)navigationBarForTitleView:(id)arg1 ;
-(double)scalingOffsetForTitleView:(id)arg1 ;
-(double)scalingFactorForTitleView:(id)arg1 ;
-(void)setPreciseLocationSwitchVisible:(BOOL)arg1 ;
-(void)setRemoveBarButton:(TFNBarButtonItem *)arg1 ;
-(void)setDoneBarButton:(TFNBarButtonItem *)arg1 ;
-(void)setPlaceAdapter:(T1PlacePickerTableRowAdapter *)arg1 ;
-(void)setDisclaimerAdapter:(T1PlacePickerDisclaimerRowAdapter *)arg1 ;
-(void)setSearchItemAdapter:(T1PlacePickerActionAdapter *)arg1 ;
-(T1PlacePickerAttributionTableRowAdapter *)attributionAdapter;
-(void)setAttributionAdapter:(T1PlacePickerAttributionTableRowAdapter *)arg1 ;
-(void)setPreciseLocationSwitch:(T1PreciseLocationSwitch *)arg1 ;
-(void)_removeButtonTapped:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<T1PlacePickerViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(TFNScrollingTitleView *)titleView;
-(void)setTitleView:(TFNScrollingTitleView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(UISearchBar *)searchBar;
-(void)update;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)_reloadData;
@end
