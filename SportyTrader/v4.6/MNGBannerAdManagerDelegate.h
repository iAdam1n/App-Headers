/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol MNGBannerAdManagerDelegate <NSObject>
@required
-(id)viewControllerForPresentingModalView;
-(id)bannerDelegate;
-(id)adUnitId;
-(void)managerDidFailToLoadAd;
-(int)allowedNativeAdsOrientation;
-(void)managerDidLoadAd:(id)arg1;
-(void)invalidateContentView;
-(void)userActionDidFinish;
-(void)userActionWillBegin;
-(void)userWillLeaveApplication;
-(BOOL)ignoresAutorefresh;
-(id)location;
-(id)banner;
-(id)keywords;
-(CGSize*)containerSize;
-(BOOL)isTesting;

@end

