/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/GADBannerViewDelegate.h>
#import <Gumtree/ECAdvertisingAdapterProtocol.h>

@class NSMutableDictionary, ECAdvertisingProvider, GADBannerView, NSString;

@interface ECAdvertisingGoogleAdapter : NSObject <GADBannerViewDelegate, ECAdvertisingAdapterProtocol> {

	NSMutableDictionary* _adViews;
	ECAdvertisingProvider* _advertisingProvider;
	GADBannerView* _presentedView;

}

@property (nonatomic,retain) NSMutableDictionary * adViews;                            //@synthesize adViews=_adViews - In the implementation block
@property (nonatomic,retain) ECAdvertisingProvider * advertisingProvider;              //@synthesize advertisingProvider=_advertisingProvider - In the implementation block
@property (nonatomic,retain) GADBannerView * presentedView;                            //@synthesize presentedView=_presentedView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdvertisingProvider:(ECAdvertisingProvider *)arg1 ;
-(ECAdvertisingProvider *)advertisingProvider;
-(void)adViewDidReceiveAd:(id)arg1 ;
-(void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)adViewWillPresentScreen:(id)arg1 ;
-(void)adViewWillDismissScreen:(id)arg1 ;
-(void)adViewDidDismissScreen:(id)arg1 ;
-(id)testDeviceIDs;
-(id)createAdViewForType:(unsigned long long)arg1 frame:(CGRect)arg2 ;
-(id)prepareAdForDisplay:(id)arg1 ;
-(id)requestWithDataProvider:(id)arg1 forBannerType:(unsigned long long)arg2 atPosition:(unsigned long long)arg3 ;
-(id)getAdUnitIdForBannerType:(unsigned long long)arg1 withAd:(id)arg2 ;
-(id)requestWithAd:(id)arg1 forBannerType:(unsigned long long)arg2 withSearchParameters:(id)arg3 ;
-(id)getAdUnitIdForBannerType:(unsigned long long)arg1 withDataProvider:(id)arg2 ;
-(void)setAdViews:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)adViews;
-(void)setPresentedView:(GADBannerView *)arg1 ;
-(void)loadAdForBannerType:(unsigned long long)arg1 atPosition:(unsigned long long)arg2 withDataProvider:(id)arg3 forViewController:(id)arg4 frame:(CGRect)arg5 ;
-(void)loadAdForBannerType:(unsigned long long)arg1 atPosition:(unsigned long long)arg2 withAd:(id)arg3 forViewController:(id)arg4 frame:(CGRect)arg5 withSearchParameters:(id)arg6 ;
-(id)initWithProvider:(id)arg1 ;
-(void)dealloc;
-(GADBannerView *)presentedView;
-(void)cancelAllRequests;
@end

