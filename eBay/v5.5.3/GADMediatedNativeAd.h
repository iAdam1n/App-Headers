/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:16 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/GADMediatedAd.h>

@protocol GADMediatedNativeAd;
@class UIView;

@interface GADMediatedNativeAd : GADMediatedAd {

	UIView* _renderedView;
	BOOL _adapterHandlesUserClicks;
	BOOL _adapterHandlesUserImpressions;
	id<GADMediatedNativeAd> _ad;

}

@property (nonatomic,retain) id<GADMediatedNativeAd> ad;                      //@synthesize ad=_ad - In the implementation block
@property (assign,nonatomic) BOOL adapterHandlesUserClicks;                   //@synthesize adapterHandlesUserClicks=_adapterHandlesUserClicks - In the implementation block
@property (assign,nonatomic) BOOL adapterHandlesUserImpressions;              //@synthesize adapterHandlesUserImpressions=_adapterHandlesUserImpressions - In the implementation block
-(void)setAd:(id<GADMediatedNativeAd>)arg1 ;
-(void)reportImpression;
-(BOOL)adapterHandlesUserImpressions;
-(BOOL)adapterHandlesUserClicks;
-(void)reportMediatedAdShouldUntrackView:(id)arg1 ;
-(void)reportAdNetworkClick;
-(void)reportAdNetworkImpression;
-(void)reportClickOnAssetWithWithName:(id)arg1 view:(id)arg2 viewController:(id)arg3 ;
-(void)reportMediatedAdRenderedInView:(id)arg1 viewController:(id)arg2 ;
-(void)setAdapterHandlesUserClicks:(BOOL)arg1 ;
-(void)setAdapterHandlesUserImpressions:(BOOL)arg1 ;
-(id<GADMediatedNativeAd>)ad;
@end
