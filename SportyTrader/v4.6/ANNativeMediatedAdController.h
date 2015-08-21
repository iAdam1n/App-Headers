/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/ANNativeCustomAdapterRequestDelegate.h>

@protocol ANNativeAdTargetingProtocol, ANNativeMediationAdControllerDelegate, ANNativeCustomAdapter;
@class ANMediatedAd, NSString;

@interface ANNativeMediatedAdController : NSObject <ANNativeCustomAdapterRequestDelegate> {

	BOOL _hasSucceeded;
	BOOL _hasFailed;
	BOOL _timeoutCanceled;
	id<ANNativeAdTargetingProtocol> _adRequestDelegate;
	id<ANNativeMediationAdControllerDelegate> _delegate;
	ANMediatedAd* _mediatedAd;
	id<ANNativeCustomAdapter> _currentAdapter;
	double _latencyStart;
	double _latencyStop;

}

@property (assign,nonatomic,__weak) id<ANNativeAdTargetingProtocol> adRequestDelegate;               //@synthesize adRequestDelegate=_adRequestDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<ANNativeMediationAdControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ANMediatedAd * mediatedAd;                                              //@synthesize mediatedAd=_mediatedAd - In the implementation block
@property (nonatomic,retain) id<ANNativeCustomAdapter> currentAdapter;                               //@synthesize currentAdapter=_currentAdapter - In the implementation block
@property (assign,nonatomic) BOOL hasSucceeded;                                                      //@synthesize hasSucceeded=_hasSucceeded - In the implementation block
@property (assign,nonatomic) BOOL hasFailed;                                                         //@synthesize hasFailed=_hasFailed - In the implementation block
@property (assign,nonatomic) BOOL timeoutCanceled;                                                   //@synthesize timeoutCanceled=_timeoutCanceled - In the implementation block
@property (assign,nonatomic) double latencyStart;                                                    //@synthesize latencyStart=_latencyStart - In the implementation block
@property (assign,nonatomic) double latencyStop;                                                     //@synthesize latencyStop=_latencyStop - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)initMediatedAd:(id)arg1 withDelegate:(id)arg2 adRequestDelegate:(id)arg3 ;
-(id)targetingParameters;
-(void)setAdapter:(id)arg1 ;
-(void)markLatencyStart;
-(id<ANNativeAdTargetingProtocol>)adRequestDelegate;
-(void)setAdRequestDelegate:(id<ANNativeAdTargetingProtocol>)arg1 ;
-(id)initMediatedAd:(id)arg1 withDelegate:(id)arg2 adRequestDelegate:(id)arg3 ;
-(BOOL)initializeRequest;
-(ANMediatedAd *)mediatedAd;
-(BOOL)validAdInstance:(id)arg1 ;
-(void)setCurrentAdapter:(id<ANNativeCustomAdapter>)arg1 ;
-(void)startTimeout;
-(id<ANNativeCustomAdapter>)currentAdapter;
-(void)handleInstantiationFailure:(id)arg1 errorCode:(long long)arg2 errorInfo:(id)arg3 ;
-(void)didFailToReceiveAd:(long long)arg1 ;
-(void)setHasSucceeded:(BOOL)arg1 ;
-(void)setHasFailed:(BOOL)arg1 ;
-(void)cancelTimeout;
-(BOOL)hasSucceeded;
-(BOOL)hasFailed;
-(BOOL)checkIfHasResponded;
-(void)markLatencyStop;
-(void)finish:(long long)arg1 withAdObject:(id)arg2 ;
-(id)createResultCBRequest:(id)arg1 reason:(int)arg2 ;
-(void)clearAdapter;
-(void)runInBlock:(/*^block*/id)arg1 ;
-(double)getLatency;
-(double)getTotalLatency;
-(BOOL)timeoutCanceled;
-(void)setTimeoutCanceled:(BOOL)arg1 ;
-(void)setLatencyStart:(double)arg1 ;
-(void)setLatencyStop:(double)arg1 ;
-(double)latencyStart;
-(double)latencyStop;
-(void)didReceiveAd:(id)arg1 ;
-(void)didLoadNativeAd:(id)arg1 ;
-(void)didFailToLoadNativeAd:(long long)arg1 ;
-(void)setMediatedAd:(ANMediatedAd *)arg1 ;
-(void)setDelegate:(id<ANNativeMediationAdControllerDelegate>)arg1 ;
-(id<ANNativeMediationAdControllerDelegate>)delegate;
@end

