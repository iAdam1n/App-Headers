/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIViewController.h>

@protocol SKPToastViewControllerDelegate, SKPToastItem;
@class UIViewController, UIView, NSDate;

@interface SKPToastViewController : UIViewController {

	id<SKPToastViewControllerDelegate> _delegate;
	UIViewController* _contentViewController;
	UIView* _containerView;
	NSDate* _toastAppearTimestamp;
	id<SKPToastItem> _toastItem;
	UIView* _toastView;

}

@property (nonatomic,retain) UIViewController * contentViewController;                        //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                          //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSDate * toastAppearTimestamp;                                   //@synthesize toastAppearTimestamp=_toastAppearTimestamp - In the implementation block
@property (nonatomic,retain) id<SKPToastItem> toastItem;                                      //@synthesize toastItem=_toastItem - In the implementation block
@property (nonatomic,retain) UIView * toastView;                                              //@synthesize toastView=_toastView - In the implementation block
@property (assign,nonatomic,__weak) id<SKPToastViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect toastContentFrame; 
-(void)setToastView:(UIView *)arg1 ;
-(UIView *)toastView;
-(void)toastPanGesture:(id)arg1 ;
-(id)dashedPatternDebuggingBackgroundColor;
-(void)updateViewFrame;
-(void)removeToast:(BOOL)arg1 ;
-(id<SKPToastItem>)toastItem;
-(void)setToastItem:(id<SKPToastItem>)arg1 ;
-(void)dismissToastNaturally;
-(CGRect)toastContentFrame;
-(double)percentageOfLeftViewVisible;
-(BOOL)shouldSlideOutForEndedPan:(id)arg1 ;
-(NSDate *)toastAppearTimestamp;
-(void)removeToastWithAnimation;
-(void)showToast;
-(void)setToastAppearTimestamp:(NSDate *)arg1 ;
-(void)tapGestureRecognizerTapped:(id)arg1 ;
-(void)showToast:(id)arg1 ;
-(void)dismissCurrentToast:(BOOL)arg1 ;
-(void)setDelegate:(id<SKPToastViewControllerDelegate>)arg1 ;
-(id)init;
-(id)debugDescription;
-(id<SKPToastViewControllerDelegate>)delegate;
-(UIView *)containerView;
-(void)invalidate;
-(void)loadView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIViewController *)contentViewController;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
@end
