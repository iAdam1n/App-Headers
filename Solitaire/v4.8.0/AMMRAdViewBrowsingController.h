/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/AMMPAdBrowserControllerDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class AMAMraidBaseAdView, UIViewController, AMMPAdBrowserController, NSString;

@interface AMMRAdViewBrowsingController : NSObject <AMMPAdBrowserControllerDelegate, SKStoreProductViewControllerDelegate> {

	AMAMraidBaseAdView* _adView;
	UIViewController* _viewControllerForPresentingModalView;
	unsigned long long _currentState;
	AMMPAdBrowserController* _browserController;

}

@property (assign,nonatomic,__weak) AMAMraidBaseAdView * adView;                                          //@synthesize adView=_adView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewControllerForPresentingModalView;              //@synthesize viewControllerForPresentingModalView=_viewControllerForPresentingModalView - In the implementation block
@property (assign,nonatomic) unsigned long long currentState;                                             //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) AMMPAdBrowserController * browserController;                                 //@synthesize browserController=_browserController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdView:(AMAMraidBaseAdView *)arg1 ;
-(UIViewController *)viewControllerForPresentingModalView;
-(BOOL)openIntentUrl:(id)arg1 useExternalBrowser:(BOOL)arg2 ;
-(void)dismissBrowserController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissBrowserController:(id)arg1 ;
-(void)dismissBrowserController:(id)arg1 animated:(BOOL)arg2 openPrivateURL:(id)arg3 ;
-(void)setBrowserController:(AMMPAdBrowserController *)arg1 ;
-(void)setViewControllerForPresentingModalView:(UIViewController *)arg1 ;
-(AMMPAdBrowserController *)browserController;
-(BOOL)openBrowserWithUrlString:(id)arg1 enableBack:(BOOL)arg2 enableForward:(BOOL)arg3 enableRefresh:(BOOL)arg4 useExternalBrowser:(BOOL)arg5 ;
-(void)dealloc;
-(unsigned long long)currentState;
-(void)setCurrentState:(unsigned long long)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)initWithAdView:(id)arg1 ;
-(AMAMraidBaseAdView *)adView;
@end

