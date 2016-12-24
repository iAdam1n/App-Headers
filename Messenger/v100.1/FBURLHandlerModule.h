/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/SFSafariViewControllerDelegate.h>
#import <Messenger/FBAppModule.h>
#import <Messenger/FBForceTouchConfiguringModule.h>
#import <Messenger/FBIntentHandlerConfiguringModule.h>
#import <Messenger/FBNavigationURLHandler.h>
#import <Messenger/FBURLSegueConfiguringModule.h>
#import <Messenger/FBPluginProvider.h>
#import <Messenger/FBMinimizedTabBarWebViewProvider.h>

@protocol FBIntentHandler;
@class FBUserSession, FBURLHandlerWebViewProvider, SFSafariViewController, FBBrowserLayoutConfig, NSString, FBExceptionHandler;

@interface FBURLHandlerModule : NSObject <SFSafariViewControllerDelegate, FBAppModule, FBForceTouchConfiguringModule, FBIntentHandlerConfiguringModule, FBNavigationURLHandler, FBURLSegueConfiguringModule, FBPluginProvider, FBMinimizedTabBarWebViewProvider> {

	FBUserSession* _session;
	FBURLHandlerWebViewProvider* _webViewProvider;
	SFSafariViewController* _ssoSafariViewController;
	id<FBIntentHandler> _intentHandler;

}

@property (assign,nonatomic,__weak) id<FBIntentHandler> intentHandler;                 //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,retain) FBBrowserLayoutConfig * browserLayoutConfig; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBExceptionHandler * exceptionHandler; 
+(id)intentHandlers:(id)arg1 providerMap:(id)arg2 ;
+(id)URLSegues:(id)arg1 ;
+(id)pluginConfigurationsWithSession:(id)arg1 ;
+(id)instanceForSession:(id)arg1 providerMap:(id)arg2 ;
+(id)forceTouchHandlers:(id)arg1 ;
-(id<FBIntentHandler>)intentHandler;
-(void)setIntentHandler:(id<FBIntentHandler>)arg1 ;
-(BOOL)shouldRedirectFromBookmarkForMenuItem:(id)arg1 ;
-(void)performRedirectFromBookmarkForMenuItem:(id)arg1 ;
-(BOOL)_shouldShowRapidFeedbackSurveyForHost:(id)arg1 ;
-(void)cleanUpSSOSafariViewControllerAndDismiss:(BOOL)arg1 ;
-(BOOL)performFBSSORedirectToURL:(id)arg1 navigationCoordinator:(id)arg2 ;
-(FBBrowserLayoutConfig *)browserLayoutConfig;
-(void)setBrowserLayoutConfig:(FBBrowserLayoutConfig *)arg1 ;
-(id)URLSegues;
-(id)supportedURLSchemes;
-(id)viewControllerForMenuItem:(id)arg1 ;
-(id)supportedKeys;
-(BOOL)shouldClearBookmarkCountOnTap;
-(BOOL)handleMenuItem:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 ;
-(BOOL)handleURL:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 completion:(/*^block*/id)arg5 whenClosed:(/*^block*/id)arg6 animated:(BOOL)arg7 withNavigationCoordinator:(id)arg8 ;
-(id)webViewControllerForMinimizedURL:(id)arg1 withNavigationCoordinator:(id)arg2 ;
-(BOOL)canOpenURL:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(id)ID;
-(void)setExceptionHandler:(FBExceptionHandler *)arg1 ;
@end
