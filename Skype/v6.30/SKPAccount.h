/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPALEMappedObject.h>

@class NSString, SKPContact, NSDictionary, NSDate, NSArray, UIImage, NSError;

@interface SKPAccount : SKPALEMappedObject {

	BOOL _isLinkedToLiveID;
	NSString* _skypeName;
	long long _status;
	SKPContact* _contact;
	long long _skypeCallPolicy;
	long long _avatarPolicy;
	long long _cblSyncStatus;
	NSDictionary* _loginStatusInfo;
	NSString* _creditCurrency;
	unsigned long long _creditBalance;
	unsigned long long _creditPrecision;
	long long _logoutReason;
	NSDate* _registrationTimestamp;
	long long _loginMode;
	NSString* _accountSignInName;
	NSArray* _hiddenExpressionTabNames;
	NSArray* _accountSubscriptions;
	UIImage* _avatarImageToSetWhenLoggedIn;
	NSString* _hiddenExpressionTabNamesString;

}

@property (nonatomic,retain) SKPContact * contact;                                                 //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSString * creditCurrency;                                            //@synthesize creditCurrency=_creditCurrency - In the implementation block
@property (assign,nonatomic) unsigned long long creditBalance;                                     //@synthesize creditBalance=_creditBalance - In the implementation block
@property (assign,nonatomic) unsigned long long creditPrecision;                                   //@synthesize creditPrecision=_creditPrecision - In the implementation block
@property (assign,nonatomic) BOOL isLinkedToLiveID;                                                //@synthesize isLinkedToLiveID=_isLinkedToLiveID - In the implementation block
@property (nonatomic,copy) NSString * skypeName;                                                   //@synthesize skypeName=_skypeName - In the implementation block
@property (nonatomic,copy) NSString * accountSignInName;                                           //@synthesize accountSignInName=_accountSignInName - In the implementation block
@property (nonatomic,retain) NSArray * accountSubscriptions;                                       //@synthesize accountSubscriptions=_accountSubscriptions - In the implementation block
@property (assign,nonatomic) long long logoutReason;                                               //@synthesize logoutReason=_logoutReason - In the implementation block
@property (nonatomic,retain) UIImage * avatarImageToSetWhenLoggedIn;                               //@synthesize avatarImageToSetWhenLoggedIn=_avatarImageToSetWhenLoggedIn - In the implementation block
@property (nonatomic,retain) NSDate * registrationTimestamp;                                       //@synthesize registrationTimestamp=_registrationTimestamp - In the implementation block
@property (assign,nonatomic) long long loginMode;                                                  //@synthesize loginMode=_loginMode - In the implementation block
@property (assign,nonatomic) long long avatarPolicy;                                               //@synthesize avatarPolicy=_avatarPolicy - In the implementation block
@property (nonatomic,retain) NSArray * hiddenExpressionTabNames;                                   //@synthesize hiddenExpressionTabNames=_hiddenExpressionTabNames - In the implementation block
@property (nonatomic,retain) NSString * hiddenExpressionTabNamesString;                            //@synthesize hiddenExpressionTabNamesString=_hiddenExpressionTabNamesString - In the implementation block
@property (getter=isLoggedIn,nonatomic,readonly) BOOL loggedIn; 
@property (nonatomic,readonly) NSError * loginError; 
@property (nonatomic,readonly) long long status;                                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSString * defaultISOCountryCode; 
@property (nonatomic,readonly) NSString * defaultInternationalPrefix; 
@property (nonatomic,readonly) long long skypeCallPolicy;                                          //@synthesize skypeCallPolicy=_skypeCallPolicy - In the implementation block
@property (nonatomic,readonly) long long cblSyncStatus;                                            //@synthesize cblSyncStatus=_cblSyncStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long progress; 
@property (nonatomic,retain) NSDictionary * loginStatusInfo;                                       //@synthesize loginStatusInfo=_loginStatusInfo - In the implementation block
@property (nonatomic,readonly) NSString * localizedSkypeCreditString; 
@property (nonatomic,readonly) NSString * localizedSkypeCreditStringWithoutSymbol; 
@property (nonatomic,readonly) NSString * localizedSkypeCreditStringForAccessibility; 
@property (nonatomic,readonly) BOOL hasSkypeCredit; 
@property (nonatomic,readonly) NSString * skypeNameHash; 
@property (nonatomic,copy,readonly) NSString * skylibDatabasePath; 
+(id)lazyLoadedPropertiesKeypaths;
+(id)transformValue:(id)arg1 forKeyPath:(id)arg2 wasTransformed:(BOOL*)arg3 ;
+(Class)associatedALEClass;
+(id)keyPathsForValuesAffectingLoggedIn;
+(BOOL)userDidLoginForOldStatus:(long long)arg1 newStatus:(long long)arg2 ;
+(BOOL)userDidLogoutForOldStatus:(long long)arg1 newStatus:(long long)arg2 ;
+(id)keyPathsForValuesAffectingLoginError;
+(id)keyPathsForValuesAffectingNumberOfFreeCalls;
+(id)keyPathsForValuesAffectingHasSkypeCredit;
+(id)keyPathsForValuesAffectingLocalizedSkypeCreditString;
+(id)keyPathsForValuesAffectingSubscriptions;
+(id)propertyMapping;
-(NSString *)skypeName;
-(id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id*)arg2 ;
-(BOOL)flushLazyProperty:(id)arg1 ;
-(void)setAvatarImage:(id)arg1 ;
-(void)willSetValue:(id)arg1 forKey:(id)arg2 andUseMainQueueToSet:(BOOL)arg3 ;
-(id)otherPropertyKeysToIncludeInDebugDescription;
-(void)setPresenceStatus:(long long)arg1 ;
-(NSArray *)hiddenExpressionTabNames;
-(NSString *)skylibDatabasePath;
-(long long)loginMode;
-(void)enableShortCircuitSync;
-(void)addHiddenExpressionTabWithName:(id)arg1 ;
-(void)removeHiddenExpressionTabWithName:(id)arg1 ;
-(void)setLoginMode:(long long)arg1 ;
-(void)setSkypeName:(NSString *)arg1 ;
-(id)fetchContactOperation;
-(void)loadSkypeNameIfNeeded;
-(void)refreshPropertiesAfterLogin;
-(void)setAvatarImageAfterLogin;
-(NSString *)accountSignInName;
-(void)setAccountSignInName:(NSString *)arg1 ;
-(void)setLogoutReason:(long long)arg1 ;
-(BOOL)isLoggedIn;
-(long long)logoutReason;
-(NSString *)defaultISOCountryCode;
-(NSString *)creditCurrency;
-(unsigned long long)creditBalance;
-(unsigned long long)creditPrecision;
-(NSString *)localizedSkypeCreditString;
-(void)setAvatarImageToSetWhenLoggedIn:(UIImage *)arg1 ;
-(UIImage *)avatarImageToSetWhenLoggedIn;
-(void)setAvatarPolicy:(long long)arg1 ;
-(id)initWithAleObject:(id)arg1 loginMode:(long long)arg2 ;
-(void)resetLogoutReason;
-(NSError *)loginError;
-(BOOL)isIntendedToUserInfo:(id)arg1 ;
-(NSString *)defaultInternationalPrefix;
-(NSString *)skypeNameHash;
-(unsigned long long)numberOfFreeCalls;
-(BOOL)hasSkypeCredit;
-(NSString *)localizedSkypeCreditStringWithoutSymbol;
-(NSString *)localizedSkypeCreditStringForAccessibility;
-(id)onlineNumberExpirationDate;
-(void)changeMoodMessage:(id)arg1 ;
-(void)changeFullName:(id)arg1 ;
-(void)changeMobilePhoneNumber:(id)arg1 ;
-(void)changeISOCountryCode:(id)arg1 ;
-(void)setAvatarImagePrivacyPolicyEveryone;
-(void)setAvatarImagePrivacyPolicyContactsOnly;
-(long long)skypeCallPolicy;
-(long long)avatarPolicy;
-(long long)cblSyncStatus;
-(NSDictionary *)loginStatusInfo;
-(void)setLoginStatusInfo:(NSDictionary *)arg1 ;
-(void)setCreditCurrency:(NSString *)arg1 ;
-(void)setCreditBalance:(unsigned long long)arg1 ;
-(void)setCreditPrecision:(unsigned long long)arg1 ;
-(BOOL)isLinkedToLiveID;
-(void)setIsLinkedToLiveID:(BOOL)arg1 ;
-(NSDate *)registrationTimestamp;
-(void)setRegistrationTimestamp:(NSDate *)arg1 ;
-(void)setHiddenExpressionTabNames:(NSArray *)arg1 ;
-(NSArray *)accountSubscriptions;
-(void)setAccountSubscriptions:(NSArray *)arg1 ;
-(NSString *)hiddenExpressionTabNamesString;
-(void)setHiddenExpressionTabNamesString:(NSString *)arg1 ;
-(unsigned long long)progress;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)setAvailable:(BOOL)arg1 ;
-(void)logout;
-(SKPContact *)contact;
-(void)updateSubscriptions;
-(void)setContact:(SKPContact *)arg1 ;
-(id)subscriptions;
@end
