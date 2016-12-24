/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol JTAdWidgetDelegate <NSObject>
@optional
-(id)location:(id)arg1;
-(void)adWidget:(id)arg1 didFailToShowAd:(id)arg2;
-(id)site:(id)arg1;
-(id)adSpot:(id)arg1;
-(id)query:(id)arg1;
-(int)adultContent:(id)arg1;
-(id)extraParameters:(id)arg1;
-(BOOL)isInterstitial:(id)arg1;
-(id)adBackgroundColor:(id)arg1;
-(id)adForegroundColor:(id)arg1;
-(BOOL)shouldRenderAd:(id)arg1;
-(BOOL)shouldDialNumberWithURL:(id)arg1;
-(void)beginAdInteraction:(id)arg1;
-(void)endAdInteraction:(id)arg1;
-(void)beginDisplayingInterstitial:(id)arg1;
-(void)endDisplayingInterstitial:(id)arg1;
-(void)adWidget:(id)arg1 orientationHasChangedTo:(long long)arg2;
-(id)getPlayVideoPrompt:(id)arg1;
-(id)getBackButtonPrompt:(id)arg1 isInterstitial:(BOOL)arg2;
-(id)getSafariButtonPrompt:(id)arg1;
-(id)getAdvertisementTitle:(id)arg1;
-(void)adWidget:(id)arg1 didFailToRequestAd:(id)arg2;
-(id)adViewController:(id)arg1;

@required
-(id)publisherId:(id)arg1;

@end
