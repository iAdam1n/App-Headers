/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPRewardedVideoAdManagerDelegate <NSObject>
@required
-(void)rewardedVideoDidLoadForAdManager:(id)arg1;
-(void)rewardedVideoDidFailToLoadForAdManager:(id)arg1 error:(id)arg2;
-(void)rewardedVideoDidExpireForAdManager:(id)arg1;
-(void)rewardedVideoDidFailToPlayForAdManager:(id)arg1 error:(id)arg2;
-(void)rewardedVideoWillAppearForAdManager:(id)arg1;
-(void)rewardedVideoDidAppearForAdManager:(id)arg1;
-(void)rewardedVideoWillDisappearForAdManager:(id)arg1;
-(void)rewardedVideoDidDisappearForAdManager:(id)arg1;
-(void)rewardedVideoDidReceiveTapEventForAdManager:(id)arg1;
-(void)rewardedVideoWillLeaveApplicationForAdManager:(id)arg1;
-(void)rewardedVideoShouldRewardUserForAdManager:(id)arg1 reward:(id)arg2;

@end
