/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/TSInterstitial.h>
#import <SolitaireFree/TSInterstitialViewControllerDelegate.h>
#import <SolitaireFree/SKMRAIDInterstitialDelegate.h>
#import <SolitaireFree/SKMRAIDServiceDelegate.h>

@class SKMRAIDInterstitial, NSString;

@interface TSMRAIDInterstitial : TSInterstitial <TSInterstitialViewControllerDelegate, SKMRAIDInterstitialDelegate, SKMRAIDServiceDelegate> {

	SKMRAIDInterstitial* _mraidInterstitial;

}

@property (nonatomic,retain) SKMRAIDInterstitial * mraidInterstitial;              //@synthesize mraidInterstitial=_mraidInterstitial - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mraidServiceCreateCalendarEventWithEventJSON:(id)arg1 ;
-(void)mraidServicePlayVideoWithUrlString:(id)arg1 ;
-(void)mraidServiceOpenBrowserWithUrlString:(id)arg1 ;
-(void)mraidServiceStorePictureWithUrlString:(id)arg1 ;
-(void)showInterstitialFromViewController:(id)arg1 ;
-(BOOL)shouldUseExtension;
-(void)requestInterstitialWithInfo:(id)arg1 ;
-(void)setMraidInterstitial:(SKMRAIDInterstitial *)arg1 ;
-(SKMRAIDInterstitial *)mraidInterstitial;
-(void)mraidInterstitialAdReady:(id)arg1 ;
-(void)mraidInterstitialAdFailed:(id)arg1 ;
-(void)mraidInterstitialDidHide:(id)arg1 ;
-(void)mraidInterstitialNavigate:(id)arg1 withURL:(id)arg2 ;
-(void)dealloc;
@end

