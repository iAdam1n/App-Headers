/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <SolitaireFree/MFMessageComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol GADOpenerDelegate;
@class NSMapTable, NSMutableSet, UIViewController, NSURL, GADAdView, GADSlot, NSString, NSMutableDictionary;

@interface GADOpener : NSObject <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, EKEventEditViewDelegate, UIAlertViewDelegate> {

	NSMapTable* _confirmationAlertURLs;
	NSMutableSet* _allowedAppURLs;
	BOOL _didOpenAnotherApplication;
	BOOL _autoClickProtectionEnabled;
	UIViewController* _viewController;
	NSURL* _referringURL;
	GADAdView* _adView;
	GADSlot* _slot;
	id<GADOpenerDelegate> _delegate;
	NSString* _navigationURL;
	NSMutableDictionary* _cachedStoreProductViewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                            //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSURL * referringURL;                                                //@synthesize referringURL=_referringURL - In the implementation block
@property (assign,nonatomic,__weak) GADAdView * adView;                                           //@synthesize adView=_adView - In the implementation block
@property (assign,nonatomic,__weak) GADSlot * slot;                                               //@synthesize slot=_slot - In the implementation block
@property (assign,nonatomic) BOOL didOpenAnotherApplication;                                      //@synthesize didOpenAnotherApplication=_didOpenAnotherApplication - In the implementation block
@property (assign,nonatomic,__weak) id<GADOpenerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * navigationURL;                                              //@synthesize navigationURL=_navigationURL - In the implementation block
@property (assign,nonatomic) BOOL autoClickProtectionEnabled;                                     //@synthesize autoClickProtectionEnabled=_autoClickProtectionEnabled - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedStoreProductViewController;              //@synthesize cachedStoreProductViewController=_cachedStoreProductViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdView:(GADAdView *)arg1 ;
-(BOOL)didOpenAnotherApplication;
-(void)setDidOpenAnotherApplication:(BOOL)arg1 ;
-(BOOL)autoClickProtectionEnabled;
-(void)setAutoClickProtectionEnabled:(BOOL)arg1 ;
-(BOOL)shouldPerformOpenAction;
-(BOOL)resolvedAutoClickProtectionEnabledState;
-(void)notifyBlockedActionInAdView:(id)arg1 ;
-(BOOL)hasHeaderProvidedAutoClickConfiguration;
-(void)didOpenInApp;
-(NSMutableDictionary *)cachedStoreProductViewController;
-(BOOL)shouldPerformOpenActionWithOrientations:(unsigned long long)arg1 ;
-(BOOL)canOpenContent:(id)arg1 ;
-(void)configureOverlay:(id)arg1 orientations:(unsigned long long)arg2 usingCustomClose:(BOOL)arg3 ;
-(void)disableAutoCollapseForResize;
-(id)overlayWithOrientations:(unsigned long long)arg1 useCustomClose:(BOOL)arg2 ;
-(id)confirmationMessageForURL:(id)arg1 ;
-(void)confirmClickToURL:(id)arg1 message:(id)arg2 ;
-(void)didOpenExternalApp;
-(void)presentComposerController:(id)arg1 ;
-(void)openInAppStore:(id)arg1 fallbackURL:(id)arg2 ;
-(NSString *)navigationURL;
-(void)setCachedStoreProductViewController:(NSMutableDictionary *)arg1 ;
-(void)openApp:(id)arg1 ;
-(void)openWebAppWithResizeProperties:(id)arg1 ;
-(void)openCalendarWithDictionary:(id)arg1 ;
-(void)setNavigationURL:(NSString *)arg1 ;
-(void)openEmailComposer:(id)arg1 ;
-(void)openSmsComposer:(id)arg1 ;
-(void)openInAppStoreWithProductID:(id)arg1 fallbackURL:(id)arg2 shouldWaitForFetch:(BOOL)arg3 ;
-(void)fetchInAppStoreForProductID:(id)arg1 ;
-(void)openInAppPurchase:(id)arg1 quantity:(long long)arg2 reportingURLStringFormats:(id)arg3 ;
-(void)openBrowserToURL:(id)arg1 supportedOrientations:(unsigned long long)arg2 ;
-(void)openWebApp:(id)arg1 supportedOrientations:(unsigned long long)arg2 usingCustomClose:(BOOL)arg3 ;
-(void)openWebAppWithHTML:(id)arg1 supportedOrientations:(unsigned long long)arg2 usingCustomClose:(BOOL)arg3 ;
-(void)expandToWebAppWithSupportedOrientations:(unsigned long long)arg1 usingCustomClose:(BOOL)arg2 ;
-(GADSlot *)slot;
-(void)setReferringURL:(NSURL *)arg1 ;
-(NSURL *)referringURL;
-(void)setDelegate:(id<GADOpenerDelegate>)arg1 ;
-(id)init;
-(id<GADOpenerDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)didOpen;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)setSlot:(GADSlot *)arg1 ;
-(GADAdView *)adView;
@end

