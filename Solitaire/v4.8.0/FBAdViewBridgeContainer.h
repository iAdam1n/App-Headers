/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/FBAdBridgeContainer.h>
#import <SolitaireFree/FBAdViewDelegate.h>

@class FBAdView, NSString;

@interface FBAdViewBridgeContainer : FBAdBridgeContainer <FBAdViewDelegate> {

	FBAdView* _adView;
	/*function pointer*/void* _adViewDidClickCallback;
	/*function pointer*/void* _adViewDidFinishHandlingClickCallback;
	/*function pointer*/void* _adViewDidLoadCallback;
	/*function pointer*/void* _adViewDidFailWithErrorCallback;
	/*function pointer*/void* _adViewWillLogImpressionCallback;

}

@property (nonatomic,retain) FBAdView * adView;                                                           //@synthesize adView=_adView - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* adViewDidClickCallback;                            //@synthesize adViewDidClickCallback=_adViewDidClickCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* adViewDidFinishHandlingClickCallback;              //@synthesize adViewDidFinishHandlingClickCallback=_adViewDidFinishHandlingClickCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* adViewDidLoadCallback;                             //@synthesize adViewDidLoadCallback=_adViewDidLoadCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* adViewDidFailWithErrorCallback;                    //@synthesize adViewDidFailWithErrorCallback=_adViewDidFailWithErrorCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* adViewWillLogImpressionCallback;                   //@synthesize adViewWillLogImpressionCallback=_adViewWillLogImpressionCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdView:(FBAdView *)arg1 ;
-(void)adViewDidLoad:(id)arg1 ;
-(void)adViewDidClick:(id)arg1 ;
-(void)adViewDidFinishHandlingClick:(id)arg1 ;
-(void)adView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)adViewWillLogImpression:(id)arg1 ;
-(/*function pointer*/void*)adViewDidClickCallback;
-(/*function pointer*/void*)adViewDidFinishHandlingClickCallback;
-(/*function pointer*/void*)adViewDidLoadCallback;
-(/*function pointer*/void*)adViewDidFailWithErrorCallback;
-(/*function pointer*/void*)adViewWillLogImpressionCallback;
-(void)setAdViewDidClickCallback:(/*function pointer*/void*)arg1 ;
-(void)setAdViewDidFinishHandlingClickCallback:(/*function pointer*/void*)arg1 ;
-(void)setAdViewDidLoadCallback:(/*function pointer*/void*)arg1 ;
-(void)setAdViewDidFailWithErrorCallback:(/*function pointer*/void*)arg1 ;
-(void)setAdViewWillLogImpressionCallback:(/*function pointer*/void*)arg1 ;
-(id)initWithAdView:(id)arg1 withUniqueId:(int)arg2 ;
-(void)dealloc;
-(void)dispose;
-(FBAdView *)adView;
@end

