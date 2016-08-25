/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/OrderDetailsViewController.h>
#import <nautilus/ViewItemDataManagerObserver.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <eBay/MFMessageComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class UIActivityIndicatorView, UILabel, MKMapView, MKPlacemark, UIButton, NSLayoutConstraint, UIActionSheet, NSString;

@interface PickupViewController : OrderDetailsViewController <ViewItemDataManagerObserver, UIActionSheetDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, MKMapViewDelegate> {

	UIActivityIndicatorView* _spinner;
	UILabel* _orderNumber;
	UILabel* _orderNumberLegend;
	UILabel* _hours;
	UILabel* _hoursLegend;
	UILabel* _instructions;
	UILabel* _instructionsLegend;
	MKMapView* _mapView;
	UILabel* _address;
	MKPlacemark* _placemark;
	UIButton* _directionsButton;
	UIButton* _termsButton;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _tableConstraint;
	UIActionSheet* _actionSheet;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;                 //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UILabel * orderNumber;                             //@synthesize orderNumber=_orderNumber - In the implementation block
@property (nonatomic,retain) UILabel * orderNumberLegend;                       //@synthesize orderNumberLegend=_orderNumberLegend - In the implementation block
@property (nonatomic,retain) UILabel * hours;                                   //@synthesize hours=_hours - In the implementation block
@property (nonatomic,retain) UILabel * hoursLegend;                             //@synthesize hoursLegend=_hoursLegend - In the implementation block
@property (nonatomic,retain) UILabel * instructions;                            //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,retain) UILabel * instructionsLegend;                      //@synthesize instructionsLegend=_instructionsLegend - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                               //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) UILabel * address;                                 //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) MKPlacemark * placemark;                           //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,retain) UIButton * directionsButton;                       //@synthesize directionsButton=_directionsButton - In the implementation block
@property (nonatomic,retain) UIButton * termsButton;                            //@synthesize termsButton=_termsButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableConstraint;              //@synthesize tableConstraint=_tableConstraint - In the implementation block
@property (nonatomic,retain) UIActionSheet * actionSheet;                       //@synthesize actionSheet=_actionSheet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showISPULegalFor:(id)arg1 inside:(id)arg2 ;
-(void)setupTableCells;
-(UIActionSheet *)actionSheet;
-(id)locationString:(id)arg1 withStore:(BOOL)arg2 ;
-(void)recenterMap:(id)arg1 regionLimit:(double)arg2 animated:(BOOL)arg3 ;
-(UILabel *)orderNumber;
-(void)layoutIsReallyDone;
-(UILabel *)orderNumberLegend;
-(BOOL)centerMapIfNecessary;
-(UILabel *)hoursLegend;
-(UILabel *)instructionsLegend;
-(UIButton *)directionsButton;
-(void)launchMap;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
-(void)sendMail:(id)arg1 ;
-(void)dismissCustom;
-(void)setupStatusBanner;
-(void)returnPolicy:(id)arg1 ;
-(void)setOrderNumber:(UILabel *)arg1 ;
-(void)setOrderNumberLegend:(UILabel *)arg1 ;
-(void)setHoursLegend:(UILabel *)arg1 ;
-(void)setInstructionsLegend:(UILabel *)arg1 ;
-(void)setDirectionsButton:(UIButton *)arg1 ;
-(void)setDataManager:(id)arg1 ;
-(void)dataManagerUpdated:(id)arg1 ;
-(id)trackingParams;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topConstraint;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setAddress:(UILabel *)arg1 ;
-(UILabel *)instructions;
-(void)setInstructions:(UILabel *)arg1 ;
-(void)setHours:(UILabel *)arg1 ;
-(UILabel *)hours;
-(MKPlacemark *)placemark;
-(id)messageBody;
-(UIButton *)termsButton;
-(void)setMapView:(MKMapView *)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(MKMapView *)mapView;
-(UILabel *)address;
-(void)sendMessage:(id)arg1 ;
-(void)loadData;
-(void)setPlacemark:(MKPlacemark *)arg1 ;
-(void)sendAction:(id)arg1 ;
-(void)setTableConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)tableConstraint;
-(void)setTermsButton:(UIButton *)arg1 ;
@end

