/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MPInterstitialViewController.h>
#import <SolitaireFree/MPAdWebViewAgentDelegate.h>

@protocol MPInterstitialViewControllerDelegate;
@class MPAdWebViewAgent, MPAdWebView, NSString;

@interface MPHTMLInterstitialViewController : MPInterstitialViewController <MPAdWebViewAgentDelegate> {

	id<MPInterstitialViewControllerDelegate> _delegate;
	MPAdWebViewAgent* _backingViewAgent;
	MPAdWebView* _backingView;

}

@property (nonatomic,retain) MPAdWebView * backingView;                        //@synthesize backingView=_backingView - In the implementation block
@property (nonatomic,retain) MPAdWebViewAgent * backingViewAgent;              //@synthesize backingViewAgent=_backingViewAgent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForPresentingModalView;
-(id)adUnitId;
-(void)adDidClose:(id)arg1 ;
-(MPAdWebViewAgent *)backingViewAgent;
-(MPAdWebView *)backingView;
-(void)setBackingViewAgent:(MPAdWebViewAgent *)arg1 ;
-(void)setBackingView:(MPAdWebView *)arg1 ;
-(void)loadConfiguration:(id)arg1 ;
-(void)adDidFinishLoadingAd:(id)arg1 ;
-(void)adDidFailToLoadAd:(id)arg1 ;
-(void)adActionWillBegin:(id)arg1 ;
-(void)adActionWillLeaveApplication:(id)arg1 ;
-(void)adActionDidFinish:(id)arg1 ;
-(void)willPresentInterstitial;
-(void)didPresentInterstitial;
-(void)willDismissInterstitial;
-(void)didDismissInterstitial;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)viewDidLoad;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)location;
@end

