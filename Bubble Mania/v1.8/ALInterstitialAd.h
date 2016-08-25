/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/ALAdLoadDelegate.h>
#import <BubbleMania/ALInterstitialControlProxy.h>

@protocol ALInterstitialControlProxy, ALAdVideoPlaybackDelegate, ALAdDisplayDelegate, ALAdLoadDelegate;
@class ALSdk, UIWindow, NSString;

@interface ALInterstitialAd : NSObject <ALAdLoadDelegate, ALInterstitialControlProxy> {

	BOOL _hidden;
	ALSdk* sdk;
	UIWindow* currentWindow;
	id<ALInterstitialControlProxy> currentInterstitialController;
	id<ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate;
	id<ALAdDisplayDelegate> adDisplayDelegate;
	id<ALAdLoadDelegate> adLoadDelegate;
	CGRect _frame;

}

@property (retain) id<ALAdLoadDelegate> adLoadDelegate; 
@property (retain) id<ALAdDisplayDelegate> adDisplayDelegate; 
@property (retain) id<ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate; 
@property (getter=isReadyForDisplay,readonly) BOOL readyForDisplay; 
@property (assign,nonatomic) CGRect frame;                                                    //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                                     //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,retain) ALSdk * sdk; 
@property (retain) UIWindow * currentWindow; 
@property (retain) id<ALInterstitialControlProxy> currentInterstitialController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showOver:(id)arg1 ;
+(id)show;
+(id)shared;
+(BOOL)isReadyForDisplay;
-(void)setAdVideoPlaybackDelegate:(id<ALAdVideoPlaybackDelegate>)arg1 ;
-(void)setAdDisplayDelegate:(id<ALAdDisplayDelegate>)arg1 ;
-(id)initWithSdk:(id)arg1 ;
-(ALSdk *)sdk;
-(void)adService:(id)arg1 didLoadAd:(id)arg2 ;
-(void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2 ;
-(id<ALAdDisplayDelegate>)adDisplayDelegate;
-(id<ALAdVideoPlaybackDelegate>)adVideoPlaybackDelegate;
-(void)showOver:(id)arg1 andRender:(id)arg2 ;
-(void)setAdLoadDelegate:(id<ALAdLoadDelegate>)arg1 ;
-(id)initInterstitialAdWithSdk:(id)arg1 ;
-(void)setSdk:(ALSdk *)arg1 ;
-(id<ALAdLoadDelegate>)adLoadDelegate;
-(void)displayInterstitialAd:(id)arg1 ;
-(void)showInterstitialInViewController:(id)arg1 ;
-(void)showInterstitialInSubview:(id)arg1 ;
-(id)appropriateViewControllerForAd:(id)arg1 ;
-(void)setCurrentInterstitialController:(id<ALInterstitialControlProxy>)arg1 ;
-(BOOL)shouldUseAVFoundation;
-(id<ALInterstitialControlProxy>)currentInterstitialController;
-(void)setCurrentWindow:(UIWindow *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 sdk:(id)arg2 ;
-(void)showOver:(id)arg1 ;
-(UIWindow *)currentWindow;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)dismiss;
-(BOOL)hidden;
-(BOOL)isReadyForDisplay;
@end

