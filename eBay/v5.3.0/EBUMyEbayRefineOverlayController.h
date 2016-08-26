/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/ContentDeckOverlayViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <eBay/ContentDeckControllerDelegate.h>
#import <eBay/ContentDeckOverlayViewDelegate.h>

@protocol EBUMyEbayRefineElementController;
@class EBUDeckContentViewController, UINavigationController, NSString;

@interface EBUMyEbayRefineOverlayController : ContentDeckOverlayViewController <UINavigationControllerDelegate, ContentDeckControllerDelegate, ContentDeckOverlayViewDelegate> {

	EBUDeckContentViewController*<EBUMyEbayRefineElementController> _refineController;
	UINavigationController* _refineNavController;

}

@property (nonatomic,retain) UINavigationController * refineNavController;                                                  //@synthesize refineNavController=_refineNavController - In the implementation block
@property (nonatomic,retain) EBUDeckContentViewController*<EBUMyEbayRefineElementController> refineController;              //@synthesize refineController=_refineController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contentDeckOverlayView:(id)arg1 wasHidden:(BOOL)arg2 ;
-(void)enableScrollingDuringPan:(BOOL)arg1 ;
-(EBUDeckContentViewController*<EBUMyEbayRefineElementController>)refineController;
-(void)enablePanning:(BOOL)arg1 ;
-(void)dismissDeckController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRefineController:(EBUDeckContentViewController*<EBUMyEbayRefineElementController>)arg1 ;
-(UINavigationController *)refineNavController;
-(void)setRefineNavController:(UINavigationController *)arg1 ;
-(void)setShowCategoryRefine:(BOOL)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)accessibilityPerformEscape;
@end
