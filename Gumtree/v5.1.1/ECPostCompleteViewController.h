/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>
#import <Gumtree/ECAdvertisingProviderDelegate.h>

@class ECAdvertisingProvider, ECAd, NSString;

@interface ECPostCompleteViewController : ECBaseViewController <ECAdvertisingProviderDelegate> {

	BOOL _isNewAd;
	BOOL _canActivateWithTelecaptcha;
	BOOL _didCallApptentiveForCurrentPost;
	/*^block*/id _completionHandler;
	/*^block*/id _trackingHandlerHandler;
	unsigned long long _screenChoice;
	ECAdvertisingProvider* _advertisingProvider;
	ECAd* _ad;

}

@property (assign) BOOL didCallApptentiveForCurrentPost;                               //@synthesize didCallApptentiveForCurrentPost=_didCallApptentiveForCurrentPost - In the implementation block
@property (readonly) unsigned long long screenChoice;                                  //@synthesize screenChoice=_screenChoice - In the implementation block
@property (nonatomic,retain) ECAdvertisingProvider * advertisingProvider;              //@synthesize advertisingProvider=_advertisingProvider - In the implementation block
@property (nonatomic,retain) ECAd * ad;                                                //@synthesize ad=_ad - In the implementation block
@property (assign,nonatomic) BOOL isNewAd;                                             //@synthesize isNewAd=_isNewAd - In the implementation block
@property (assign,nonatomic) BOOL canActivateWithTelecaptcha;                          //@synthesize canActivateWithTelecaptcha=_canActivateWithTelecaptcha - In the implementation block
@property (nonatomic,copy) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id trackingHandlerHandler;                                  //@synthesize trackingHandlerHandler=_trackingHandlerHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ECAdvertisingProvider *)advertisingProvider;
-(void)adProvider:(id)arg1 didReceiveAd:(id)arg2 forBannerType:(unsigned long long)arg3 atPosition:(unsigned long long)arg4 withError:(id)arg5 ;
-(void)setAdvertisingProvider:(ECAdvertisingProvider *)arg1 ;
-(void)setAd:(ECAd *)arg1 ;
-(void)trackPageView;
-(void)updateEnable;
-(void)setTrackingHandlerHandler:(id)arg1 ;
-(id)initWithFeaturesResult:(unsigned long long)arg1 ad:(id)arg2 error:(id)arg3 ;
-(void)setCanActivateWithTelecaptcha:(BOOL)arg1 ;
-(void)setIsNewAd:(BOOL)arg1 ;
-(BOOL)canActivateWithTelecaptcha;
-(unsigned long long)screenChoice;
-(BOOL)isNewAd;
-(id)postCompleteView;
-(void)doneAction:(id)arg1 ;
-(BOOL)didCallApptentiveForCurrentPost;
-(void)setDidCallApptentiveForCurrentPost:(BOOL)arg1 ;
-(void)handleApptentive;
-(void)backgroundNotification:(id)arg1 ;
-(id)trackingHandlerHandler;
-(id)initWithFeaturesResult:(unsigned long long)arg1 error:(id)arg2 ;
-(void)delayedAdAction:(id)arg1 ;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateLabels;
-(ECAd *)ad;
@end

