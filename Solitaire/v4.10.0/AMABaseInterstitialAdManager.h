/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/AMABaseAdManager.h>
#import <SolitaireFree/AMAWebRequestDelegate.h>

@class NSString;

@interface AMABaseInterstitialAdManager : AMABaseAdManager <AMAWebRequestDelegate> {

	BOOL _isDisplayed;
	double _expirationDateTime;

}

@property (assign,nonatomic) double expirationDateTime;              //@synthesize expirationDateTime=_expirationDateTime - In the implementation block
@property (assign,nonatomic) BOOL isDisplayed;                       //@synthesize isDisplayed=_isDisplayed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)responseReceived:(id)arg1 ;
-(void)errorReceived:(id)arg1 withStatusCode:(long long)arg2 ;
-(void)recordMetricsOnLoadAttempt;
-(BOOL)canLoadInterstitial;
-(void)setExpirationDateTime:(double)arg1 ;
-(void)didReceiveAdHtml:(id)arg1 withInstrPixel:(id)arg2 andBridgesEnabled:(id)arg3 ;
-(double)expirationDateTime;
-(void)handleInvalidAdContent:(id)arg1 ;
-(void)handleValidAdContent:(id)arg1 ;
-(void)loadAdDidFinishWithWebRequest:(id)arg1 ;
-(void)loadAdDidFailWithWebRequest:(id)arg1 ;
-(void)loadAdWithRequest:(id)arg1 ;
-(BOOL)isDisplayed;
-(void)setIsDisplayed:(BOOL)arg1 ;
-(void)presentFromViewController:(id)arg1 ;
@end
