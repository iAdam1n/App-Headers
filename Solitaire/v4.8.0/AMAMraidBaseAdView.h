/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>
#import <SolitaireFree/AMMRVideoPlayerManagerDelegate.h>
#import <SolitaireFree/AMMRCalendarManagerDelegate.h>
#import <SolitaireFree/AMMRPictureManagerDelegate.h>

@protocol AMAMraidBaseAdViewDelegate;
@class UIWebView, UIButton, AMMRAdViewBrowsingController, AMMRVideoPlayerManager, AMMRCalendarManager, AMMRPictureManager, NSString;

@interface AMAMraidBaseAdView : UIView <UIWebViewDelegate, AMMRVideoPlayerManagerDelegate, AMMRCalendarManagerDelegate, AMMRPictureManagerDelegate> {

	BOOL _isLoading;
	BOOL _allowsCloseButton;
	BOOL _usesCustomCloseButton;
	id<AMAMraidBaseAdViewDelegate> _delegate;
	UIWebView* _webView;
	UIButton* _closeButton;
	AMMRAdViewBrowsingController* _browsingController;
	AMMRVideoPlayerManager* _videoPlayerManager;
	AMMRCalendarManager* _calendarManager;
	AMMRPictureManager* _pictureManager;

}

@property (assign,nonatomic,__weak) id<AMAMraidBaseAdViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                            //@synthesize webView=_webView - In the implementation block
@property (assign) BOOL isLoading;                                                           //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) BOOL allowsCloseButton;                                         //@synthesize allowsCloseButton=_allowsCloseButton - In the implementation block
@property (assign,nonatomic) BOOL usesCustomCloseButton;                                     //@synthesize usesCustomCloseButton=_usesCustomCloseButton - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                         //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) AMMRAdViewBrowsingController * browsingController;              //@synthesize browsingController=_browsingController - In the implementation block
@property (nonatomic,retain) AMMRVideoPlayerManager * videoPlayerManager;                    //@synthesize videoPlayerManager=_videoPlayerManager - In the implementation block
@property (nonatomic,retain) AMMRCalendarManager * calendarManager;                          //@synthesize calendarManager=_calendarManager - In the implementation block
@property (nonatomic,retain) AMMRPictureManager * pictureManager;                            //@synthesize pictureManager=_pictureManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutCloseButton;
-(id)adManager;
-(id)viewControllerForPresentingModalView;
-(id)executeJavascript:(id)arg1 ;
-(id)executeJavascript:(id)arg1 withVarArgs:(char*)arg2 ;
-(void)fireReadyEvent;
-(void)setUsesCustomCloseButton:(BOOL)arg1 ;
-(AMMRAdViewBrowsingController *)browsingController;
-(void)fireNativeCommandCompleteEvent:(id)arg1 ;
-(BOOL)tryProcessingMraidURLStringAsCommand:(id)arg1 ;
-(void)fireChangeEventForProperty:(id)arg1 ;
-(void)didClickOnPrivateURL:(id)arg1 ;
-(void)fireChangeEventsForProperties:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(void)willPresentModalView;
-(void)didDismissModalView;
-(BOOL)tryProcessingPrivateURLStringInMraidContext:(id)arg1 ;
-(id)viewControllerForPresentingVideoPlayer;
-(AMMRCalendarManager *)calendarManager;
-(AMMRVideoPlayerManager *)videoPlayerManager;
-(AMMRPictureManager *)pictureManager;
-(void)removeCloseButtonAndTappableArea;
-(BOOL)usesCustomCloseButton;
-(BOOL)allowsCloseButton;
-(id)HTMLWithJavaScriptBridge:(id)arg1 ;
-(BOOL)tryProcessingMraidCommand:(id)arg1 parameters:(id)arg2 ;
-(BOOL)processPrivateURL:(id)arg1 ;
-(BOOL)tryProcessingMraidURLStringAsPrivateCommand:(id)arg1 ;
-(void)convertFragmentToFullPayload:(id)arg1 ;
-(void)setAllowsCloseButton:(BOOL)arg1 ;
-(void)fireErrorEventForAction:(id)arg1 withMessage:(id)arg2 ;
-(void)setBrowsingController:(AMMRAdViewBrowsingController *)arg1 ;
-(void)setVideoPlayerManager:(AMMRVideoPlayerManager *)arg1 ;
-(void)setCalendarManager:(AMMRCalendarManager *)arg1 ;
-(void)setPictureManager:(AMMRPictureManager *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<AMAMraidBaseAdViewDelegate>)arg1 ;
-(void)dealloc;
-(id<AMAMraidBaseAdViewDelegate>)delegate;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)isLoading;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)setIsLoading:(BOOL)arg1 ;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
@end
