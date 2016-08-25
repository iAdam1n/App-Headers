/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/CartDataManagerObservingController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class EBUCheckoutErrorBannerView, UITableView, UIBarButtonItem, EBUIncentiveCellFactory, EBUIncentiveSelectorActionHandler, NSString;

@interface EBUIncentiveSelectorController : CartDataManagerObservingController <UITableViewDelegate, UITableViewDataSource> {

	BOOL _launchingIncentiveEnterController;
	EBUCheckoutErrorBannerView* _checkoutErrorBannerView;
	UITableView* _tableView;
	UIBarButtonItem* _cancelButton;
	EBUIncentiveCellFactory* _viewFactory;
	EBUIncentiveSelectorActionHandler* _actionHandler;

}

@property (retain) UITableView * tableView;                                                     //@synthesize tableView=_tableView - In the implementation block
@property (assign) BOOL launchingIncentiveEnterController;                                      //@synthesize launchingIncentiveEnterController=_launchingIncentiveEnterController - In the implementation block
@property (retain) UIBarButtonItem * cancelButton;                                              //@synthesize cancelButton=_cancelButton - In the implementation block
@property (retain) EBUIncentiveCellFactory * viewFactory;                                       //@synthesize viewFactory=_viewFactory - In the implementation block
@property (retain) EBUIncentiveSelectorActionHandler * actionHandler;                           //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) EBUCheckoutErrorBannerView * checkoutErrorBannerView;              //@synthesize checkoutErrorBannerView=_checkoutErrorBannerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)incentiveSelector;
-(void)trackViewDidBecomeActive;
-(void)updateUIElements;
-(EBUCheckoutErrorBannerView *)checkoutErrorBannerView;
-(void)setCheckoutErrorBannerView:(EBUCheckoutErrorBannerView *)arg1 ;
-(void)setupNavBar;
-(void)setViewFactory:(EBUIncentiveCellFactory *)arg1 ;
-(void)setupErrorBanner;
-(void)configureCells;
-(void)setLaunchingIncentiveEnterController:(BOOL)arg1 ;
-(BOOL)launchingIncentiveEnterController;
-(void)enableCancelButton:(BOOL)arg1 ;
-(void)showCheckoutErrorBanner:(BOOL)arg1 withMessage:(id)arg2 bannerType:(long long)arg3 ;
-(void)enterIncentive;
-(BOOL)canReedemIncentive:(id)arg1 ;
-(BOOL)hasIncentives;
-(void)registerTracking;
-(void)handleErrors;
-(void)dataManagerCheckoutCartChanged:(BOOL)arg1 ;
-(EBUIncentiveCellFactory *)viewFactory;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(EBUIncentiveSelectorActionHandler *)actionHandler;
-(void)setActionHandler:(EBUIncentiveSelectorActionHandler *)arg1 ;
@end

