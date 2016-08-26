/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPNativeAdSourceQueueDelegate;
@class NSMutableArray, NSString, MPNativeAdRequestTargeting;

@interface MPNativeAdSourceQueue : NSObject {

	BOOL _isAdLoading;
	id<MPNativeAdSourceQueueDelegate> _delegate;
	unsigned long long _currentSequence;
	NSMutableArray* _adQueue;
	unsigned long long _backoffCounter;
	NSString* _adUnitIdentifier;
	MPNativeAdRequestTargeting* _targeting;

}

@property (assign,nonatomic,__weak) id<MPNativeAdSourceQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long currentSequence;                             //@synthesize currentSequence=_currentSequence - In the implementation block
@property (nonatomic,retain) NSMutableArray * adQueue;                                       //@synthesize adQueue=_adQueue - In the implementation block
@property (assign,nonatomic) unsigned long long backoffCounter;                              //@synthesize backoffCounter=_backoffCounter - In the implementation block
@property (nonatomic,copy) NSString * adUnitIdentifier;                                      //@synthesize adUnitIdentifier=_adUnitIdentifier - In the implementation block
@property (nonatomic,retain) MPNativeAdRequestTargeting * targeting;                         //@synthesize targeting=_targeting - In the implementation block
@property (assign,nonatomic) BOOL isAdLoading;                                               //@synthesize isAdLoading=_isAdLoading - In the implementation block
-(MPNativeAdRequestTargeting *)targeting;
-(NSString *)adUnitIdentifier;
-(void)setTargeting:(MPNativeAdRequestTargeting *)arg1 ;
-(void)setAdUnitIdentifier:(NSString *)arg1 ;
-(id)initWithAdUnitIdentifier:(id)arg1 andTargeting:(id)arg2 ;
-(void)loadAds;
-(id)dequeueAdWithMaxAge:(double)arg1 ;
-(NSMutableArray *)adQueue;
-(id)dequeueAd;
-(BOOL)isAdAgeValid:(id)arg1 withMaxAge:(double)arg2 ;
-(void)resetBackoff;
-(void)setBackoffCounter:(unsigned long long)arg1 ;
-(unsigned long long)backoffCounter;
-(void)replenishCache;
-(BOOL)isAdLoading;
-(void)setIsAdLoading:(BOOL)arg1 ;
-(unsigned long long)currentSequence;
-(void)addNativeAd:(id)arg1 ;
-(void)setCurrentSequence:(unsigned long long)arg1 ;
-(double)backoffTime;
-(void)setAdQueue:(NSMutableArray *)arg1 ;
-(void)setDelegate:(id<MPNativeAdSourceQueueDelegate>)arg1 ;
-(unsigned long long)count;
-(id<MPNativeAdSourceQueueDelegate>)delegate;
-(void)cancelRequests;
@end
