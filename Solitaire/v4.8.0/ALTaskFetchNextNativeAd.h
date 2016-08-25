/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/ALTaskFetchNextAd.h>

@protocol ALNativeAdLoadDelegate;
@interface ALTaskFetchNextNativeAd : ALTaskFetchNextAd {

	unsigned long long _adsToLoadCount;
	id<ALNativeAdLoadDelegate> _nativeAdLoadDelegate;

}

@property (assign,nonatomic) unsigned long long adsToLoadCount;                            //@synthesize adsToLoadCount=_adsToLoadCount - In the implementation block
@property (nonatomic,retain) id<ALNativeAdLoadDelegate> nativeAdLoadDelegate;              //@synthesize nativeAdLoadDelegate=_nativeAdLoadDelegate - In the implementation block
-(void)setNativeAdLoadDelegate:(id<ALNativeAdLoadDelegate>)arg1 ;
-(id<ALNativeAdLoadDelegate>)nativeAdLoadDelegate;
-(void)populateTimingData:(id)arg1 ;
-(void)populateTypeSpecificParameters:(id)arg1 ;
-(id)createAdEndpointBase;
-(void)notifyLoadDelegateOfFailureWithResponseCode:(long long)arg1 ;
-(id)createRenderTaskWithResponse:(id)arg1 ;
-(void)setAdsToLoadCount:(unsigned long long)arg1 ;
-(unsigned long long)adsToLoadCount;
-(id)initWithSdk:(id)arg1 adsToLoadCount:(unsigned long long)arg2 nativeAdLoadDelegate:(id)arg3 ;
@end

