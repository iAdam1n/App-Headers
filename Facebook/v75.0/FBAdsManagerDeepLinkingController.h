/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAdsManagerAsyncKeychainReader, FBAdsManagerDeepLinkingContext, FBAdsManagerManagerAdsDeepLinkingContext, FBUserSession;

@interface FBAdsManagerDeepLinkingController : NSObject {

	FBAdsManagerAsyncKeychainReader* _amaKeychainReader;
	FBAdsManagerDeepLinkingContext* _amaDeepLinkingContext;
	FBAdsManagerManagerAdsDeepLinkingContext* _managerAdsDeepLinkingContext;
	FBUserSession* _session;
	BOOL _hasAMAInstalled;

}

@property (assign) BOOL hasAMAInstalled;              //@synthesize hasAMAInstalled=_hasAMAInstalled - In the implementation block
-(BOOL)shouldRedirectToAdsManagerAppFrom:(id)arg1 ;
-(void)performRedirectFrom:(id)arg1 ;
-(void)_updateHasAMAInstalledStatus;
-(void)setHasAMAInstalled:(BOOL)arg1 ;
-(BOOL)shouldRedirectToAdsManagerAppFromNotification;
-(BOOL)shouldRedirectToAdsManagerAppFromBookmark;
-(BOOL)shouldRedirectToAdsManagerAppFromManagerAds;
-(BOOL)shouldRedirectToAdsManagerAppFromPMABookmark;
-(BOOL)canRedirect;
-(BOOL)canRedirectWithoutLogin;
-(BOOL)hasAMAInstalled;
-(BOOL)_hasSameLoggedInUser;
-(void)performRedirect;
-(BOOL)_hasLoggedInUser;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
@end
