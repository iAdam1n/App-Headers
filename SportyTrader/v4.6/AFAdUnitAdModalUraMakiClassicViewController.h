/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/AFAdSDKModalViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class UIScrollView, UIView, AFAsyncImageView, UILabel, AFSDKAdUraMakiBackView, AFAdSDKAdBadgeView, AFAdSDKFlatLabelView, AFAdSDKPriceStrokeView, UIButton, CAGradientLayer, NSString;

@interface AFAdUnitAdModalUraMakiClassicViewController : AFAdSDKModalViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate, UIViewControllerTransitioningDelegate> {

	BOOL _isIpad;
	BOOL _isSmalliPhone;
	BOOL _isiPhone6;
	BOOL _didAnimate;
	BOOL _didConfigure;
	BOOL _wasStatusBarDisplayed;
	BOOL _shouldHelpMainComponentsToScrollFaster;
	UIScrollView* _scrollviewWrapper;
	double _initialPositionHost;
	double _initialPositionTarget;
	UIView* _viewHostContainer;
	UIView* _imageHostScreenshot;
	AFAsyncImageView* _imageHostIcon;
	UILabel* _labelHostTitle;
	AFSDKAdUraMakiBackView* _viewHostBack;
	UIView* _viewTargetContainer;
	AFAsyncImageView* _imageTargetScreenshot;
	AFAsyncImageView* _imageTargetIcon;
	UILabel* _labelTargetTitle;
	UILabel* _labelTargetTagline;
	AFAdSDKAdBadgeView* _viewTargetPromoted;
	AFAdSDKFlatLabelView* _viewTargetPrice;
	UILabel* _labelTargetPrevPrice;
	AFAdSDKPriceStrokeView* _viewTargetPrevPriceStroke;
	UIButton* _buttonDownload;
	CAGradientLayer* _buttonDownloadBackground;
	CGRect _imageHostScreenshotInitialFrame;

}

@property (assign,nonatomic) BOOL isIpad;                                                     //@synthesize isIpad=_isIpad - In the implementation block
@property (assign,nonatomic) BOOL isSmalliPhone;                                              //@synthesize isSmalliPhone=_isSmalliPhone - In the implementation block
@property (assign,nonatomic) BOOL isiPhone6;                                                  //@synthesize isiPhone6=_isiPhone6 - In the implementation block
@property (assign,nonatomic) BOOL didAnimate;                                                 //@synthesize didAnimate=_didAnimate - In the implementation block
@property (assign,nonatomic) BOOL didConfigure;                                               //@synthesize didConfigure=_didConfigure - In the implementation block
@property (assign,nonatomic) BOOL wasStatusBarDisplayed;                                      //@synthesize wasStatusBarDisplayed=_wasStatusBarDisplayed - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollviewWrapper;                                //@synthesize scrollviewWrapper=_scrollviewWrapper - In the implementation block
@property (assign,nonatomic) double initialPositionHost;                                      //@synthesize initialPositionHost=_initialPositionHost - In the implementation block
@property (assign,nonatomic) double initialPositionTarget;                                    //@synthesize initialPositionTarget=_initialPositionTarget - In the implementation block
@property (assign,nonatomic) BOOL shouldHelpMainComponentsToScrollFaster;                     //@synthesize shouldHelpMainComponentsToScrollFaster=_shouldHelpMainComponentsToScrollFaster - In the implementation block
@property (nonatomic,retain) UIView * viewHostContainer;                                      //@synthesize viewHostContainer=_viewHostContainer - In the implementation block
@property (nonatomic,retain) UIView * imageHostScreenshot;                                    //@synthesize imageHostScreenshot=_imageHostScreenshot - In the implementation block
@property (nonatomic,retain) AFAsyncImageView * imageHostIcon;                                //@synthesize imageHostIcon=_imageHostIcon - In the implementation block
@property (nonatomic,retain) UILabel * labelHostTitle;                                        //@synthesize labelHostTitle=_labelHostTitle - In the implementation block
@property (nonatomic,retain) AFSDKAdUraMakiBackView * viewHostBack;                           //@synthesize viewHostBack=_viewHostBack - In the implementation block
@property (assign,nonatomic) CGRect imageHostScreenshotInitialFrame;                          //@synthesize imageHostScreenshotInitialFrame=_imageHostScreenshotInitialFrame - In the implementation block
@property (nonatomic,retain) UIView * viewTargetContainer;                                    //@synthesize viewTargetContainer=_viewTargetContainer - In the implementation block
@property (nonatomic,retain) AFAsyncImageView * imageTargetScreenshot;                        //@synthesize imageTargetScreenshot=_imageTargetScreenshot - In the implementation block
@property (nonatomic,retain) AFAsyncImageView * imageTargetIcon;                              //@synthesize imageTargetIcon=_imageTargetIcon - In the implementation block
@property (nonatomic,retain) UILabel * labelTargetTitle;                                      //@synthesize labelTargetTitle=_labelTargetTitle - In the implementation block
@property (nonatomic,retain) UILabel * labelTargetTagline;                                    //@synthesize labelTargetTagline=_labelTargetTagline - In the implementation block
@property (nonatomic,retain) AFAdSDKAdBadgeView * viewTargetPromoted;                         //@synthesize viewTargetPromoted=_viewTargetPromoted - In the implementation block
@property (nonatomic,retain) AFAdSDKFlatLabelView * viewTargetPrice;                          //@synthesize viewTargetPrice=_viewTargetPrice - In the implementation block
@property (nonatomic,retain) UILabel * labelTargetPrevPrice;                                  //@synthesize labelTargetPrevPrice=_labelTargetPrevPrice - In the implementation block
@property (nonatomic,retain) AFAdSDKPriceStrokeView * viewTargetPrevPriceStroke;              //@synthesize viewTargetPrevPriceStroke=_viewTargetPrevPriceStroke - In the implementation block
@property (nonatomic,retain) UIButton * buttonDownload;                                       //@synthesize buttonDownload=_buttonDownload - In the implementation block
@property (nonatomic,retain) CAGradientLayer * buttonDownloadBackground;                      //@synthesize buttonDownloadBackground=_buttonDownloadBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)specialDismissWithAnimation:(BOOL)arg1 goingToBackground:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_refreshLayout;
-(BOOL)isIpad;
-(void)setIsIpad:(BOOL)arg1 ;
-(BOOL)isiPhone6;
-(void)setIsiPhone6:(BOOL)arg1 ;
-(BOOL)wasStatusBarDisplayed;
-(void)setWasStatusBarDisplayed:(BOOL)arg1 ;
-(BOOL)didConfigure;
-(void)setDidConfigure:(BOOL)arg1 ;
-(BOOL)didAnimate;
-(void)setDidAnimate:(BOOL)arg1 ;
-(void)_downloadButtonTouchChanged;
-(void)_targetScreenshotHandlePan:(id)arg1 ;
-(void)_updateDataOnceViewIsLoaded;
-(void)_refreshSubComponentsPositionForParallax;
-(void)_proceedAnimation;
-(void)_refreshMainComponentsPositionToScrollFaster;
-(BOOL)isSmalliPhone;
-(void)setIsSmalliPhone:(BOOL)arg1 ;
-(UIScrollView *)scrollviewWrapper;
-(void)setScrollviewWrapper:(UIScrollView *)arg1 ;
-(double)initialPositionHost;
-(void)setInitialPositionHost:(double)arg1 ;
-(double)initialPositionTarget;
-(void)setInitialPositionTarget:(double)arg1 ;
-(BOOL)shouldHelpMainComponentsToScrollFaster;
-(void)setShouldHelpMainComponentsToScrollFaster:(BOOL)arg1 ;
-(UIView *)viewHostContainer;
-(void)setViewHostContainer:(UIView *)arg1 ;
-(UIView *)imageHostScreenshot;
-(void)setImageHostScreenshot:(UIView *)arg1 ;
-(AFAsyncImageView *)imageHostIcon;
-(void)setImageHostIcon:(AFAsyncImageView *)arg1 ;
-(UILabel *)labelHostTitle;
-(void)setLabelHostTitle:(UILabel *)arg1 ;
-(AFSDKAdUraMakiBackView *)viewHostBack;
-(void)setViewHostBack:(AFSDKAdUraMakiBackView *)arg1 ;
-(CGRect)imageHostScreenshotInitialFrame;
-(void)setImageHostScreenshotInitialFrame:(CGRect)arg1 ;
-(UIView *)viewTargetContainer;
-(void)setViewTargetContainer:(UIView *)arg1 ;
-(AFAsyncImageView *)imageTargetScreenshot;
-(void)setImageTargetScreenshot:(AFAsyncImageView *)arg1 ;
-(AFAsyncImageView *)imageTargetIcon;
-(void)setImageTargetIcon:(AFAsyncImageView *)arg1 ;
-(UILabel *)labelTargetTitle;
-(void)setLabelTargetTitle:(UILabel *)arg1 ;
-(UILabel *)labelTargetTagline;
-(void)setLabelTargetTagline:(UILabel *)arg1 ;
-(AFAdSDKAdBadgeView *)viewTargetPromoted;
-(void)setViewTargetPromoted:(AFAdSDKAdBadgeView *)arg1 ;
-(AFAdSDKFlatLabelView *)viewTargetPrice;
-(void)setViewTargetPrice:(AFAdSDKFlatLabelView *)arg1 ;
-(UILabel *)labelTargetPrevPrice;
-(void)setLabelTargetPrevPrice:(UILabel *)arg1 ;
-(AFAdSDKPriceStrokeView *)viewTargetPrevPriceStroke;
-(void)setViewTargetPrevPriceStroke:(AFAdSDKPriceStrokeView *)arg1 ;
-(UIButton *)buttonDownload;
-(void)setButtonDownload:(UIButton *)arg1 ;
-(CAGradientLayer *)buttonDownloadBackground;
-(void)setButtonDownloadBackground:(CAGradientLayer *)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
@end

