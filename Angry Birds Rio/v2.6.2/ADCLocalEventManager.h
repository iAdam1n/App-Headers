/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADCLocalEventManager : NSObject
+(void)onAdStartAttempt:(id)arg1 forZone:(id)arg2 wantedReward:(BOOL)arg3 ;
+(void)onAdCouldNotPlay:(id)arg1 forZone:(id)arg2 wantedReward:(BOOL)arg3 ;
+(void)onAdStarted:(id)arg1 forZone:(id)arg2 forAd:(id)arg3 wantedReward:(BOOL)arg4 ;
+(void)onAdEnded:(id)arg1 forZone:(id)arg2 forAd:(id)arg3 didReward:(BOOL)arg4 ;
+(void)onV4VCRewarded:(id)arg1 ;
+(void)onV4VCNotRewarded:(id)arg1 ;
+(void)onAdsReady:(id)arg1 ;
+(void)onAdsNotReady:(id)arg1 ;
+(void)onAdsNotFilled:(id)arg1 ;
@end
