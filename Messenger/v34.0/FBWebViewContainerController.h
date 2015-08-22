/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBWebViewControllerDelegate.h>
#import <Messenger/FBWebPivotsToolbarViewControllerDelegate.h>
#import <Messenger/FBPopoverControllerDelegate.h>
#import <Messenger/FBNuxBannerControllerDelegate.h>
#import <Messenger/FBModalContentViewController.h>
#import <Messenger/FBBrowserNavigationTitleViewDelegate.h>

@protocol FBNuxBannerViewController, FBWebViewContainerControllerDelegate, FBWebViewContainerControllerBannerProvider;
@class FBUserSession, FBWebPivotsContainerView, NSURL, FBPopoverActionSheet, FBPopoverController, FBPopoverInfo, UIViewController, FBSavedUrlNuxManager, FBComposerPrivacySetting, FBShareUFIOptionsExperimentContext, FBInappBrowserTitleURLExperimentContext, UIView, FBWebViewController, FBWebPivotsToolbarViewController, NSString;

@interface FBWebViewContainerController : UIViewController <FBWebViewControllerDelegate, FBWebPivotsToolbarViewControllerDelegate, FBPopoverControllerDelegate, FBNuxBannerControllerDelegate, FBModalContentViewController, FBBrowserNavigationTitleViewDelegate> {

	FBUserSession* _session;
	FBWebPivotsContainerView* _containerView;
	NSURL* _loadedUrl;
	FBPopoverActionSheet* _popoverActionSheet;
	FBPopoverController* _popoverSecurityController;
	FBPopoverInfo* _popoverInfo;
	long long _shareLinkButtonIndex;
	UIViewController*<FBNuxBannerViewController> _bannerViewController;
	FBSavedUrlNuxManager* _savedUrlNuxManager;
	FBComposerPrivacySetting* _shareNowPrivacySetting;
	FBShareUFIOptionsExperimentContext* _ufiOptionsExperimentContext;
	FBInappBrowserTitleURLExperimentContext* _titleURLExperimentContext;
	BOOL _popoverSecurityControllerIsHiddenForRotate;
	BOOL _popoverActionSheetIsHiddenForRotate;
	UIView* _clickedView;
	BOOL _tabBarEnabled;
	id<FBWebViewContainerControllerDelegate> _delegate;
	id<FBWebViewContainerControllerBannerProvider> _bannerProvider;
	FBWebViewController* _webViewController;
	FBWebPivotsToolbarViewController* _webPivotsToolbarViewController;
	unsigned long long _toolbarStyle;
	unsigned long long _excludedShareMenuOptions;

}

@property (assign,nonatomic,__weak) id<FBWebViewContainerControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBWebViewContainerControllerBannerProvider> bannerProvider;                  //@synthesize bannerProvider=_bannerProvider - In the implementation block
@property (nonatomic,retain) FBWebViewController * webViewController;                                        //@synthesize webViewController=_webViewController - In the implementation block
@property (nonatomic,retain) FBWebPivotsToolbarViewController * webPivotsToolbarViewController;              //@synthesize webPivotsToolbarViewController=_webPivotsToolbarViewController - In the implementation block
@property (assign,nonatomic) unsigned long long toolbarStyle;                                                //@synthesize toolbarStyle=_toolbarStyle - In the implementation block
@property (assign,nonatomic) BOOL tabBarEnabled;                                                             //@synthesize tabBarEnabled=_tabBarEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long excludedShareMenuOptions;                                    //@synthesize excludedShareMenuOptions=_excludedShareMenuOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsDestinationURL;
-(void)setPopoverActionSheet:(id)arg1 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(BOOL)fb_showAuxiliaryViewController;
-(BOOL)fb_showNavBarSearchField;
-(id)headerViewForModalContainerViewController:(id)arg1 ;
-(id)scrollViewForDismissingModalContainerViewController:(id)arg1 ;
-(id<FBWebViewContainerControllerBannerProvider>)bannerProvider;
-(void)_updateBannerViewIfNeeded;
-(void)webViewControllerHistoryChanged:(id)arg1 ;
-(void)webViewController:(id)arg1 webViewTitleChanged:(id)arg2 ;
-(void)webViewController:(id)arg1 webViewURLChanged:(id)arg2 ;
-(void)webViewController:(id)arg1 didStartLoadURL:(id)arg2 ;
-(void)webViewController:(id)arg1 userCanceledLoadURL:(id)arg2 ;
-(BOOL)webViewController:(id)arg1 shouldStartLoadURL:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewController:(id)arg1 didLoadHostString:(id)arg2 ;
-(void)webViewController:(id)arg1 didFinishLoadURL:(id)arg2 ;
-(void)_logTapEventFromActionSheet:(id)arg1 ;
-(void)_logTapEventFromChrome:(id)arg1 ;
-(void)_removeBannerAndBannerController:(id)arg1 ;
-(void)_setBannerViewController:(id)arg1 ;
-(void)nuxBannerControllerDidDismissBanner:(id)arg1 ;
-(BOOL)fb_hidesTabBar;
-(void)navigationTitleViewSubtitleClicked:(id)arg1 ;
-(void)setWebPivotsToolbarViewController:(FBWebPivotsToolbarViewController *)arg1 ;
-(void)setToolbarStyle:(unsigned long long)arg1 ;
-(void)_didTapBackBarButton;
-(BOOL)tabBarEnabled;
-(void)_addWebViewController:(id)arg1 ;
-(void)_addWebPivotsToolbarViewController:(id)arg1 ;
-(void)_addBannerViewFromBannerProvider:(id)arg1 ;
-(FBWebPivotsToolbarViewController *)webPivotsToolbarViewController;
-(unsigned long long)toolbarStyle;
-(void)_didSelectShareButton:(id)arg1 event:(id)arg2 ;
-(void)_presentSecuritySheetFromView:(id)arg1 ;
-(void)_presentActionSheetFromView:(id)arg1 ;
-(void)_addBannerViewController:(id)arg1 ;
-(void)_dismissPresentedViewController;
-(BOOL)_shouldDisplayFullMode;
-(BOOL)_shouldShowShareNow:(id)arg1 ;
-(void)_shareNowFromButtonItem:(id)arg1 ;
-(id)_titleForShareNowButtonItem;
-(id)_detailForShareNowButtonItem;
-(void)_shareInNewPostFromButtonItem:(id)arg1 ;
-(void)_sendInMessageFromButtonItem:(id)arg1 ;
-(void)_copyLinkFromButtonItem:(id)arg1 ;
-(void)_openInSafariFromButtonItem:(id)arg1 ;
-(void)_saveLinkViaGraphAPI:(id)arg1 ;
-(id)_actionSheetButtonItems;
-(void)_browserSecuritySheetContentViewClicked;
-(void)webPivotsToolbarViewControllerDidSelectBackButton:(id)arg1 ;
-(void)webPivotsToolbarViewControllerDidSelectForwardButton:(id)arg1 ;
-(void)webPivotsToolbarViewControllerDidSelectShareButton:(id)arg1 ;
-(void)webPivotsToolbarViewControllerDidSelectCloseButton:(id)arg1 ;
-(void)webPivotsToolbarViewControllerDidSelectToolbarBackground:(id)arg1 ;
-(void)webPivotsToolbarViewControllerDidSelectSubtitleButton:(id)arg1 ;
-(SEL)fb_actionForBackArrowButton;
-(void)setBannerProvider:(id<FBWebViewContainerControllerBannerProvider>)arg1 ;
-(void)setTabBarEnabled:(BOOL)arg1 ;
-(unsigned long long)excludedShareMenuOptions;
-(void)setExcludedShareMenuOptions:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBWebViewContainerControllerDelegate>)arg1 ;
-(id)init;
-(id<FBWebViewContainerControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(FBWebViewController *)webViewController;
-(void)setWebViewController:(FBWebViewController *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)loadURL:(id)arg1 ;
@end
