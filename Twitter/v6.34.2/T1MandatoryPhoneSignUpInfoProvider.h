/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterSignUpInfoProvider.h>

@class NSString;

@interface T1MandatoryPhoneSignUpInfoProvider : NSObject <TFNTwitterSignUpInfoProvider> {

	BOOL _emailDiscoveryOptIn;
	BOOL _phoneDiscoveryOptIn;
	BOOL _phoneSignUp;
	BOOL _phoneChallengeCompleted;
	BOOL _SMSNotificationsEnabled;
	BOOL _failedToUpdatePassword;
	NSString* _fullName;
	NSString* _email;
	NSString* _phoneNumber;
	NSString* _username;
	NSString* _password;
	NSString* _formattedPhoneNumber;
	NSString* _normalizedPhoneNumber;
	NSString* _simCountryCode;

}

@property (nonatomic,copy) NSString * fullName;                                                                                         //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy) NSString * email;                                                                                            //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                                                                      //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * username;                                                                                         //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                                                                         //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL emailDiscoveryOptIn;                                                                                  //@synthesize emailDiscoveryOptIn=_emailDiscoveryOptIn - In the implementation block
@property (assign,nonatomic) BOOL phoneDiscoveryOptIn;                                                                                  //@synthesize phoneDiscoveryOptIn=_phoneDiscoveryOptIn - In the implementation block
@property (assign,getter=isPhoneSignUp,nonatomic) BOOL phoneSignUp;                                                                     //@synthesize phoneSignUp=_phoneSignUp - In the implementation block
@property (assign,getter=isPhoneChallengeCompleted,nonatomic) BOOL phoneChallengeCompleted;                                             //@synthesize phoneChallengeCompleted=_phoneChallengeCompleted - In the implementation block
@property (nonatomic,copy) NSString * formattedPhoneNumber;                                                                             //@synthesize formattedPhoneNumber=_formattedPhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * normalizedPhoneNumber;                                                                            //@synthesize normalizedPhoneNumber=_normalizedPhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * simCountryCode;                                                                                   //@synthesize simCountryCode=_simCountryCode - In the implementation block
@property (assign,setter=MSNotificationsEnabled,getter=areSMSNotificationsEnabled,nonatomic) BOOL SMSNotificationsEnabled;              //@synthesize SMSNotificationsEnabled=_SMSNotificationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL failedToUpdatePassword;                                                                               //@synthesize failedToUpdatePassword=_failedToUpdatePassword - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isNumeric,nonatomic) BOOL numeric; 
@property (assign,getter=isPreVerified,nonatomic) BOOL preVerified; 
@property (nonatomic,copy) NSString * preVerifiedPhoneNumber; 
-(NSString *)simCountryCode;
-(BOOL)isPhoneSignUp;
-(NSString *)normalizedPhoneNumber;
-(void)setSMSNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)areSMSNotificationsEnabled;
-(void)setNormalizedPhoneNumber:(NSString *)arg1 ;
-(void)setFailedToUpdatePassword:(BOOL)arg1 ;
-(BOOL)failedToUpdatePassword;
-(BOOL)isPhoneChallengeCompleted;
-(void)setPhoneSignUp:(BOOL)arg1 ;
-(void)setPhoneChallengeCompleted:(BOOL)arg1 ;
-(BOOL)emailDiscoveryOptIn;
-(BOOL)phoneDiscoveryOptIn;
-(void)setEmailDiscoveryOptIn:(BOOL)arg1 ;
-(void)setPhoneDiscoveryOptIn:(BOOL)arg1 ;
-(void)setSimCountryCode:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(void)setFormattedPhoneNumber:(NSString *)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)username;
-(NSString *)email;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)formattedPhoneNumber;
@end

