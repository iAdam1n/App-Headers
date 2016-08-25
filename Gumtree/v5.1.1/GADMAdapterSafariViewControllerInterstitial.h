/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/GADMAdNetworkAdapter.h>
#import <Gumtree/SFSafariViewControllerDelegate.h>

@class GADMAdNetworkConnectorInterstitial, SFSafariViewController, NSURL, NSString;

@interface GADMAdapterSafariViewControllerInterstitial : NSObject <GADMAdNetworkAdapter, SFSafariViewControllerDelegate> {

	GADMAdNetworkConnectorInterstitial* _connector;
	SFSafariViewController* _safariViewController;
	NSURL* _tabURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)adapterVersion;
+(Class)networkExtrasClass;
-(void)stopBeingDelegate;
-(void)reportLoadFailureWithCode:(long long)arg1 errorMessage:(id)arg2 ;
-(id)initWithGADMAdNetworkConnector:(id)arg1 ;
-(void)getBannerWithSize:(GADAdSize)arg1 ;
-(void)getInterstitial;
-(BOOL)isBannerAnimationOK:(long long)arg1 ;
-(void)presentInterstitialFromRootViewController:(id)arg1 ;
-(void)getNativeAdWithAdTypes:(id)arg1 options:(id)arg2 ;
-(BOOL)handlesUserClicks;
-(void)changeAdSizeTo:(GADAdSize)arg1 ;
-(void)dealloc;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)safariViewController:(id)arg1 didCompleteInitialLoad:(BOOL)arg2 ;
@end

