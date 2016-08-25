/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, MNGBannerViewDelegate;
@class NSDictionary, NSObject, UIWebView, MNGMraidController, MNGAdLoader, UIViewController, NSString, CLLocation;

@interface MNGBannerView : UIView <UIWebViewDelegate, UIGestureRecognizerDelegate> {

	NSDictionary* _jsonObject;
	BOOL _eventViewWasDone;
	long long _viewConditionsStatus;
	NSObject*<OS_dispatch_queue> _queueSeekForViewConditions;
	NSObject*<OS_dispatch_source> _sourceSeekForViewConditions;
	BOOL _eventViewCanBeDone;
	long long refresh;
	UIWebView* _webView;
	MNGMraidController* mraidController;
	BOOL isMraid;
	MNGAdLoader* loader;
	id<MNGBannerViewDelegate> _delegate;
	UIViewController* _viewController;
	NSString* _publisherId;
	NSString* _age;
	NSString* _zip;
	CLLocation* _location;
	NSString* _gender;
	CGSize _adSize;

}

@property (assign,nonatomic,__weak) id<MNGBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;               //@synthesize viewController=_viewController - In the implementation block
@property (retain) NSString * publisherId;                                           //@synthesize publisherId=_publisherId - In the implementation block
@property (retain) NSString * age;                                                   //@synthesize age=_age - In the implementation block
@property (retain) NSString * zip;                                                   //@synthesize zip=_zip - In the implementation block
@property (retain) CLLocation * location;                                            //@synthesize location=_location - In the implementation block
@property (retain) NSString * gender;                                                //@synthesize gender=_gender - In the implementation block
@property (assign) CGSize adSize;                                                    //@synthesize adSize=_adSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setDebugEnabled:(BOOL)arg1 ;
-(void)setPublisherId:(NSString *)arg1 ;
-(NSString *)publisherId;
-(void)loadAd;
-(void)saveSeenAdId:(id)arg1 ;
-(void)_checkIfShouldSeekForTruth;
-(void)_seekForViewConditions;
-(BOOL)_isViewAtLeastPartiallyVisible;
-(void)_viewWasValidatedAndCanBeDone;
-(void)recordUserInteraction;
-(void)didTapWebView:(id)arg1 ;
-(void)adWasClicked;
-(CGSize)adSize;
-(void)setAdSize:(CGSize)arg1 ;
-(void)setDelegate:(id<MNGBannerViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(id<MNGBannerViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(CLLocation *)location;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)_startTimer;
-(void)_stopTimer;
-(NSString *)zip;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(void)setAge:(NSString *)arg1 ;
-(NSString *)age;
-(void)setZip:(NSString *)arg1 ;
@end

