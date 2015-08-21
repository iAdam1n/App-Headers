/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/EKEventEditViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <SportyTrader/MFMailComposeViewControllerDelegate.h>
#import <SportyTrader/MFMessageComposeViewControllerDelegate.h>

@protocol GADOpenerDelegate;
@class NSMapTable, NSMutableSet, UIViewController, NSURL, GADWebView, GADSlot, NSString, NSMutableDictionary;

@interface GADOpener : NSObject <EKEventEditViewDelegate, UIAlertViewDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate> {

	NSMapTable* _confirmationAlertURLs;
	NSMutableSet* _allowedAppURLs;
	BOOL _didOpenAnotherApplication;
	BOOL _autoClickProtected;
	UIViewController* _viewController;
	NSURL* _referringURL;
	GADWebView* _webView;
	GADSlot* _slot;
	id<GADOpenerDelegate> _delegate;
	NSString* _navigationURL;
	NSMutableDictionary* _cachedStoreProductViewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                            //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSURL * referringURL;                                                //@synthesize referringURL=_referringURL - In the implementation block
@property (assign,nonatomic,__weak) GADWebView * webView;                                         //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) GADSlot * slot;                                               //@synthesize slot=_slot - In the implementation block
@property (assign,nonatomic) BOOL didOpenAnotherApplication;                                      //@synthesize didOpenAnotherApplication=_didOpenAnotherApplication - In the implementation block
@property (assign,nonatomic,__weak) id<GADOpenerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * navigationURL;                                              //@synthesize navigationURL=_navigationURL - In the implementation block
@property (assign,getter=isAutoClickProtected,nonatomic) BOOL autoClickProtected;                 //@synthesize autoClickProtected=_autoClickProtected - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedStoreProductViewController;              //@synthesize cachedStoreProductViewController=_cachedStoreProductViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openApp:(id)arg1 ;
-(BOOL)didOpenAnotherApplication;
-(void)setDidOpenAnotherApplication:(BOOL)arg1 ;
-(NSString *)navigationURL;
-(BOOL)shouldPerformOpenAction;
-(void)didOpenInApp;
-(NSMutableDictionary *)cachedStoreProductViewController;
-(BOOL)canOpenContent:(id)arg1 ;
-(void)configureOverlay:(id)arg1 orientations:(unsigned long long)arg2 usingCustomClose:(BOOL)arg3 ;
-(void)disableAutoCollapseForResize;
-(id)overlayWithOrientations:(unsigned long long)arg1 useCustomClose:(BOOL)arg2 ;
-(id)confirmationMessageForURL:(id)arg1 ;
-(void)confirmClickToURL:(id)arg1 message:(id)arg2 ;
-(void)didOpenExternalApp;
-(void)presentComposerController:(id)arg1 ;
-(void)openInAppStore:(id)arg1 fallbackURL:(id)arg2 ;
-(void)setCachedStoreProductViewController:(NSMutableDictionary *)arg1 ;
-(BOOL)isAutoClickProtected;
-(void)setAutoClickProtected:(BOOL)arg1 ;
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
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)setDelegate:(id<GADOpenerDelegate>)arg1 ;
-(id)init;
-(id<GADOpenerDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(GADWebView *)webView;
-(void)setWebView:(GADWebView *)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)setSlot:(GADSlot *)arg1 ;
-(void)didOpen;
-(void)setReferringURL:(NSURL *)arg1 ;
-(NSURL *)referringURL;
@end

