/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <AngryBirdsClassic/GADActiveViewGMSGHandlerDelegate.h>
#import <AngryBirdsClassic/GADAdViewDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMutableSet, GADAdViewDelegate, GADAdView, GADActiveViewGMSGHandler, NSMapTable, GADSDKCoreGMSGHandler, NSString;

@interface GADSDKCoreWebView : NSObject <GADActiveViewGMSGHandlerDelegate, GADAdViewDelegate> {

	long long _state;
	BOOL _hasSDKCoreLoadedAtLeastOnce;
	NSMutableArray* _pendingJSCommands;
	NSObject*<OS_dispatch_queue> _lockQueue;
	NSObject*<OS_dispatch_queue> _commandQueue;
	NSMutableSet* _SDKCoreObservers;
	GADAdViewDelegate* _adViewDelegate;
	GADAdView* _adView;
	GADActiveViewGMSGHandler* _activeViewGMSGHandler;
	NSMapTable* _activeViewObservers;
	NSMutableSet* _runningActiveViewObservers;
	GADSDKCoreGMSGHandler* _SDKCoreGMSGHandler;

}

@property (assign) long long state; 
@property (assign) BOOL hasSDKCoreLoadedAtLeastOnce; 
@property (setter=DKCoreGMSGHandler,nonatomic,retain) GADSDKCoreGMSGHandler * SDKCoreGMSGHandler;              //@synthesize SDKCoreGMSGHandler=_SDKCoreGMSGHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activeViewGMSGHandler:(id)arg1 didReceiveVisibilityNotification:(BOOL)arg2 forActiveViewID:(unsigned long long)arg3 ;
-(void)activeViewGMSGHandler:(id)arg1 didReceiveUntrackNotificationForActiveViewID:(unsigned long long)arg2 ;
-(GADSDKCoreGMSGHandler *)SDKCoreGMSGHandler;
-(void)refreshSDKCoreAndNotifyObserver:(id)arg1 ;
-(BOOL)isActiveViewRunning;
-(void)enqueueJavaScriptCommand:(id)arg1 ;
-(BOOL)hasSDKCoreLoadedAtLeastOnce;
-(void)addObserverForOneTimeNotification:(id)arg1 ;
-(void)postJSNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)adViewDidFinishLoad:(id)arg1 ;
-(void)adView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)notifyAllObserversOnlyOnceThatSDKCoreRequestIsFinished;
-(void)setHasSDKCoreLoadedAtLeastOnce:(BOOL)arg1 ;
-(void)dispatchPendingJavaScriptCommands;
-(void)setActiveViewObserver:(id)arg1 forActiveViewID:(unsigned long long)arg2 ;
-(void)removeActiveViewObserverForActiveViewID:(unsigned long long)arg1 ;
-(void)clearAllActiveViewInstances;
-(void)setSDKCoreGMSGHandler:(GADSDKCoreGMSGHandler *)arg1 ;
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)removeObserver:(id)arg1 ;
@end

