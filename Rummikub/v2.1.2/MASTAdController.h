/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Rummikub/Rummikub-Structs.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSMutableArray, MASTAdView, NSString;

@interface MASTAdController : NSObject <UIWebViewDelegate> {

	NSMutableArray* _ads;
	NSMutableArray* _adUpdateControllers;
	MASTAdView* _adView;
	char _isRequestRedirect;
	NSString* _FirstRequestString;

}
+(id)sharedInstance;
+(void)releaseSharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)registerObserver;
-(void)failToReceiveAd:(id)arg1 ;
-(void)adDownloaded:(id)arg1 ;
-(void)registerAd:(id)arg1 ;
-(void)unregisterAd:(id)arg1 ;
-(void)adClicked:(id)arg1 ;
-(void)adOpenRequest:(id)arg1 ;
-(void)trackExternalCampaignURL:(id)arg1 ;
-(void)addAdView:(id)arg1 ;
-(void)statrLoad:(id)arg1 ;
-(void)removeAdView:(id)arg1 ;
-(void)processDownload:(id)arg1 ;
-(void)sendTrackRequest:(id)arg1 ;
-(oneway void)superRelease;
-(id)retain;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(oneway void)release;
@end

