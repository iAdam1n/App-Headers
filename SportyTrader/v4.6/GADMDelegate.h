/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GADMDelegate <NSObject>
@required
-(id)viewControllerForPresentingModalView;
-(void)resetTimingAdapters;
-(void)startTimingAdapter;
-(void)endTimingAdapterWithExitCode:(long long)arg1;
-(id)adapterDurationsParameter;
-(id)adapterExitCodesParameter;
-(void)gadmDidFailToReceiveAdWithError:(id)arg1;
-(void)gadmDidReceiveAd:(id)arg1;
-(void)gadmDidReceiveInterstitial:(id)arg1;
-(void)gadmBannerAdRefreshFailedWithError:(id)arg1;
-(id)childDirectedTreatment;
-(id)requestAgent;
-(void)gadmWillPresentFullScreenModal;
-(void)gadmWillDismissFullScreenModal;
-(void)gadmDidDismissFullScreenModal;
-(void)gadmWillPresentInterstitial;
-(void)gadmWillDismissInterstitial;
-(void)gadmDidDismissInterstitial;
-(void)gadmWillLeaveApplication;
-(BOOL)gadmTestMode;
-(id)networkExtrasFor:(Class)arg1;
-(long long)userGender;
-(id)userBirthday;
-(id)userKeywords;
-(id)userLocation;

@end
