/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIPopoverController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol RotatingPopoverDelegate;
@class UIBarButtonItem, UIView, UIViewController, NSArray, UIPopoverPresentationController, NSString;

@interface RotatingPopover : UIPopoverController <UIPopoverPresentationControllerDelegate> {

	UIBarButtonItem* item;
	UIView* view;
	BOOL wasVisible;
	unsigned long long arrowDirectionsLandscape;
	unsigned long long arrowDirectionsPortrait;
	BOOL isDismissingForRotation;
	BOOL _configureWithoutTheme;
	BOOL _usePopoverPresentationController;
	id<RotatingPopoverDelegate> actualDelegate;
	unsigned long long _preferredArrowDirection;
	UIViewController* _inputViewController;
	unsigned long long _style;
	UIViewController* _presentingViewController;
	NSArray* _popoverPassthroughViews;
	UIPopoverPresentationController* _popoverPresentationController;
	UIEdgeInsets insets;

}

@property (nonatomic,retain) NSArray * popoverPassthroughViews;                                            //@synthesize popoverPassthroughViews=_popoverPassthroughViews - In the implementation block
@property (nonatomic,retain) UIPopoverPresentationController * popoverPresentationController;              //@synthesize popoverPresentationController=_popoverPresentationController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * item; 
@property (nonatomic,retain) UIView * view; 
@property (assign,nonatomic) UIEdgeInsets insets; 
@property (assign,nonatomic) unsigned long long preferredArrowDirection;                                   //@synthesize preferredArrowDirection=_preferredArrowDirection - In the implementation block
@property (assign,nonatomic,__weak) id<RotatingPopoverDelegate> actualDelegate; 
@property (nonatomic,readonly) BOOL isDismissingForRotation; 
@property (assign,nonatomic) BOOL configureWithoutTheme;                                                   //@synthesize configureWithoutTheme=_configureWithoutTheme - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * inputViewController;                                //@synthesize inputViewController=_inputViewController - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL usePopoverPresentationController;                                        //@synthesize usePopoverPresentationController=_usePopoverPresentationController - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;                                  //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)popoverContentBgColor;
+(id)popoverContentGuidanceBgColor;
-(void)presentPopoverFromView:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setConfigureWithoutTheme:(BOOL)arg1 ;
-(void)setPreferredArrowDirection:(unsigned long long)arg1 ;
-(void)dismissPopoverAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActualDelegate:(id<RotatingPopoverDelegate>)arg1 ;
-(BOOL)isDismissingForRotation;
-(BOOL)configureWithoutTheme;
-(void)setUsePopoverPresentationController:(BOOL)arg1 ;
-(void)presentPopoverFromView:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithContentViewController:(id)arg1 style:(unsigned long long)arg2 ;
-(BOOL)usePopoverPresentationController;
-(void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirectionsLandscape:(unsigned long long)arg2 permittedArrowDirectionsPortrait:(unsigned long long)arg3 ;
-(void)postRotatePresent;
-(id<RotatingPopoverDelegate>)actualDelegate;
-(unsigned long long)preferredArrowDirection;
-(NSArray *)popoverPassthroughViews;
-(void)setPopoverPassthroughViews:(NSArray *)arg1 ;
-(void)dealloc;
-(UIView *)view;
-(UIBarButtonItem *)item;
-(UIViewController *)presentingViewController;
-(void)setView:(UIView *)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(UIPopoverPresentationController *)popoverPresentationController;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(BOOL)isPopoverVisible;
-(UIViewController *)inputViewController;
-(void)willRotate;
-(void)didRotate;
-(id)initWithContentViewController:(id)arg1 ;
-(void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)setItem:(UIBarButtonItem *)arg1 ;
-(void)setPassthroughViews:(id)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)setInputViewController:(UIViewController *)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setPopoverPresentationController:(UIPopoverPresentationController *)arg1 ;
@end

