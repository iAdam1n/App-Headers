/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SportyTrader/SKStoreProductViewControllerDelegate.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol ANBrowserViewControllerDelegate;
@class UIToolbar, UIBarButtonItem, UIView, NSLayoutConstraint, NSURL, UIWebView, UIPopoverController, SKStoreProductViewController, NSOperation, NSString;

@interface ANBrowserViewController : UIViewController <SKStoreProductViewControllerDelegate, UIWebViewDelegate, UIActionSheetDelegate> {

	BOOL _delayPresentationForLoad;
	BOOL _completedInitialLoad;
	BOOL _loading;
	BOOL _presented;
	BOOL _presenting;
	BOOL _dismissing;
	BOOL _userDidDismiss;
	BOOL _receivedInitialRequest;
	UIToolbar* _toolbar;
	UIBarButtonItem* _forwardButton;
	UIBarButtonItem* _backButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _openInButton;
	UIBarButtonItem* _refreshButton;
	UIView* _webViewContainerView;
	NSLayoutConstraint* _containerViewSuperviewTopConstraint;
	NSURL* _url;
	id<ANBrowserViewControllerDelegate> _delegate;
	UIWebView* _webView;
	UIBarButtonItem* _refreshIndicatorItem;
	UIPopoverController* _activityPopover;
	SKStoreProductViewController* _iTunesStoreController;
	NSOperation* _postPresentingOperation;
	NSOperation* _postDismissingOperation;

}

@property (assign,nonatomic,__weak) UIToolbar * toolbar;                                                   //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * forwardButton;                                       //@synthesize forwardButton=_forwardButton - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * backButton;                                          //@synthesize backButton=_backButton - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * doneButton;                                          //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * openInButton;                                        //@synthesize openInButton=_openInButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * refreshButton;                                              //@synthesize refreshButton=_refreshButton - In the implementation block
@property (assign,nonatomic,__weak) UIView * webViewContainerView;                                         //@synthesize webViewContainerView=_webViewContainerView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * containerViewSuperviewTopConstraint;              //@synthesize containerViewSuperviewTopConstraint=_containerViewSuperviewTopConstraint - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                                  //@synthesize url=_url - In the implementation block
@property (assign,nonatomic,__weak) id<ANBrowserViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL delayPresentationForLoad;                                              //@synthesize delayPresentationForLoad=_delayPresentationForLoad - In the implementation block
@property (assign,nonatomic) BOOL completedInitialLoad;                                                    //@synthesize completedInitialLoad=_completedInitialLoad - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                                //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                                          //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * refreshIndicatorItem;                                       //@synthesize refreshIndicatorItem=_refreshIndicatorItem - In the implementation block
@property (nonatomic,retain) UIPopoverController * activityPopover;                                        //@synthesize activityPopover=_activityPopover - In the implementation block
@property (nonatomic,retain) SKStoreProductViewController * iTunesStoreController;                         //@synthesize iTunesStoreController=_iTunesStoreController - In the implementation block
@property (assign,getter=isPresented,nonatomic) BOOL presented;                                            //@synthesize presented=_presented - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                                          //@synthesize presenting=_presenting - In the implementation block
@property (assign,getter=isDismissing,nonatomic) BOOL dismissing;                                          //@synthesize dismissing=_dismissing - In the implementation block
@property (nonatomic,retain) NSOperation * postPresentingOperation;                                        //@synthesize postPresentingOperation=_postPresentingOperation - In the implementation block
@property (nonatomic,retain) NSOperation * postDismissingOperation;                                        //@synthesize postDismissingOperation=_postDismissingOperation - In the implementation block
@property (assign,nonatomic) BOOL userDidDismiss;                                                          //@synthesize userDidDismiss=_userDidDismiss - In the implementation block
@property (assign,nonatomic) BOOL receivedInitialRequest;                                                  //@synthesize receivedInitialRequest=_receivedInitialRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBackButton:(UIBarButtonItem *)arg1 ;
-(void)setForwardButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)forwardButton;
-(void)closeAction:(id)arg1 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 delayPresentationForLoad:(BOOL)arg3 ;
-(BOOL)completedInitialLoad;
-(void)resetBrowser;
-(void)refreshButtons;
-(void)addWebViewToContainerView;
-(void)setupToolbar;
-(SKStoreProductViewController *)iTunesStoreController;
-(void)setCompletedInitialLoad:(BOOL)arg1 ;
-(void)setReceivedInitialRequest:(BOOL)arg1 ;
-(UIBarButtonItem *)openInButton;
-(NSLayoutConstraint *)containerViewSuperviewTopConstraint;
-(void)setUserDidDismiss:(BOOL)arg1 ;
-(void)rootViewControllerShouldDismissPresentedViewController;
-(void)setActivityPopover:(UIPopoverController *)arg1 ;
-(UIPopoverController *)activityPopover;
-(void)rootViewControllerShouldPresentViewController:(id)arg1 ;
-(BOOL)userDidDismiss;
-(BOOL)isDismissing;
-(void)setPostDismissingOperation:(NSOperation *)arg1 ;
-(void)setPresented:(BOOL)arg1 ;
-(void)setPostPresentingOperation:(NSOperation *)arg1 ;
-(void)setDismissing:(BOOL)arg1 ;
-(NSOperation *)postPresentingOperation;
-(NSOperation *)postDismissingOperation;
-(UIView *)webViewContainerView;
-(void)loadAndPresentStoreControllerWithiTunesId:(id)arg1 ;
-(BOOL)delayPresentationForLoad;
-(void)rootViewControllerShouldPresentBrowserViewController;
-(BOOL)receivedInitialRequest;
-(void)updateLoadingStateForStartLoad;
-(void)updateLoadingStateForFinishLoad;
-(void)loadingStateDidChangeFromOldValue:(BOOL)arg1 toNewValue:(BOOL)arg2 ;
-(void)refreshToolbarActivityIndicator;
-(UIBarButtonItem *)refreshIndicatorItem;
-(void)setITunesStoreController:(SKStoreProductViewController *)arg1 ;
-(void)presentStoreViewController;
-(void)rootViewControllerShouldPresentStoreViewController;
-(void)forwardAction:(id)arg1 ;
-(void)backAction:(id)arg1 ;
-(void)openInAction:(id)arg1 ;
-(void)setOpenInButton:(UIBarButtonItem *)arg1 ;
-(void)setWebViewContainerView:(UIView *)arg1 ;
-(void)setContainerViewSuperviewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRefreshIndicatorItem:(UIBarButtonItem *)arg1 ;
-(void)refresh:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ANBrowserViewControllerDelegate>)arg1 ;
-(id<ANBrowserViewControllerDelegate>)delegate;
-(NSURL *)url;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)setPresenting:(BOOL)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(BOOL)isLoading;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)stopLoading;
-(BOOL)isPresented;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)setRefreshButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)refreshButton;
-(BOOL)isPresenting;
-(void)setLoading:(BOOL)arg1 ;
-(UIBarButtonItem *)backButton;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

