/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/GADViewController.h>

@class NSURL, NSString, GADAdView, UIViewController, GADAdAppAdViewDelegate, UIButton;

@interface GADAdAppViewController : GADViewController {

	BOOL _viewHasAppeared;
	NSURL* _URLToLoad;
	NSString* _HTMLToLoad;
	NSURL* _HTMLBaseURLToLoad;
	BOOL _useCustomClose;
	long long _customClosePosition;
	GADAdView* _adView;
	UIViewController* _hostViewController;
	GADAdAppAdViewDelegate* _adViewDelegate;
	UIButton* _closeButton;

}

@property (assign,nonatomic) BOOL useCustomClose;                                  //@synthesize useCustomClose=_useCustomClose - In the implementation block
@property (assign,nonatomic) long long customClosePosition;                        //@synthesize customClosePosition=_customClosePosition - In the implementation block
@property (nonatomic,retain) GADAdView * adView;                                   //@synthesize adView=_adView - In the implementation block
@property (nonatomic,readonly) UIViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,retain) GADAdAppAdViewDelegate * adViewDelegate;              //@synthesize adViewDelegate=_adViewDelegate - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                               //@synthesize closeButton=_closeButton - In the implementation block
-(void)setAdView:(GADAdView *)arg1 ;
-(void)setAdViewDelegate:(GADAdAppAdViewDelegate *)arg1 ;
-(GADAdAppAdViewDelegate *)adViewDelegate;
-(void)updateCloseButtonVisibilityAndImage;
-(void)positionMRAIDCloseButton;
-(void)configureView;
-(BOOL)useCustomClose;
-(BOOL)shouldDismissOnApplicationEnteringForeground;
-(void)setUseCustomClose:(BOOL)arg1 ;
-(void)loadHTML:(id)arg1 baseURL:(id)arg2 ;
-(long long)customClosePosition;
-(void)setCustomClosePosition:(long long)arg1 ;
-(void)viewChangedToOrientation:(long long)arg1 ;
-(void)load:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)isLoaded;
-(UIViewController *)hostViewController;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(id)initWithAdView:(id)arg1 ;
-(GADAdView *)adView;
-(void)closeButtonPressed:(id)arg1 ;
@end

