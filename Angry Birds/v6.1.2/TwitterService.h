/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <AngryBirdsClassic/BaseSocialService.h>

@class NSString, UIColor, NSArray, ACAccountStore, ACAccountType, NSMutableDictionary;

@interface TwitterService : NSObject <BaseSocialService> {

	BOOL _loggedIn;
	NSString* _serviceName;
	NSString* _displayName;
	NSString* _preferredAccount;
	UIColor* _brandColor;
	NSArray* _cachedAccounts;
	NSString* _requestServiceType;
	ACAccountStore* _accountStore;
	ACAccountType* _accountType;
	NSString* _keyLoggedIn;
	NSString* _keyPreferredAccount;
	NSString* _statusesUpdateAPI;
	NSString* _friendsAPI;
	NSMutableDictionary* _userProfiles;

}

@property (nonatomic,readonly) NSString * requestServiceType;                 //@synthesize requestServiceType=_requestServiceType - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                 //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) ACAccountType * accountType;                   //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,readonly) NSString * keyLoggedIn;                        //@synthesize keyLoggedIn=_keyLoggedIn - In the implementation block
@property (nonatomic,readonly) NSString * keyPreferredAccount;                //@synthesize keyPreferredAccount=_keyPreferredAccount - In the implementation block
@property (nonatomic,readonly) NSString * statusesUpdateAPI;                  //@synthesize statusesUpdateAPI=_statusesUpdateAPI - In the implementation block
@property (nonatomic,readonly) NSString * friendsAPI;                         //@synthesize friendsAPI=_friendsAPI - In the implementation block
@property (assign,getter=isLoggedIn,nonatomic) BOOL loggedIn;                 //@synthesize loggedIn=_loggedIn - In the implementation block
@property (nonatomic,retain) NSArray * cachedAccounts;                        //@synthesize cachedAccounts=_cachedAccounts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userProfiles;              //@synthesize userProfiles=_userProfiles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * serviceName;                   //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * preferredAccount;                       //@synthesize preferredAccount=_preferredAccount - In the implementation block
@property (nonatomic,readonly) UIColor * brandColor;                          //@synthesize brandColor=_brandColor - In the implementation block
+(id)serviceName;
+(BOOL)isAvailable;
-(void)updateUserDefaults;
-(void)updatePreferredAccount:(id)arg1 ;
-(void)setLoggedIn:(BOOL)arg1 ;
-(void)setPreferredAccount:(NSString *)arg1 ;
-(NSString *)preferredAccount;
-(BOOL)isLoggedIn;
-(void)setCachedAccounts:(NSArray *)arg1 ;
-(void)share:(id)arg1 response:(id)arg2 toAccount:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getFriends:(id)arg1 response:(id)arg2 toAccount:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)userProfiles;
-(id)createUserProfile:(id)arg1 ;
-(NSString *)statusesUpdateAPI;
-(NSString *)requestServiceType;
-(NSString *)friendsAPI;
-(NSString *)keyLoggedIn;
-(NSString *)keyPreferredAccount;
-(void)onActivate:(BOOL)arg1 ;
-(void)loginWithParams:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportMultipleAccounts;
-(BOOL)isAccountAvailable;
-(void)accessAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)cachedAccounts;
-(UIColor *)brandColor;
-(BOOL)onOpenUrl:(id)arg1 appLinkData:(AppLinkData*)arg2 ;
-(void)getUserProfile:(id)arg1 response:(id)arg2 toAccount:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setUserProfiles:(NSMutableDictionary *)arg1 ;
-(NSString *)serviceName;
-(void)dealloc;
-(id)init;
-(void)unregister;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)displayName;
-(ACAccountStore *)accountStore;
-(void)logout;
-(ACAccountType *)accountType;
@end
