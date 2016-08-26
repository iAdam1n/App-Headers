/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol IFlurryAdViewController <NSObject>
@property (nonatomic,retain) id<IFlurryAd> ad; 
@property (nonatomic,retain) id<IFlurryNativeAd> nativeAd; 
@property (nonatomic,retain) UIView * adView; 
@required
-(void)setAdView:(id)arg1;
-(void)setAd:(id)arg1;
-(void)setNativeAd:(id)arg1;
-(id<IFlurryNativeAd>)nativeAd;
-(id)initWithAd:(id)arg1;
-(id)initWithNativeAd:(id)arg1 andView:(id)arg2;
-(void)removeWindow;
-(id<IFlurryAd>)ad;
-(void)loadAd:(id)arg1;
-(UIView *)adView;

@end
