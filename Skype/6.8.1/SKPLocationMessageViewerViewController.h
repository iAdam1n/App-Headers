//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPViewController.h"

#import "MKMapViewDelegate.h"

@class CLGeocoder, CLLocation, MKMapView, NSString;

@interface SKPLocationMessageViewerViewController : SKPViewController <MKMapViewDelegate>
{
    MKMapView *_mapView;
    CLLocation *_location;
    CLGeocoder *_geocoder;
    NSString *_address;
    NSString *_pointOfInterest;
    long long _onceToken;
}

@property(nonatomic) long long onceToken; // @synthesize onceToken=_onceToken;
@property(copy, nonatomic) NSString *pointOfInterest; // @synthesize pointOfInterest=_pointOfInterest;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (id)previewActionItems;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)onCancel:(id)arg1;
- (void)createAnnotationFromLocation:(id)arg1;
- (void)openExternal;
- (void)setupNavigationBar;
- (void)setupMapView;
- (void)didChangePreviewing:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithLocation:(id)arg1 andAddress:(id)arg2 andPointOfInterest:(id)arg3;
- (id)initWithAddress:(id)arg1 andPointOfInterest:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
