/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/GADViewController.h>

@class NSURL, NSString, GADAdView, UIViewController, GADAdAppAdViewDelegate, UIButton;

@interface GADAdAppViewController : GADViewController {

	BOOL _viewHasAppeared;
	NSURL* _URLToLoad;
	NSString* _HTMLToLoad;
	NSURL* _HTMLBaseURLToLoad;
	NSString* _originalAudioSessionCategory;
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
-(GADAdAppAdViewDelegate *)adViewDelegate;
-(void)setAdViewDelegate:(GADAdAppAdViewDelegate *)arg1 ;
-(void)setAdView:(GADAdView *)arg1 ;
-(void)setUseCustomClose:(BOOL)arg1 ;
-(BOOL)useCustomClose;
-(void)setCustomClosePosition:(long long)arg1 ;
-(long long)customClosePosition;
-(void)relinquishScreenWithCompletion:(/*^block*/id)arg1 ;
-(void)updateCloseButtonVisibilityAndImage;
-(void)positionMRAIDCloseButton;
-(void)configureView;
-(BOOL)shouldDismissOnApplicationEnteringForeground;
-(void)loadHTML:(id)arg1 baseURL:(id)arg2 ;
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
