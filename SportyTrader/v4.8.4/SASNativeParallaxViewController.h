/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SASNativeParallaxViewDelegate.h>

@protocol SASNativeParallaxViewControllerDelegate;
@class SASAdViewController, SASNativeParallaxView, NSString;

@interface SASNativeParallaxViewController : NSObject <SASNativeParallaxViewDelegate> {

	SASAdViewController* _adViewController;
	id<SASNativeParallaxViewControllerDelegate> _delegate;
	SASNativeParallaxView* _parallaxView;

}

@property (assign,nonatomic,__weak) SASAdViewController * adViewController;                            //@synthesize adViewController=_adViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SASNativeParallaxViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SASNativeParallaxView * parallaxView;                                     //@synthesize parallaxView=_parallaxView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SASAdViewController *)adViewController;
-(void)setAdViewController:(SASAdViewController *)arg1 ;
-(void)setParallaxView:(SASNativeParallaxView *)arg1 ;
-(BOOL)isRequestAnExternalRedirect:(id)arg1 navigationType:(unsigned long long)arg2 baseURL:(id)arg3 ;
-(void)visibilityChanged:(BOOL)arg1 ;
-(void)nativeParallaxViewClicked:(id)arg1 ;
-(void)nativeParallaxViewDidLoadContent:(id)arg1 ;
-(void)nativeParallaxView:(id)arg1 didFailToLoadContentWithError:(id)arg2 ;
-(BOOL)nativeParallaxView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(unsigned long long)arg3 baseURL:(id)arg4 ;
-(void)adViewFrameChanged;
-(id)initWithController:(id)arg1 delegate:(id)arg2 ;
-(void)setDelegate:(id<SASNativeParallaxViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SASNativeParallaxViewControllerDelegate>)delegate;
-(void)stopLoading;
-(SASNativeParallaxView *)parallaxView;
-(void)loadAd:(id)arg1 ;
@end
