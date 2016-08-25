/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/SPRewardedVideoNetworkAdapter.h>
#import <BubbleMania/AdColonyDelegate.h>
#import <BubbleMania/AdColonyAdDelegate.h>

@protocol SPRewardedVideoNetworkAdapterDelegate;
@class SPAdColonyNetwork, NSString;

@interface SPAdColonyRewardedVideoAdapter : NSObject <SPRewardedVideoNetworkAdapter, AdColonyDelegate, AdColonyAdDelegate> {

	BOOL _videoAvailable;
	BOOL _videoClosed;
	id<SPRewardedVideoNetworkAdapterDelegate> _delegate;
	SPAdColonyNetwork* _network;
	NSString* _zoneId;
	long long _userRewarded;

}

@property (assign,nonatomic) SPAdColonyNetwork * network;                           //@synthesize network=_network - In the implementation block
@property (nonatomic,copy) NSString * zoneId;                                       //@synthesize zoneId=_zoneId - In the implementation block
@property (assign,nonatomic) BOOL videoAvailable;                                   //@synthesize videoAvailable=_videoAvailable - In the implementation block
@property (assign,nonatomic) BOOL videoClosed;                                      //@synthesize videoClosed=_videoClosed - In the implementation block
@property (assign,nonatomic) long long userRewarded;                                //@synthesize userRewarded=_userRewarded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<SPRewardedVideoNetworkAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)startAdapterWithDictionary:(id)arg1 ;
-(void)checkAvailability;
-(void)playVideoWithParentViewController:(id)arg1 ;
-(BOOL)videoAvailable;
-(void)setUserRewarded:(long long)arg1 ;
-(void)setVideoClosed:(BOOL)arg1 ;
-(void)setVideoAvailable:(BOOL)arg1 ;
-(void)notifyWebView;
-(long long)userRewarded;
-(BOOL)videoClosed;
-(void)onAdColonyAdAvailabilityChange:(BOOL)arg1 inZone:(id)arg2 ;
-(void)onAdColonyV4VCReward:(BOOL)arg1 currencyName:(id)arg2 currencyAmount:(int)arg3 inZone:(id)arg4 ;
-(void)onAdColonyAdStartedInZone:(id)arg1 ;
-(void)onAdColonyAdAttemptFinished:(BOOL)arg1 inZone:(id)arg2 ;
-(id)networkName;
-(void)setDelegate:(id<SPRewardedVideoNetworkAdapterDelegate>)arg1 ;
-(id<SPRewardedVideoNetworkAdapterDelegate>)delegate;
-(SPAdColonyNetwork *)network;
-(void)setNetwork:(SPAdColonyNetwork *)arg1 ;
-(void)setZoneId:(NSString *)arg1 ;
-(NSString *)zoneId;
@end

