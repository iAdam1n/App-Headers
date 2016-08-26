/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FBDisplayAdAdapter.h>
#import <SportyTrader/FBAdViewDelegate.h>

@class FBAdViewInternal, NSString;

@interface FBANBannerAdAdapter : FBDisplayAdAdapter <FBAdViewDelegate>

@property (nonatomic,retain) FBAdViewInternal * adView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)adViewDidLoad:(id)arg1 ;
-(void)adViewDidClick:(id)arg1 ;
-(void)adViewDidFinishHandlingClick:(id)arg1 ;
-(void)adView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)adViewWillLogImpression:(id)arg1 ;
-(void)loadAdData:(id)arg1 forSize:(FBAdSize)arg2 forOrientation:(long long)arg3 forPlacement:(id)arg4 minViewability:(int)arg5 ;
-(BOOL)startAdFromRootViewController:(id)arg1 ;
@end
