/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FlurryAdDelegate <NSObject>
@optional
-(void)spaceDidReceiveAd:(id)arg1;
-(void)spaceDidFailToRender:(id)arg1 error:(id)arg2;
-(BOOL)spaceShouldDisplay:(id)arg1 forType:(int)arg2;
-(BOOL)spaceShouldDisplay:(id)arg1 interstitial:(BOOL)arg2;
-(void)spaceDidRender:(id)arg1 interstitial:(BOOL)arg2;
-(void)spaceDidFailToReceiveAd:(id)arg1 error:(id)arg2;
-(id)appSpotRootViewController;
-(void)spaceWillLeaveApplication:(id)arg1;
-(void)spaceWillExpand:(id)arg1;
-(void)spaceDidCollapse:(id)arg1;
-(void)spaceWillDismiss:(id)arg1 interstitial:(BOOL)arg2;
-(void)spaceWillCollapse:(id)arg1;
-(void)spaceDidDismiss:(id)arg1 interstitial:(BOOL)arg2;
-(void)spaceDidReceiveClick:(id)arg1;
-(void)spaceClickActionDidFail:(id)arg1 error:(id)arg2;
-(void)videoDidFinish:(id)arg1;
-(void)videoDidNotFinish:(id)arg1;
-(id)appSpotMillennialAppKey;
-(id)appSpotMillennialInterstitalAppKey;
-(id)appSpotInMobiAppKey;
-(id)appSpotAdMobPublisherID;
-(id)appSpotMobclixApplicationID;
-(id)appSpotJumptapPublisherID;
-(id)appSpotJumptapSiteID;
-(id)appSpotJumptapBannerAdSpotID;
-(id)appSpotJumptapLeaderboardAdSpotID;
-(id)appSpotJumptapMediumRectangleAdSpotID;
-(BOOL)appSpotAccelerometerEnabled;
-(id)appSpotFANAppPlacementID;

@end

