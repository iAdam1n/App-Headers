/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SLKDependencies;

@interface SLKLocalHandler : NSObject {

	SLKDependencies* _dependencies;

}

@property (assign,nonatomic,__weak) SLKDependencies * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
+(BOOL)isChromeInstalled;
+(BOOL)isOnePasswordInstalled;
+(BOOL)isTwitterInstalled;
+(BOOL)isTweetbotInstalled;
+(BOOL)isTwitterrificInstalled;
+(BOOL)isGoogleDriveInstalled;
+(BOOL)isSkypeInstalled;
+(BOOL)isGoogleAuthenticatorInstalled;
+(BOOL)isDuoMobileInstalled;
+(BOOL)isAuthyInstalled;
+(void)openGoogleAuthenticator;
+(void)openDuoMobile;
+(void)openAuthy;
+(BOOL)handleDeepLink:(id)arg1 teamId:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)handleDeepLink:(id)arg1 teamId:(id)arg2 ;
+(id)webViewControllerForURL:(id)arg1 ;
-(id)initWithDependencies:(id)arg1 ;
-(BOOL)handleLink:(id)arg1 ;
-(BOOL)handleURLInChrome:(id)arg1 ;
-(void)openHelpURL;
-(BOOL)handleLinkRef:(id)arg1 ;
-(BOOL)openURLInChrome:(id)arg1 ;
-(BOOL)openURLInOnePassword:(id)arg1 ;
-(BOOL)openURLInApp:(id)arg1 ;
-(BOOL)presentWebViewController:(id)arg1 fromNavigationController:(id)arg2 ;
-(BOOL)openURLInTwitter:(id)arg1 ;
-(BOOL)openURLInTweetbot:(id)arg1 ;
-(BOOL)openURLInTwitterrific:(id)arg1 ;
-(id)nonSupportedDomains;
-(BOOL)isCurrentTeamFileURL:(id)arg1 ;
-(BOOL)handleCurrentTeamFileURL:(id)arg1 ;
-(BOOL)isSlackArchive:(id)arg1 ;
-(BOOL)handleArchiveURL:(id)arg1 ;
-(BOOL)canUseInAppBrowserForURL:(id)arg1 ;
-(BOOL)handleURLInSafari:(id)arg1 ;
-(BOOL)handleURL:(id)arg1 inWebBrowser:(unsigned long long)arg2 ;
-(BOOL)isSlackURL:(id)arg1 ;
-(void)tokenizedURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)presentFile:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)openURL:(id)arg1 inTwitterBrowser:(unsigned long long)arg2 ;
-(BOOL)openURL:(id)arg1 inWebBrowser:(unsigned long long)arg2 ;
-(BOOL)openURLInGoogleDrive:(id)arg1 ;
-(BOOL)handleFileId:(id)arg1 ;
-(void)dismissDrawer;
-(BOOL)showUserGroupViewControllerforLink:(id)arg1 ;
-(BOOL)handleFile:(id)arg1 ;
-(id)cleanURLString:(id)arg1 ;
-(id)viewControllerForLinkRef:(id)arg1 ;
-(BOOL)handleFileId:(id)arg1 showComments:(BOOL)arg2 ;
-(BOOL)handleFile:(id)arg1 showComments:(BOOL)arg2 ;
-(id)viewControllerForLinkRef:(id)arg1 withInAppBrowser:(BOOL)arg2 ;
-(BOOL)handleURLInApp:(id)arg1 ;
-(BOOL)shouldShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)switchTeamWithDeepLink:(id)arg1 teamId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)handleGenericObject:(id)arg1 ;
-(BOOL)handleImageFileId:(id)arg1 ;
-(BOOL)presentGenericObject:(id)arg1 animated:(BOOL)arg2 ;
-(SLKDependencies *)dependencies;
-(BOOL)openURL:(id)arg1 ;
-(BOOL)handleURL:(id)arg1 ;
-(BOOL)handleFileURL:(id)arg1 ;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end

