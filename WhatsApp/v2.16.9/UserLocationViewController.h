/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol WALocationDataSource;
@class WAMapTypeSegmentedControl, UIBarButtonItem, UIImageView, UILabel, WAConversationHeaderView, CLGeocoder, CLLocationManager, CLLocation, NSMutableArray, MKMapView, UIToolbar, NSString;

@interface UserLocationViewController : WAViewController <MKMapViewDelegate, CLLocationManagerDelegate> {

	WAMapTypeSegmentedControl* _segmentedControl;
	UIBarButtonItem* _barButtonSearch;
	UIBarButtonItem* _barButtonAction;
	UIBarButtonItem* _segmentedControlBarItem;
	UIImageView* _noMediaImage;
	UILabel* _noMediaLabelTitle;
	UILabel* _noMediaLabelText;
	WAConversationHeaderView* _headerView;
	long long _lastKnownInterfaceOrientation;
	CLGeocoder* _geocoder;
	CLLocationManager* _locationManager;
	CLLocation* _currentLocation;
	NSMutableArray* _annotations;
	unsigned long long _regionType;
	long long _locationIndex;
	double _zoomLevel;
	BOOL _showMyLocation;
	BOOL _singleLocation;
	BOOL _showMapTypeSelector;
	BOOL _locationAuthorized;
	MKMapView* _mapViewMain;
	UIToolbar* _toolbar;
	id<WALocationDataSource> _dataSource;

}

@property (assign,nonatomic) BOOL locationAuthorized;                                 //@synthesize locationAuthorized=_locationAuthorized - In the implementation block
@property (nonatomic,retain) MKMapView * mapViewMain;                                 //@synthesize mapViewMain=_mapViewMain - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar;                                     //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,nonatomic,__weak) id<WALocationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL showMyLocation;                                     //@synthesize showMyLocation=_showMyLocation - In the implementation block
@property (assign,nonatomic) BOOL singleLocation;                                     //@synthesize singleLocation=_singleLocation - In the implementation block
@property (assign,nonatomic) BOOL showMapTypeSelector;                                //@synthesize showMapTypeSelector=_showMapTypeSelector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mapAction:(id)arg1 ;
-(void)searchAction:(id)arg1 ;
-(MKMapView *)mapViewMain;
-(BOOL)showMyLocation;
-(BOOL)singleLocation;
-(void)updateLocationDataWithCoordinate:(CGSize)arg1 withPlacemark:(id)arg2 ;
-(void)updateAnnotationsWithCurrentLocation;
-(void)reloadAnnotations;
-(void)updateMapRegionAnimated:(BOOL)arg1 ;
-(void)setMapViewMain:(MKMapView *)arg1 ;
-(void)showPlaceInfoAction:(id)arg1 ;
-(void)updateHeaderViewToCurrentInterfaceOrientation;
-(void)layoutNoLocationsView;
-(BOOL)showMapTypeSelector;
-(id)findFirstGroupingWithAnnotations:(id)arg1 ;
-(void)directionsToHere;
-(void)calculateExpectedTravelTimeForAnnotation:(id)arg1 ;
-(void)displayExpectedTravelTime:(double)arg1 forAnnotation:(id)arg2 ;
-(void)processLocationError:(id)arg1 ;
-(id)initWithLocationDataSource:(id)arg1 ;
-(void)setShowMyLocation:(BOOL)arg1 ;
-(void)setSingleLocation:(BOOL)arg1 ;
-(void)setShowMapTypeSelector:(BOOL)arg1 ;
-(void)setDataSource:(id<WALocationDataSource>)arg1 ;
-(id<WALocationDataSource>)dataSource;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)previewActionItems;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)setupToolbar;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)mapTypeChanged:(id)arg1 ;
-(void)updateNavBar;
-(BOOL)locationAuthorized;
-(void)setLocationAuthorized:(BOOL)arg1 ;
@end
