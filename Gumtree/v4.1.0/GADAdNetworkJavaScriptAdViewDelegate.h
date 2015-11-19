/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GADBannerAdViewDelegate.h>
#import <Gumtree/GADAdViewRenderedCheckerDelegate.h>

@class NSTimer, GADAdViewRenderedChecker, NSURL, NSString;

@interface GADAdNetworkJavaScriptAdViewDelegate : GADBannerAdViewDelegate <GADAdViewRenderedCheckerDelegate> {

	unsigned long long _checkRenderingCount;
	NSTimer* _checkRenderingTimer;
	GADAdViewRenderedChecker* _adViewRenderedChecker;
	BOOL _renderingCheckHasStarted;
	BOOL _wasPassbackReceived;
	NSURL* _passbackURL;

}

@property (nonatomic,copy) NSURL * passbackURL;                     //@synthesize passbackURL=_passbackURL - In the implementation block
@property (assign,nonatomic) BOOL wasPassbackReceived;              //@synthesize wasPassbackReceived=_wasPassbackReceived - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopRenderingTimer;
-(BOOL)isPassbackRequest:(id)arg1 ;
-(BOOL)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)adViewDidFinishLoad:(id)arg1 ;
-(void)adViewDidRenderContent:(id)arg1 ;
-(void)adViewDidFailToRenderContent:(id)arg1 ;
-(id)initWithSlot:(id)arg1 passbackURL:(id)arg2 ;
-(NSURL *)passbackURL;
-(void)startRenderingTimerForAdView:(id)arg1 ;
-(void)setPassbackURL:(NSURL *)arg1 ;
-(BOOL)wasPassbackReceived;
-(void)setWasPassbackReceived:(BOOL)arg1 ;
-(id)initWithSlot:(id)arg1 ;
@end

