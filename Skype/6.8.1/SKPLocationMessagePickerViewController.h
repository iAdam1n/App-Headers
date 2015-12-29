//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPViewController.h"

#import "MKMapViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UISearchBarDelegate.h"

@class CLGeocoder, MKMapView, MKUserTrackingBarButtonItem, NSString, UIBarButtonItem, UIPanGestureRecognizer, UISearchBar;

@interface SKPLocationMessagePickerViewController : SKPViewController <UINavigationControllerDelegate, MKMapViewDelegate, UIGestureRecognizerDelegate, UISearchBarDelegate>
{
    CDUnknownBlockType _fetchAuxiliaryObjectBlock;
    UIBarButtonItem *_resetBarButton;
    UIBarButtonItem *_sendBarButton;
    UIBarButtonItem *_cancelBarButton;
    UIBarButtonItem *_flexibleSpaceBarButton;
    UISearchBar *_searchBar;
    MKUserTrackingBarButtonItem *_trackBarButton;
    MKMapView *_mapView;
    id <MKAnnotation> _selectedAnnotation;
    CLGeocoder *_geocoder;
    UIPanGestureRecognizer *_panGestureRecognizer;
    long long _onceToken;
}

@property(nonatomic) long long onceToken; // @synthesize onceToken=_onceToken;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(retain, nonatomic) id <MKAnnotation> selectedAnnotation; // @synthesize selectedAnnotation=_selectedAnnotation;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) MKUserTrackingBarButtonItem *trackBarButton; // @synthesize trackBarButton=_trackBarButton;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIBarButtonItem *flexibleSpaceBarButton; // @synthesize flexibleSpaceBarButton=_flexibleSpaceBarButton;
@property(retain, nonatomic) UIBarButtonItem *cancelBarButton; // @synthesize cancelBarButton=_cancelBarButton;
@property(retain, nonatomic) UIBarButtonItem *sendBarButton; // @synthesize sendBarButton=_sendBarButton;
@property(retain, nonatomic) UIBarButtonItem *resetBarButton; // @synthesize resetBarButton=_resetBarButton;
@property(copy, nonatomic) CDUnknownBlockType fetchAuxiliaryObjectBlock; // @synthesize fetchAuxiliaryObjectBlock=_fetchAuxiliaryObjectBlock;
- (void).cxx_destruct;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)mapLongPress:(id)arg1;
- (void)mapPan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)clearAnnotationsOfClass:(Class)arg1;
- (void)resetMapView;
- (void)onCancel:(id)arg1;
- (void)sendLocation:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateMagnifyingIcon;
- (void)updateToolbar:(_Bool)arg1;
- (void)setupNavigationBar;
- (void)setupMapView;
- (void)setupButtons;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFetchAuxiliaryObjectBlock:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
