/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMBannerDelegate <NSObject>
@optional
-(void)bannerDidReceiveAd:(id)arg1;
-(void)banner:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
-(void)bannerDidInteract:(id)arg1 withParams:(id)arg2;
-(void)bannerWillPresentScreen:(id)arg1;
-(void)bannerWillDismissScreen:(id)arg1;
-(void)bannerDidDismissScreen:(id)arg1;
-(void)bannerWillLeaveApplication:(id)arg1;

@end
