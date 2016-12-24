/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/ASCustomInterstitialAdProvider.h>

@class NSString;

@interface ASChartboostInterstitialAdProvider : ASCustomInterstitialAdProvider {

	BOOL _failedToReceiveAd;
	Class _chartboost;
	NSString* _cbLocation;

}

@property (nonatomic,retain) Class chartboost;                    //@synthesize chartboost=_chartboost - In the implementation block
@property (nonatomic,copy) NSString * cbLocation;                 //@synthesize cbLocation=_cbLocation - In the implementation block
@property (assign,nonatomic) BOOL failedToReceiveAd;              //@synthesize failedToReceiveAd=_failedToReceiveAd - In the implementation block
-(void)initializePartnerAd:(id)arg1 ;
-(BOOL)hasPartnerAdInitialized;
-(BOOL)hasPartnerAdFailedToLoad;
-(void)loadPartnerAd:(id)arg1 ;
-(BOOL)hasPartnerAdLoaded;
-(BOOL)hasPartnerAdFailedToInitialize;
-(BOOL)failedToReceiveAd;
-(void)showPartnerAd:(id)arg1 ;
-(void)setChartboost:(Class)arg1 ;
-(void)setCbLocation:(NSString *)arg1 ;
-(Class)chartboost;
-(NSString *)cbLocation;
-(void)setFailedToReceiveAd:(BOOL)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
@end
