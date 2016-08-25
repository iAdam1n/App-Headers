/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FlurryAdManagerDelegate <NSObject>
@required
+(id)backgroundWorkerThread;
-(void)adsAvailableForSpace:(id)arg1 viewType:(int)arg2 viewContainer:(id)arg3 viewController:(id)arg4 timeout:(long long)arg5;
-(void)adsNotAvailableForSpace:(id)arg1 viewContainer:(id)arg2 viewController:(id)arg3 timeout:(long long)arg4 error:(id)arg5;
-(void)adsAvailableForSpaceWithParams:(id)arg1;
-(void)csrtbAdsNotAvailableForSpace:(id)arg1 viewContainer:(id)arg2 viewController:(id)arg3 timeout:(long long)arg4 stubAd:(id)arg5;

@end

