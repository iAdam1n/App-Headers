/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBNearbyPlacesComponentAnalyticsDelegate.h>
#import <Facebook/FBNearbyPlacesMapViewDelegate.h>

@protocol FBNearbyPlacesMapViewControllerDelegate;
@class FBNearbyPlacesLoggerHelper, FBNearbyPlacesResultListModel, FBNearbyPlacesMapView, FBNearbyPlacesPageActionHandler, FBComponentCollectionViewFlowLayoutDelegate, NSArray, NSIndexPath, FBComponentCollectionViewDataSource, NSString;

@interface FBNearbyPlacesMapViewController : UIViewController <MKMapViewDelegate, FBComponentScrollEventListener, FBNearbyPlacesComponentAnalyticsDelegate, FBNearbyPlacesMapViewDelegate> {

	FBNearbyPlacesLoggerHelper* _nearbyPlacesLoggerHelper;
	FBNearbyPlacesResultListModel* _model;
	FBNearbyPlacesMapView* _nearbyPlacesMapView;
	FBNearbyPlacesPageActionHandler* _pageActionHandler;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	NSArray* _annotations;
	NSIndexPath* _currentIndexPath;
	UIEdgeInsets _contentInset;
	BOOL _isUserInteractingWithMap;
	BOOL _didUserDragMap;
	BOOL _isInitFlow;
	id<FBNearbyPlacesMapViewControllerDelegate> _delegate;
	FBComponentCollectionViewDataSource* _componentDataSource;
	NSIndexPath* _initialIndexPath;

}

@property (assign,nonatomic,__weak) id<FBNearbyPlacesMapViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBComponentCollectionViewDataSource * componentDataSource;              //@synthesize componentDataSource=_componentDataSource - In the implementation block
@property (nonatomic,readonly) NSIndexPath * initialIndexPath;                                         //@synthesize initialIndexPath=_initialIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewWillEndDragging:(FBScrollViewState)arg1 withVelocity:(CGPoint)arg2 fixedTargetContentOffset:(CGPoint)arg3 ;
-(unsigned long long)indexOfComponentWithPage:(id)arg1 ;
-(void)componentWithPage:(id)arg1 didPerformAction:(unsigned long long)arg2 ;
-(void)componentWithPage:(id)arg1 didTapPhotoAtIndex:(unsigned long long)arg2 totalCount:(unsigned long long)arg3 ;
-(void)_updateCollectionViewVisibilityAnimated:(BOOL)arg1 ;
-(void)_scrollToItemAtIndexPath:(id)arg1 ;
-(void)_addMapAnnotations;
-(void)_layoutMapRegionAnimated:(BOOL)arg1 ;
-(BOOL)_isUserCloseToResult;
-(void)_updateCurrentSelected:(id)arg1 ;
-(void)_enqueueInitialChangeset;
-(void)_centerMapRegion:(id)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)_combinedContentInsets;
-(SCD_Struct_FB5)_userVisibleMapRect;
-(void)_centerMapLocation:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isAnnotationVisibleToUser:(id)arg1 ;
-(void)_centerPinIfNotVisibleOnMap:(id)arg1 ;
-(void)_updateDidUserInteractWithMapForRegionChange;
-(void)_didTapUserLocation;
-(void)_didTapSearchThisAreaButton;
-(void)mapViewDidTapLocationButton:(id)arg1 ;
-(void)mapViewDidTapSearchButton:(id)arg1 ;
-(void)_setupComponentDataSource;
-(void)setContentInset:(UIEdgeInsets)arg1 animated:(BOOL)arg2 ;
-(id)initWithModel:(id)arg1 loggerHelper:(id)arg2 pageActionHandler:(id)arg3 initialIndexPath:(id)arg4 ;
-(void)updateWithModel:(id)arg1 ;
-(void)clearDataForFetching;
-(void)updateMapViewWithModel;
-(void)setButtonsVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSIndexPath *)initialIndexPath;
-(void)selectItemAtIndexPath:(id)arg1 ;
-(FBComponentCollectionViewDataSource *)componentDataSource;
-(id)_indexPathForComponentWithPage:(id)arg1 ;
-(void)setDelegate:(id<FBNearbyPlacesMapViewControllerDelegate>)arg1 ;
-(id<FBNearbyPlacesMapViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)hideLoadingIndicator;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(unsigned long long)resultsCount;
@end
