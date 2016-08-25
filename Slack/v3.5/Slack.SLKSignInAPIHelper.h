/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray, SLKDependencies;

@interface Slack.SLKSignInAPIHelper : NSObject {

	 delegate;
	 isSignInFromTeamSwitcher;
	 teamId;
	 teamName;
	 teamIcons;
	 userId;
	 userName;
	 email;
	 domain;
	 ssoURL;
	 ssoRequired;
	 ssoType;
	 ssoName;
	 ssoLabel;
	 emailDomains;
	 onePasswordUsername;
	 onePasswordPassword;
	 dependencies;

}

@property (assign,__weak,nonatomic) id<_TtP5Slack26SLKSignInAPIHelperDelegate_> delegate; 
@property (assign,nonatomic) BOOL isSignInFromTeamSwitcher; 
@property (copy,nonatomic) NSString * teamId; 
@property (copy,nonatomic) NSString * teamName; 
@property (copy,nonatomic) NSDictionary * teamIcons; 
@property (copy,nonatomic) NSString * userId; 
@property (copy,nonatomic) NSString * userName; 
@property (copy,nonatomic) NSString * email; 
@property (copy,nonatomic) NSString * domain; 
@property (copy,nonatomic) NSString * ssoURL; 
@property (copy,nonatomic) NSString * ssoRequired; 
@property (copy,nonatomic) NSString * ssoType; 
@property (copy,nonatomic) NSString * ssoName; 
@property (copy,nonatomic) NSString * ssoLabel; 
@property (retain,nonatomic) NSArray * emailDomains; 
@property (copy,nonatomic) NSString * onePasswordUsername; 
@property (copy,nonatomic) NSString * onePasswordPassword; 
@property (retain,nonatomic) SLKDependencies * dependencies; 
@property (readonly,nonatomic) NSString * ssoTypeString; 
@property (readonly,nonatomic) NSString * emailDomainsString; 
+(id)kSLKTeamSignInAPIHelperSignInFailed;
+(id)signinAnalyticsEvent;
+(id)kSLKTeamSignInAPIHelperSignInSucceeded;
+(id)kSLKTeamSignInAPIHelperAlreadySignedIn;
+(id)signinAnalyticsEventStepProperty;
-(NSString *)teamId;
-(id)initWithDependencies:(id)arg1 ;
-(void)setTeamId:(NSString *)arg1 ;
-(NSString *)teamName;
-(void)magicLoginWithTeamId:(id)arg1 token:(id)arg2 ;
-(void)setIsSignInFromTeamSwitcher:(BOOL)arg1 ;
-(void)setTeamName:(NSString *)arg1 ;
-(BOOL)isSignInFromTeamSwitcher;
-(NSDictionary *)teamIcons;
-(void)setTeamIcons:(NSDictionary *)arg1 ;
-(NSString *)ssoURL;
-(void)setSsoURL:(NSString *)arg1 ;
-(NSString *)ssoRequired;
-(void)setSsoRequired:(NSString *)arg1 ;
-(NSString *)ssoType;
-(void)setSsoType:(NSString *)arg1 ;
-(NSString *)ssoName;
-(void)setSsoName:(NSString *)arg1 ;
-(NSString *)ssoLabel;
-(void)setSsoLabel:(NSString *)arg1 ;
-(void)setEmailDomains:(NSArray *)arg1 ;
-(NSString *)onePasswordUsername;
-(void)setOnePasswordUsername:(NSString *)arg1 ;
-(NSString *)onePasswordPassword;
-(void)setOnePasswordPassword:(NSString *)arg1 ;
-(void)cancelAuthFindTeam;
-(void)authFindTeam:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelAuthFindUser;
-(void)authFindUser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authJoinTeam:(/*^block*/id)arg1 ;
-(void)authSignIn:(id)arg1 pin:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)authSendCodeToBackupPhone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authSignIn:(id)arg1 pin:(id)arg2 sendToBackup:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)authEmailTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)authEmailTeams:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelAuthEmailTeams;
-(void)authCreateTeam:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)forgotPassword:(id)arg1 email:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)errorMessage:(id)arg1 ;
-(id)getEmailDomain;
-(NSString *)ssoTypeString;
-(NSString *)emailDomainsString;
-(void)signInSuccess:(id)arg1 ;
-(void)signInFailed:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(NSString *)userName;
-(void)setDelegate:(id<_TtP5Slack26SLKSignInAPIHelperDelegate_>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<_TtP5Slack26SLKSignInAPIHelperDelegate_>)delegate;
-(NSString *)domain;
-(void)setEmail:(NSString *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)email;
-(NSArray *)emailDomains;
-(void)setDomain:(NSString *)arg1 ;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)userId;
@end

