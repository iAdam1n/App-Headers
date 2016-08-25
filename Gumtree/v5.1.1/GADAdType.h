/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@interface GADAdType : NSObject {

	BOOL _isRewardBasedVideoAd;
	BOOL _isInterstitial;
	GADAdSize _adSize;

}

@property (nonatomic,readonly) BOOL isInterstitial;              //@synthesize isInterstitial=_isInterstitial - In the implementation block
@property (assign,nonatomic) GADAdSize adSize;                   //@synthesize adSize=_adSize - In the implementation block
+(id)bannerAdTypeForSize:(GADAdSize)arg1 ;
+(id)interstitialAdType;
-(id)initWithAdSize:(GADAdSize)arg1 ;
-(void)setAdSize:(GADAdSize)arg1 ;
-(GADAdSize)adSize;
-(BOOL)isInterstitial;
-(id)initForInterstitial;
-(id)initForRewardBasedVideoAd;
-(BOOL)isRewardBasedVideoAd;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isValid;
@end

