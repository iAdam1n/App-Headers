/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/MWAdNetAdapter.h>
#import <SolitaireFree/GSAdDelegate.h>

@class GSFullscreenAd, NSString;

@interface MWConversantAdapter : MWAdNetAdapter <GSAdDelegate> {

	GSFullscreenAd* ad;

}

@property (retain) GSFullscreenAd * ad; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned char)isAdReady;
-(void)setAd:(GSFullscreenAd *)arg1 ;
-(id)getSDKVersion;
-(void)adapterInit:(id)arg1 ;
-(unsigned char)startNet;
-(void)adapterUnusable;
-(id)greystripeGUID;
-(void)greystripeAdFetchSucceeded:(id)arg1 ;
-(void)greystripeAdFetchFailed:(id)arg1 withError:(int)arg2 ;
-(void)greystripeAdClickedThrough:(id)arg1 ;
-(void)greystripeWillPresentModalViewController;
-(void)greystripeDidDismissModalViewController;
-(unsigned char)request;
-(unsigned char)display;
-(GSFullscreenAd *)ad;
@end
