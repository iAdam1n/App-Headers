/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/SPBaseNetwork.h>

@protocol SPRewardedVideoNetworkAdapterAdColonyDelegate, SPInterstitialNetworkAdapter;
@class SPTPNGenericAdapter;

@interface SPAdColonyNetwork : SPBaseNetwork {

	SPTPNGenericAdapter* rewardedVideoAdapter;
	id<SPRewardedVideoNetworkAdapter><AdColonyDelegate> rewardedVideoNetworkAdapter;
	id<SPInterstitialNetworkAdapter> interstitialAdapter;

}

@property (nonatomic,retain) SPTPNGenericAdapter * rewardedVideoAdapter; 
@property (assign,nonatomic) id<SPRewardedVideoNetworkAdapter><AdColonyDelegate> rewardedVideoNetworkAdapter; 
@property (nonatomic,retain) id<SPInterstitialNetworkAdapter> interstitialAdapter; 
+(id)adapterVersion;
-(void)setRewardedVideoAdapter:(SPTPNGenericAdapter *)arg1 ;
-(BOOL)startSDK:(id)arg1 ;
-(SPTPNGenericAdapter *)rewardedVideoAdapter;
-(void)setRewardedVideoNetworkAdapter:(id<SPRewardedVideoNetworkAdapter><AdColonyDelegate>)arg1 ;
-(void)setInterstitialAdapter:(id<SPInterstitialNetworkAdapter>)arg1 ;
-(id<SPRewardedVideoNetworkAdapter><AdColonyDelegate>)rewardedVideoNetworkAdapter;
-(id<SPInterstitialNetworkAdapter>)interstitialAdapter;
-(id)init;
@end
