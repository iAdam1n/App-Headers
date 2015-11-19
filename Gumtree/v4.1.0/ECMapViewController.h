/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECBaseViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class UIImage, NSArray, MKMapView, NSString;

@interface ECMapViewController : ECBaseViewController <MKMapViewDelegate> {

	UIImage* _adImage;
	NSArray* _annotations;
	double _radius;
	/*^block*/id _dismissHandler;
	MKMapView* _mapView;
	CGSize _coordinate;

}

@property (nonatomic,retain) UIImage * adImage;                     //@synthesize adImage=_adImage - In the implementation block
@property (nonatomic,retain) NSArray * annotations;                 //@synthesize annotations=_annotations - In the implementation block
@property (assign,nonatomic) double radius;                         //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) CGSize coordinate;                     //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy) id dismissHandler;                       //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                   //@synthesize mapView=_mapView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)adImage;
-(void)setAdImage:(UIImage *)arg1 ;
-(void)dismissMap:(id)arg1 ;
-(void)updateAnnotationsOnMap;
-(void)zoomMapToAdPlacemark;
-(void)setCoordinate:(CGSize)arg1 ;
-(CGSize)coordinate;
-(NSArray *)annotations;
-(void)setMapView:(MKMapView *)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(MKMapView *)mapView;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setDismissHandler:(id)arg1 ;
-(id)dismissHandler;
-(void)setAnnotations:(NSArray *)arg1 ;
-(void)setRadius:(double)arg1 ;
-(double)radius;
@end

