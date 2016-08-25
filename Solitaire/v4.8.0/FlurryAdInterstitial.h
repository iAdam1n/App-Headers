/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/FlurryAdDelegate.h>

@protocol FlurryAdInterstitialDelegate;
@class NSString, FlurryAdTargeting, FlurryAdManager;

@interface FlurryAdInterstitial : NSObject <FlurryAdDelegate> {

	NSString* _space;
	FlurryAdTargeting* _targeting;
	id<FlurryAdInterstitialDelegate> _adDelegate;
	FlurryAdManager* _adManager;

}

@property (nonatomic,copy) NSString * space;                                                  //@synthesize space=_space - In the implementation block
@property (nonatomic,retain) FlurryAdTargeting * targeting;                                   //@synthesize targeting=_targeting - In the implementation block
@property (assign,nonatomic,__weak) id<FlurryAdInterstitialDelegate> adDelegate;              //@synthesize adDelegate=_adDelegate - In the implementation block
@property (nonatomic,readonly) BOOL ready; 
@property (nonatomic,retain) FlurryAdManager * adManager;                                     //@synthesize adManager=_adManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FlurryAdManager *)adManager;
-(void)setAdManager:(FlurryAdManager *)arg1 ;
-(void)setTargeting:(FlurryAdTargeting *)arg1 ;
-(FlurryAdTargeting *)targeting;
-(id)initWithSpace:(id)arg1 ;
-(void)setAdDelegate:(id<FlurryAdInterstitialDelegate>)arg1 ;
-(void)fetchAd;
-(void)presentWithViewController:(id)arg1 ;
-(id<FlurryAdInterstitialDelegate>)adDelegate;
-(void)spaceDidReceiveAd:(id)arg1 ;
-(void)spaceDidFailToRender:(id)arg1 error:(id)arg2 ;
-(BOOL)spaceShouldDisplay:(id)arg1 interstitial:(BOOL)arg2 ;
-(void)spaceDidRender:(id)arg1 interstitial:(BOOL)arg2 ;
-(void)spaceDidFailToReceiveAd:(id)arg1 error:(id)arg2 ;
-(void)spaceWillLeaveApplication:(id)arg1 ;
-(void)spaceWillExpand:(id)arg1 ;
-(void)spaceDidCollapse:(id)arg1 ;
-(void)spaceWillDismiss:(id)arg1 interstitial:(BOOL)arg2 ;
-(void)spaceWillCollapse:(id)arg1 ;
-(void)spaceDidDismiss:(id)arg1 interstitial:(BOOL)arg2 ;
-(void)spaceDidReceiveClick:(id)arg1 ;
-(void)spaceClickActionDidFail:(id)arg1 error:(id)arg2 ;
-(void)videoDidFinish:(id)arg1 ;
-(void)reportFailedToFetch;
-(void)dealloc;
-(BOOL)ready;
-(void)setSpace:(NSString *)arg1 ;
-(NSString *)space;
@end

