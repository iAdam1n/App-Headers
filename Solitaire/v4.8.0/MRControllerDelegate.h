/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRControllerDelegate <NSObject>
@optional
-(void)adDidLoad:(id)arg1;
-(void)adDidFailToLoad:(id)arg1;
-(void)adWillClose:(id)arg1;
-(void)adDidClose:(id)arg1;
-(void)rewardedVideoEnded;

@required
-(id)adConfiguration;
-(id)viewControllerForPresentingModalView;
-(id)adUnitId;
-(void)appShouldSuspendForAd:(id)arg1;
-(void)appShouldResumeFromAd:(id)arg1;
-(id)location;

@end

