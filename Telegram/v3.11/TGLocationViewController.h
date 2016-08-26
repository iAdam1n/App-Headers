/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class CLLocationManager, CLLocation, TGVenueAttachment, TGLocationMediaAttachment, TGLocationAnnotation, MKDirections, TGLocationTitleView, TGLocationMapView, UIBarButtonItem, UIView, TGLocationTrackingButton, TGLocationMapModeControl, TGNavigationBar, NSString;

@interface TGLocationViewController : TGViewController <MKMapViewDelegate> {

	CLLocationManager* _locationManager;
	BOOL _locationServicesDisabled;
	CLLocation* _location;
	TGVenueAttachment* _venue;
	TGLocationMediaAttachment* _locationAttachment;
	TGLocationAnnotation* _annotation;
	CLLocation* _lastDirectionsStartLocation;
	MKDirections* _directions;
	TGLocationTitleView* _titleView;
	TGLocationMapView* _mapView;
	UIBarButtonItem* _actionsBarItem;
	UIView* _toolbarView;
	TGLocationTrackingButton* _trackingButton;
	TGLocationMapModeControl* _mapModeControl;
	id _peer;
	TGNavigationBar* _previewNavigationBar;
	BOOL _previewMode;
	/*^block*/id _shareAction;
	/*^block*/id _calloutPressed;

}

@property (assign,nonatomic) BOOL previewMode;                      //@synthesize previewMode=_previewMode - In the implementation block
@property (nonatomic,copy) id shareAction;                          //@synthesize shareAction=_shareAction - In the implementation block
@property (nonatomic,copy) id calloutPressed;                       //@synthesize calloutPressed=_calloutPressed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShareAction:(id)arg1 ;
-(id)initWithCoordinate:(CGPoint)arg1 venue:(id)arg2 peer:(id)arg3 ;
-(void)trackingModePressed;
-(void)mapModeControlValueChanged:(id)arg1 ;
-(void)dismissButtonPressed;
-(void)actionsButtonPressed;
-(BOOL)_hasUserLocation;
-(void)updateLocationAvailability;
-(void)updateAnnotation;
-(id)calloutPressed;
-(void)setCalloutPressed:(id)arg1 ;
-(void)getDirectionsPressed;
-(void)_updateAnnotationView;
-(void)_updateDirectionsETA;
-(id)initWithLocationAttachment:(id)arg1 peer:(id)arg2 ;
-(id)_coordinateString;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)setPreviewMode:(BOOL)arg1 ;
-(BOOL)previewMode;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(id)shareAction;
@end
