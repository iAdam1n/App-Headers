/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GADSlotDelegate <NSObject>
@optional
-(void)setAdSize:(GADAdSize)arg1 andReload:(BOOL)arg2;
-(BOOL)slot:(id)arg1 shouldLoadRequest:(id)arg2;
-(BOOL)slotShouldReloadCurrentRequest:(id)arg1;
-(BOOL)slotShouldPreemptInProgressRequest:(id)arg1;
-(CGRect*)frameInInterface;
-(id)coordinatesOfContentInScreen:(id)arg1;
-(id)inAppPurchaseDelegate;
-(id)swipeToViewControllerView;
-(void)slot:(id)arg1 didReceiveAdView:(id)arg2;
-(void)slot:(id)arg1 contentSizeDidChange:(CGSize)arg2;
-(id)validAdSizes;
-(void)slot:(id)arg1 willResizeToAdSize:(GADAdSize)arg2;
-(void)slot:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
-(BOOL)slot:(id)arg1 notifyPublisherToRenderCustomRenderingAd:(id)arg2 error:(id*)arg3;
-(void)slot:(id)arg1 willLoadAdWithRequest:(id)arg2;
-(void)slotDidReceiveAdClick:(id)arg1;
-(CGRect*)bounds;
-(CGRect*)frame;
-(id)rootViewController;

@end

