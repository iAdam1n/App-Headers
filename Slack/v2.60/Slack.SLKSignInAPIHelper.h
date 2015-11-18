/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSArray;

@interface Slack.SLKSignInAPIHelper : NSObject {

	 teamId;
	 userId;
	 userName;
	 email;
	 domain;
	 ssoURL;
	 ssoRequired;
	 ssoType;
	 emailDomains;
	 onePasswordUsername;
	 onePasswordPassword;

}

@property (copy,nonatomic) NSString * teamId; 
@property (copy,nonatomic) NSString * userId; 
@property (copy,nonatomic) NSString * userName; 
@property (copy,nonatomic) NSString * email; 
@property (copy,nonatomic) NSString * domain; 
@property (copy,nonatomic) NSString * ssoURL; 
@property (copy,nonatomic) NSString * ssoRequired; 
@property (copy,nonatomic) NSString * ssoType; 
@property (retain,nonatomic) NSArray * emailDomains; 
@property (copy,nonatomic) NSString * onePasswordUsername; 
@property (copy,nonatomic) NSString * onePasswordPassword; 
+(id)kSLKSignInAPIHelperSignInSucceeded;
+(id)kSLKSignInAPIHelperSignInFailed;
-(NSString *)teamId;
-(void)setTeamId:(NSString *)arg1 ;
-(NSString *)ssoURL;
-(void)setSsoURL:(NSString *)arg1 ;
-(NSString *)ssoRequired;
-(void)setSsoRequired:(NSString *)arg1 ;
-(NSString *)ssoType;
-(void)setSsoType:(NSString *)arg1 ;
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
-(void)authEmailToken:(/*^block*/id)arg1 ;
-(void)authEmailTeams:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelAuthEmailTeams;
-(void)authCreateTeam:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)userName;
-(void)setDomain:(NSString *)arg1 ;
-(id)init;
-(NSString *)domain;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)userId;
-(NSArray *)emailDomains;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
@end
