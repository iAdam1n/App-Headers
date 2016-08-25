/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GADSlotDelegate <NSObject>
@optional
-(id)inAppPurchaseDelegate;
-(BOOL)slot:(id)arg1 shouldLoadRequest:(id)arg2 error:(id*)arg3;
-(BOOL)slotShouldReloadCurrentRequest:(id)arg1;
-(BOOL)slotShouldPreemptInProgressRequest:(id)arg1;
-(CGRect*)frameInInterface;
-(void)slot:(id)arg1 didReceiveAdView:(id)arg2;
-(void)slot:(id)arg1 contentSizeDidChange:(CGSize)arg2;
-(void)setAdSize:(GADAdSize)arg1 andReload:(BOOL)arg2;
-(id)validAdSizes;
-(void)slot:(id)arg1 willResizeToAdSize:(GADAdSize)arg2;
-(void)slot:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
-(BOOL)slot:(id)arg1 notifyPublisherToRenderCustomRenderingAd:(id)arg2 error:(id*)arg3;
-(void)slot:(id)arg1 willLoadAdWithRequest:(id)arg2;
-(void)slotDidReceiveAdClick:(id)arg1;
-(BOOL)slot:(id)arg1 shouldChangeAudioSessionCategoryTo:(id)arg2;
-(CGRect*)bounds;
-(CGRect*)frame;
-(id)rootViewController;

@end

