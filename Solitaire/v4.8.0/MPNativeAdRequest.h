/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MPNativeCustomEventDelegate.h>
#import <SolitaireFree/MPAdServerCommunicatorDelegate.h>

@protocol MPNativeAdRenderer;
@class MPNativeAdRequestTargeting, NSString, NSArray, NSURL, MPAdServerCommunicator, MPNativeCustomEvent, MPAdConfiguration;

@interface MPNativeAdRequest : NSObject <MPNativeCustomEventDelegate, MPAdServerCommunicatorDelegate> {

	BOOL _loading;
	MPNativeAdRequestTargeting* _targeting;
	NSString* _adUnitIdentifier;
	NSArray* _rendererConfigurations;
	NSURL* _URL;
	MPAdServerCommunicator* _communicator;
	/*^block*/id _completionHandler;
	MPNativeCustomEvent* _nativeCustomEvent;
	MPAdConfiguration* _adConfiguration;
	id<MPNativeAdRenderer> _customEventRenderer;

}

@property (nonatomic,copy) NSString * adUnitIdentifier;                               //@synthesize adUnitIdentifier=_adUnitIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * rendererConfigurations;                        //@synthesize rendererConfigurations=_rendererConfigurations - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) MPAdServerCommunicator * communicator;                   //@synthesize communicator=_communicator - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) MPNativeCustomEvent * nativeCustomEvent;                 //@synthesize nativeCustomEvent=_nativeCustomEvent - In the implementation block
@property (nonatomic,retain) MPAdConfiguration * adConfiguration;                     //@synthesize adConfiguration=_adConfiguration - In the implementation block
@property (nonatomic,retain) id<MPNativeAdRenderer> customEventRenderer;              //@synthesize customEventRenderer=_customEventRenderer - In the implementation block
@property (assign,nonatomic) BOOL loading;                                            //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) MPNativeAdRequestTargeting * targeting;                  //@synthesize targeting=_targeting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestWithAdUnitIdentifier:(id)arg1 rendererConfigurations:(id)arg2 ;
-(MPAdConfiguration *)adConfiguration;
-(void)setTargeting:(MPNativeAdRequestTargeting *)arg1 ;
-(MPNativeAdRequestTargeting *)targeting;
-(void)getAdWithConfiguration:(id)arg1 ;
-(MPAdServerCommunicator *)communicator;
-(void)setCommunicator:(MPAdServerCommunicator *)arg1 ;
-(void)setAdConfiguration:(MPAdConfiguration *)arg1 ;
-(void)setAdUnitIdentifier:(NSString *)arg1 ;
-(NSString *)adUnitIdentifier;
-(void)loadAdWithURL:(id)arg1 ;
-(void)communicatorDidReceiveAdConfiguration:(id)arg1 ;
-(void)communicatorDidFailWithError:(id)arg1 ;
-(void)nativeCustomEvent:(id)arg1 didFailToLoadAdWithError:(id)arg2 ;
-(void)nativeCustomEvent:(id)arg1 didLoadAd:(id)arg2 ;
-(NSArray *)rendererConfigurations;
-(void)startForAdSequence:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setRendererConfigurations:(NSArray *)arg1 ;
-(id)initWithAdUnitIdentifier:(id)arg1 rendererConfigurations:(id)arg2 ;
-(void)assignCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCustomEventRenderer:(id<MPNativeAdRenderer>)arg1 ;
-(void)setNativeCustomEvent:(MPNativeCustomEvent *)arg1 ;
-(MPNativeCustomEvent *)nativeCustomEvent;
-(void)completeAdRequestWithAdObject:(id)arg1 error:(id)arg2 ;
-(id<MPNativeAdRenderer>)customEventRenderer;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
@end

