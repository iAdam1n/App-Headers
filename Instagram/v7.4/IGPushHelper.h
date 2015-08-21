/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGDirectedPostViewControllerDelegate.h>

@class NSMutableArray, NSString;

@interface IGPushHelper : NSObject <IGDirectedPostViewControllerDelegate> {

	NSMutableArray* _cachedFeedItems;
	BOOL _freshAppInstall;

}

@property (assign,getter=isFreshAppInstall,nonatomic) BOOL freshAppInstall;              //@synthesize freshAppInstall=_freshAppInstall - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPushHelper;
-(BOOL)isFreshAppInstall;
-(void)postViewControllerWantsDismissal:(id)arg1 ;
-(id)categoriesForPushNotifications;
-(BOOL)appHasPushPermissions;
-(BOOL)appHasAskedSystemForPushPermissions;
-(BOOL)isTimeToPromptForPushPermissions;
-(id)convertTokenToDeviceID:(id)arg1 ;
-(void)handleBackgroundPushNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleForegroundPushNotification:(id)arg1 ;
-(void)showNotificationBarWithUserInfo:(id)arg1 andPostPK:(id)arg2 ;
-(void)onBackTapped:(id)arg1 ;
-(void)startPushRegistrationWithForce:(BOOL)arg1 ;
-(BOOL)shouldShowPushMegaphone;
-(void)registerForPushWithToken:(id)arg1 ;
-(void)handlePushNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showNotificationBarWithUserInfo:(id)arg1 andThreadId:(id)arg2 ;
-(void)clearFeedItemCache;
-(void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setFreshAppInstall:(BOOL)arg1 ;
-(id)init;
@end

