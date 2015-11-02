/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <WhatsApp/WAStaticPinControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKMapViewDelegateWAMapViewDelegate;
@class MKMapView, CLGeocoder, CLLocation, CLPlacemark, WAStaticPinController, UIView, _WAUserTrackingButton, _WAStaticPinButton, _WA3DMapButton, UIPinchGestureRecognizer, UITapGestureRecognizer, UIRotationGestureRecognizer, UIPanGestureRecognizer, MKMapCamera, NSTimer, MKUserLocation, NSArray, NSString;

@interface WAMapView : UIView <MKMapViewDelegate, WAStaticPinControllerDelegate, UIGestureRecognizerDelegate> {

	MKMapView* _mapView;
	CLGeocoder* _geocoder;
	CLLocation* _geocodeLocation;
	CLPlacemark* _geocodePlacemark;
	WAStaticPinController* _staticPinController;
	BOOL _showPinOnAnnotationDeselect;
	BOOL _locationDataReceived;
	BOOL _mapViewCallbackReceived;
	BOOL _processingCustomMapGesture;
	BOOL _animatingMapToUserLocation;
	SCD_Struct_WA6 _userLocationMapRect;
	SCD_Struct_WA6 _savedMapRect;
	UIView* _viewMapButtons;
	_WAUserTrackingButton* _buttonUserTracking;
	_WAStaticPinButton* _buttonStaticPin;
	_WA3DMapButton* _button3DMap;
	UIPinchGestureRecognizer* _pinchGesture;
	UITapGestureRecognizer* _doubleTapGesture;
	UITapGestureRecognizer* _doubleFingerTapGesture;
	UIRotationGestureRecognizer* _rotationGesture;
	UIPanGestureRecognizer* _panGesture;
	CGPoint _lastPanTranslation;
	MKMapCamera* _initialMapCamera;
	NSTimer* _decelerationTimer;
	BOOL _map3DModeEnabled;
	BOOL _staticPinEnabled;
	BOOL _mapMovedByUser;
	BOOL _tracksUserLocation;
	id<MKMapViewDelegate><WAMapViewDelegate> _delegate;
	UIEdgeInsets _mapInset;

}

@property (assign,getter=isMap3DModeEnabled,nonatomic) BOOL map3DModeEnabled;                       //@synthesize map3DModeEnabled=_map3DModeEnabled - In the implementation block
@property (assign,getter=isStaticPinEnabled,nonatomic) BOOL staticPinEnabled;                       //@synthesize staticPinEnabled=_staticPinEnabled - In the implementation block
@property (assign,getter=isStaticPinHidden,nonatomic) BOOL staticPinHidden; 
@property (assign,nonatomic) BOOL mapMovedByUser;                                                   //@synthesize mapMovedByUser=_mapMovedByUser - In the implementation block
@property (assign,nonatomic) UIEdgeInsets mapInset;                                                 //@synthesize mapInset=_mapInset - In the implementation block
@property (assign,nonatomic,__weak) id<MKMapViewDelegate><WAMapViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL tracksUserLocation;                                               //@synthesize tracksUserLocation=_tracksUserLocation - In the implementation block
@property (nonatomic,readonly) MKUserLocation * userLocation; 
@property (nonatomic,readonly) SCD_Struct_WA6 region; 
@property (nonatomic,copy) NSArray * selectedAnnotations; 
@property (assign,nonatomic) BOOL showsUserLocation; 
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) unsigned long long mapType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)advancedMapControlsSupported;
-(void)setStaticPinHidden:(BOOL)arg1 ;
-(void)setMap3DModeEnabled:(BOOL)arg1 ;
-(void)handlePinchGesture:(id)arg1 ;
-(void)handleDoubleTapGesture:(id)arg1 ;
-(void)handleDoubleFingerTapGesture:(id)arg1 ;
-(void)handleRotationGesture:(id)arg1 ;
-(void)changeMap3DModeAction:(id)arg1 ;
-(void)staticPinButtonAction:(id)arg1 ;
-(void)changeUserTrackingModeAction:(id)arg1 ;
-(UIEdgeInsets)mapInset;
-(void)setMapMovedByUser:(BOOL)arg1 ;
-(BOOL)isStaticPinEnabled;
-(void)setShows3DMap:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)reload3DMapButtonVisibilityAndState;
-(BOOL)isShowing3DMap;
-(BOOL)isMap3DModeEnabled;
-(BOOL)canShow3DMap;
-(void)cancelDeceleration:(BOOL)arg1 ;
-(void)updateUserTrackingState;
-(void)decelerateMapWithVelocity:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(void)decelerationTimer:(id)arg1 ;
-(void)reloadStateOfUserTrackingButton;
-(void)zoomToUserLocationAnimated:(BOOL)arg1 resetZoomLevel:(BOOL)arg2 ;
-(BOOL)tracksUserLocation;
-(BOOL)mapMovedByUser;
-(void)setTracksUserLocation:(BOOL)arg1 ;
-(void)reloadGestureRecognizers;
-(void)setStaticPinHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)startReverseGeocodingForCurrentLocation;
-(void)sendCenterPinLocation;
-(BOOL)isStaticPinHidden;
-(void)adjustCalloutViewForAnnotationView:(id)arg1 ;
-(void)staticPinControllerCalloutTapped:(id)arg1 ;
-(void)staticPinControllerPinDropped:(id)arg1 ;
-(id)wa_userLocationView;
-(void)zoomToLocation:(id)arg1 radius:(double)arg2 ;
-(void)setMapInset:(UIEdgeInsets)arg1 ;
-(void)saveMapRegion;
-(void)restoreMapRegionAnimated:(BOOL)arg1 zoomToAnnotations:(id)arg2 ;
-(void)setStaticPinEnabled:(BOOL)arg1 ;
-(void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(SCD_Struct_WA6)visibleMapRect;
-(void)selectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(BOOL)showsUserLocation;
-(BOOL)showsPointsOfInterest;
-(void)handlePanGesture:(id)arg1 ;
-(NSArray *)selectedAnnotations;
-(void)setShowsUserLocation:(BOOL)arg1 ;
-(void)setSelectedAnnotations:(NSArray *)arg1 ;
-(MKUserLocation *)userLocation;
-(SCD_Struct_WA6)mapRectThatFits:(SCD_Struct_WA6)arg1 ;
-(SCD_Struct_WA6)mapRectThatFits:(SCD_Struct_WA6)arg1 edgePadding:(UIEdgeInsets)arg2 ;
-(void)setVisibleMapRect:(SCD_Struct_WA6)arg1 animated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(void)removeAnnotations:(id)arg1 ;
-(void)addAnnotations:(id)arg1 ;
-(void)addAnnotation:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MKMapViewDelegate><WAMapViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)isDecelerating;
-(id<MKMapViewDelegate><WAMapViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)awakeFromNib;
-(SCD_Struct_WA6)region;
-(void)configure;
-(unsigned long long)mapType;
-(void)setMapType:(unsigned long long)arg1 ;
@end
