/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SolitaireFree/IFlurryAdViewController.h>

@protocol IFlurryAd;
@class UIView, FlurryAdFrame, NSString, UIActivityIndicatorView;

@interface FlurryAdWindowBasedViewController : UIViewController <IFlurryAdViewController> {

	id<IFlurryAd> _ad;
	FlurryAdFrame* _adFrame;
	UIView* _adView;
	NSString* _previousOrientation;
	long long _adOrientation;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) NSString * previousOrientation;                 //@synthesize previousOrientation=_previousOrientation - In the implementation block
@property (nonatomic,retain) FlurryAdFrame * adFrame;                        //@synthesize adFrame=_adFrame - In the implementation block
@property (assign,nonatomic) long long adOrientation;                        //@synthesize adOrientation=_adOrientation - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<IFlurryAd> ad;                               //@synthesize ad=_ad - In the implementation block
@property (nonatomic,retain) id<IFlurryNativeAd> nativeAd; 
@property (nonatomic,retain) UIView * adView;                                //@synthesize adView=_adView - In the implementation block
-(void)loadAd;
-(UIView *)adView;
-(void)setAdView:(UIView *)arg1 ;
-(void)setAd:(id<IFlurryAd>)arg1 ;
-(id)initWithAd:(id)arg1 ;
-(FlurryAdFrame *)adFrame;
-(void)setAdFrame:(FlurryAdFrame *)arg1 ;
-(void)removeWindow;
-(void)setAdOrientation:(long long)arg1 ;
-(void)createWindow;
-(void)didRotateToInterfaceOrientation;
-(void)adjustToOrientation:(long long)arg1 ;
-(void)adjustToCurrentStatusBarOrientation;
-(long long)adOrientation;
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id<IFlurryAd>)ad;
-(void)loadAd:(id)arg1 ;
-(void)setPreviousOrientation:(NSString *)arg1 ;
-(NSString *)previousOrientation;
@end
