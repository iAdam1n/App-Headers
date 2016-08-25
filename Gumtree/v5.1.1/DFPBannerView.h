/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/GADBannerView.h>
#import <Gumtree/DFPCustomRenderedAdEventHandler.h>

@protocol GADAppEventDelegate, DFPCustomRenderedBannerViewDelegate;
@class NSArray, NSString, GADCorrelator;

@interface DFPBannerView : GADBannerView <DFPCustomRenderedAdEventHandler> {

	unsigned _previousCorrelationID;
	id<GADAppEventDelegate> _appEventDelegate;
	NSArray* _validAdSizes;
	id<DFPCustomRenderedBannerViewDelegate> _customRenderedBannerViewDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * adUnitID; 
@property (assign,nonatomic,__weak) id<GADAppEventDelegate> appEventDelegate;                                              //@synthesize appEventDelegate=_appEventDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<GADAdSizeDelegate> adSizeDelegate; 
@property (nonatomic,copy) NSArray * validAdSizes;                                                                         //@synthesize validAdSizes=_validAdSizes - In the implementation block
@property (nonatomic,retain) GADCorrelator * correlator; 
@property (assign,nonatomic) BOOL enableManualImpressions; 
@property (assign,nonatomic,__weak) id<DFPCustomRenderedBannerViewDelegate> customRenderedBannerViewDelegate;              //@synthesize customRenderedBannerViewDelegate=_customRenderedBannerViewDelegate - In the implementation block
-(void)recordClick;
-(void)recordCustomAdImpression;
-(void)finishedRenderingAdView:(id)arg1 ;
-(void)recordImpression;
-(BOOL)slotShouldPreemptInProgressRequest:(id)arg1 ;
-(NSArray *)validAdSizes;
-(void)slot:(id)arg1 willResizeToAdSize:(GADAdSize)arg2 ;
-(void)slot:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3 ;
-(BOOL)slot:(id)arg1 notifyPublisherToRenderCustomRenderingAd:(id)arg2 error:(id*)arg3 ;
-(void)slot:(id)arg1 willLoadAdWithRequest:(id)arg2 ;
-(GADCorrelator *)correlator;
-(void)setCorrelator:(GADCorrelator *)arg1 ;
-(void)setValidAdSizes:(NSArray *)arg1 ;
-(id<GADAppEventDelegate>)appEventDelegate;
-(id<DFPCustomRenderedBannerViewDelegate>)customRenderedBannerViewDelegate;
-(void)setEnableManualImpressions:(BOOL)arg1 ;
-(BOOL)enableManualImpressions;
-(void)setValidAdSizesWithSizes:(GADAdSize*)arg1 ;
-(void)setAppEventDelegate:(id<GADAppEventDelegate>)arg1 ;
-(void)setCustomRenderedBannerViewDelegate:(id<DFPCustomRenderedBannerViewDelegate>)arg1 ;
-(void)resize:(GADAdSize)arg1 ;
@end

