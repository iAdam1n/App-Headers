/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <AngryBirdsClassic/FBSDKGameRequestDialogDelegate.h>
#import <AngryBirdsClassic/FBSDKAppInviteDialogDelegate.h>
#import <AngryBirdsClassic/BaseSocialService.h>

@class NSMutableDictionary, NSString, NSArray, UIColor, FBSDKLoginManager, NSDictionary;

@interface FacebookService : NSObject <FBSDKGameRequestDialogDelegate, FBSDKAppInviteDialogDelegate, BaseSocialService> {

	NSMutableDictionary* _inviteHandlers;
	NSString* _serviceName;
	NSString* _displayName;
	NSString* _preferredAccount;
	NSArray* _cachedAccounts;
	UIColor* _brandColor;
	FBSDKLoginManager* _loginManager;
	NSDictionary* _userParams;

}

@property (nonatomic,retain) NSArray * cachedAccounts;                      //@synthesize cachedAccounts=_cachedAccounts - In the implementation block
@property (nonatomic,retain) NSDictionary * userParams;                     //@synthesize userParams=_userParams - In the implementation block
@property (nonatomic,retain) FBSDKLoginManager * loginManager;              //@synthesize loginManager=_loginManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * serviceName;                 //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * preferredAccount;                     //@synthesize preferredAccount=_preferredAccount - In the implementation block
@property (nonatomic,readonly) UIColor * brandColor;                        //@synthesize brandColor=_brandColor - In the implementation block
+(BOOL)isCompatibleWithFacebookSdk;
+(void)didFinishLaunchingNotification:(id)arg1 ;
+(id)facebookAvatarImageURLFromUserId:(id)arg1 large:(BOOL)arg2 ;
+(int)sharingTypeFromAction:(id)arg1 ;
+(id)serviceName;
+(void)load;
+(BOOL)isAvailable;
+(void)setClientSecret:(id)arg1 ;
-(void)gameRequestDialog:(id)arg1 didFailWithError:(id)arg2 ;
-(void)gameRequestDialogDidCancel:(id)arg1 ;
-(void)gameRequestDialog:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)appInviteDialog:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)appInviteDialog:(id)arg1 didFailWithError:(id)arg2 ;
-(void)getUserProfile:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getFriends:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPreferredAccount:(NSString *)arg1 ;
-(NSString *)preferredAccount;
-(BOOL)isLoggedIn;
-(void)setCachedAccounts:(NSArray *)arg1 ;
-(BOOL)onOpenUrl:(id)arg1 appLinkData:(AppLinkData*)arg2 sourceApplication:(id)arg3 ;
-(void)onActivate:(BOOL)arg1 ;
-(void)loginWithParams:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportMultipleAccounts;
-(BOOL)isAccountAvailable;
-(void)accessAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)cachedAccounts;
-(UIColor *)brandColor;
-(void)parseUrl:(id)arg1 toAppLinkData:(AppLinkData*)arg2 ;
-(FBSDKLoginManager *)loginManager;
-(void)share:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendAppRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendAppInviteRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)makeGetUserProfileResponse:(id)arg1 error:(id)arg2 ;
-(BOOL)hasPublishPermission;
-(void)invokeSocialServiceRequestHandler:(/*^block*/id)arg1 withResult:(id)arg2 error:(id)arg3 ;
-(void)startShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)shareVideoRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)shareScoreRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)shareLinkRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)shareStatusRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)applyCustomParams:(id)arg1 toContent:(id)arg2 ;
-(void)invokeGameRequestHandlerForDialog:(id)arg1 results:(id)arg2 cancelled:(BOOL)arg3 error:(id)arg4 ;
-(void)invokeAppInviteRequestHandlerForDialog:(id)arg1 results:(id)arg2 cancelled:(BOOL)arg3 error:(id)arg4 ;
-(id)sharingResultFromResult:(id)arg1 ;
-(void)setLoginManager:(FBSDKLoginManager *)arg1 ;
-(NSDictionary *)userParams;
-(void)setUserParams:(NSDictionary *)arg1 ;
-(NSString *)serviceName;
-(void)dealloc;
-(id)init;
-(void)unregister;
-(NSString *)displayName;
-(void)logout;
@end
