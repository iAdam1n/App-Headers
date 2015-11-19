/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIButton, UIActivityIndicatorView, UIView, UIBarButtonItem, UIWebView, GTMOAuth2SignIn, NSURLRequest, NSString, NSURL, NSMutableDictionary, NSArray, GTMOAuth2Authentication, NSDictionary;

@interface GTMOAuth2ViewControllerTouch : UIViewController <UINavigationControllerDelegate, UIWebViewDelegate> {

	UIButton* backButton_;
	UIButton* forwardButton_;
	UIActivityIndicatorView* initialActivityIndicator_;
	UIView* navButtonsView_;
	UIBarButtonItem* rightBarButtonItem_;
	UIWebView* webView_;
	GTMOAuth2SignIn* signIn_;
	NSURLRequest* request_;
	id delegate_;
	SEL finishedSelector_;
	/*^block*/id completionBlock_;
	/*^block*/id popViewBlock_;
	NSString* keychainItemName_;
	void* keychainItemAccessibility_;
	NSString* initialHTMLString_;
	int mustShowActivityIndicator_;
	NSURL* browserCookiesURL_;
	id userData_;
	NSMutableDictionary* properties_;
	BOOL isViewShown_;
	BOOL didViewAppear_;
	BOOL hasNotifiedWebViewStartedLoading_;
	BOOL hasCalledFinished_;
	BOOL hasDoneFinalRedirect_;
	BOOL didDismissSelf_;
	unsigned long long savedCookiePolicy_;
	NSArray* systemCookies_;
	NSArray* signInCookies_;

}

@property (nonatomic,copy) NSString * keychainItemName; 
@property (assign,nonatomic) void* keychainItemAccessibility; 
@property (nonatomic,copy) NSString * initialHTMLString; 
@property (assign,nonatomic) BOOL showsInitialActivityIndicator; 
@property (nonatomic,retain,readonly) GTMOAuth2Authentication * authentication; 
@property (nonatomic,retain,readonly) GTMOAuth2SignIn * signIn; 
@property (nonatomic,retain) UIButton * backButton; 
@property (nonatomic,retain) UIButton * forwardButton; 
@property (nonatomic,retain) UIActivityIndicatorView * initialActivityIndicator; 
@property (nonatomic,retain) UIView * navButtonsView; 
@property (nonatomic,retain) UIBarButtonItem * rightBarButtonItem; 
@property (nonatomic,retain) UIWebView * webView; 
@property (nonatomic,copy) id popViewBlock; 
@property (assign,nonatomic) double networkLossTimeoutInterval; 
@property (nonatomic,retain) NSURL * browserCookiesURL; 
@property (nonatomic,retain) id userData; 
@property (nonatomic,retain) NSDictionary * properties; 
@property (nonatomic,copy) NSURLRequest * request; 
@property (nonatomic,copy) NSArray * systemCookies; 
@property (nonatomic,copy) NSArray * signInCookies; 
+(void)revokeTokenForGoogleAuthentication:(id)arg1 ;
+(Class)signInClass;
+(id)authNibName;
+(id)authNibBundle;
+(id)authForGoogleFromKeychainForName:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 error:(id*)arg4 ;
+(BOOL)authorizeFromKeychainForName:(id)arg1 authentication:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveParamsToKeychainForName:(id)arg1 accessibility:(void*)arg2 authentication:(id)arg3 error:(id*)arg4 ;
+(BOOL)removeAuthFromKeychainForName:(id)arg1 ;
+(id)controllerWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 delegate:(id)arg5 finishedSelector:(SEL)arg6 ;
+(id)controllerWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)controllerWithAuthentication:(id)arg1 authorizationURL:(id)arg2 keychainItemName:(id)arg3 delegate:(id)arg4 finishedSelector:(SEL)arg5 ;
+(id)controllerWithAuthentication:(id)arg1 authorizationURL:(id)arg2 keychainItemName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)authForGoogleFromKeychainForName:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 ;
+(BOOL)saveParamsToKeychainForName:(id)arg1 authentication:(id)arg2 ;
+(void)setSignInClass:(Class)arg1 ;
-(void)setForwardButton:(UIButton *)arg1 ;
-(UIButton *)forwardButton;
-(GTMOAuth2Authentication *)authentication;
-(void)cancelSigningIn;
-(double)networkLossTimeoutInterval;
-(void)setNetworkLossTimeoutInterval:(double)arg1 ;
-(id)initWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 delegate:(id)arg5 finishedSelector:(SEL)arg6 ;
-(id)initWithAuthentication:(id)arg1 authorizationURL:(id)arg2 keychainItemName:(id)arg3 delegate:(id)arg4 finishedSelector:(SEL)arg5 ;
-(id)initWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)signIn:(id)arg1 displayRequest:(id)arg2 ;
-(void)signIn:(id)arg1 finishedWithAuth:(id)arg2 error:(id)arg3 ;
-(void)setKeychainItemName:(NSString *)arg1 ;
-(id)initWithAuthentication:(id)arg1 authorizationURL:(id)arg2 keychainItemName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setUpNavigation;
-(id)popViewBlock;
-(void)setPopViewBlock:(id)arg1 ;
-(GTMOAuth2SignIn *)signIn;
-(NSArray *)signInCookies;
-(id)swapBrowserCookies:(id)arg1 ;
-(void)setSystemCookies:(NSArray *)arg1 ;
-(NSArray *)systemCookies;
-(void)setSignInCookies:(NSArray *)arg1 ;
-(NSString *)keychainItemName;
-(NSString *)initialHTMLString;
-(void)popView;
-(BOOL)shouldUseKeychain;
-(void*)keychainItemAccessibility;
-(void)saveBrowserCookies;
-(BOOL)isNavigationBarTranslucent;
-(void)moveWebViewFromUnderNavigationBar;
-(BOOL)isBeingObscured:(id)arg1 ;
-(void)notifyWithName:(id)arg1 webView:(id)arg2 kind:(id)arg3 ;
-(void)restoreBrowserCookies;
-(void)setInitialHTMLString:(NSString *)arg1 ;
-(BOOL)showsInitialActivityIndicator;
-(void)setShowsInitialActivityIndicator:(BOOL)arg1 ;
-(UIView *)navButtonsView;
-(void)setNavButtonsView:(UIView *)arg1 ;
-(UIActivityIndicatorView *)initialActivityIndicator;
-(void)setInitialActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setKeychainItemAccessibility:(void*)arg1 ;
-(NSURL *)browserCookiesURL;
-(void)setBrowserCookiesURL:(NSURL *)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(NSURLRequest *)request;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)rightBarButtonItem;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)userData;
-(void)setUserData:(id)arg1 ;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)setBackButton:(UIButton *)arg1 ;
-(void)updateUI;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(UIButton *)backButton;
@end

