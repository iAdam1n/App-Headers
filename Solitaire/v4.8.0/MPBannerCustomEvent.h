/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPBannerCustomEventDelegate;
#import <SolitaireFree/SolitaireFree-Structs.h>
@interface MPBannerCustomEvent : NSObject {

	id<MPBannerCustomEventDelegate> delegate;

}

@property (assign,nonatomic,__weak) id<MPBannerCustomEventDelegate> delegate; 
-(BOOL)enableAutomaticImpressionAndClickTracking;
-(void)requestAdWithSize:(CGSize)arg1 customEventInfo:(id)arg2 ;
-(void)didDisplayAd;
-(void)setDelegate:(id<MPBannerCustomEventDelegate>)arg1 ;
-(id<MPBannerCustomEventDelegate>)delegate;
-(void)rotateToOrientation:(long long)arg1 ;
@end

