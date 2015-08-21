/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol T1SignInManagerDelegate;
@class NSString;

@interface T1SignInManager : NSObject {

	id<T1SignInManagerDelegate> _delegate;
	NSString* _apiEndpoint;
	NSString* _configurationEndpoint;
	NSString* _dtabHeader;

}

@property (assign,nonatomic,__weak) id<T1SignInManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * apiEndpoint;                                     //@synthesize apiEndpoint=_apiEndpoint - In the implementation block
@property (nonatomic,copy) NSString * configurationEndpoint;                           //@synthesize configurationEndpoint=_configurationEndpoint - In the implementation block
@property (nonatomic,copy) NSString * dtabHeader;                                      //@synthesize dtabHeader=_dtabHeader - In the implementation block
+(void)_guestAuthCreateAuthenticatedRequestWithIdentifier:(id)arg1 password:(id)arg2 simCountryCode:(id)arg3 oneFactorAuthorizationRequestType:(unsigned long long)arg4 responseBlock:(/*^block*/id)arg5 ;
-(void)reauthorizeAccount:(id)arg1 password:(id)arg2 ;
-(void)addUser:(id)arg1 password:(id)arg2 oneFactorAuthorizationRequestType:(unsigned long long)arg3 ;
-(NSString *)apiEndpoint;
-(NSString *)configurationEndpoint;
-(NSString *)dtabHeader;
-(void)setApiEndpoint:(NSString *)arg1 ;
-(void)setConfigurationEndpoint:(NSString *)arg1 ;
-(void)setDtabHeader:(NSString *)arg1 ;
-(void)requestOneFactorAuthorization:(id)arg1 ;
-(void)addUser:(id)arg1 requestID:(id)arg2 challengeResponse:(id)arg3 ;
-(/*^block*/id)_loginResponseBlockWithUserName:(id)arg1 ;
-(void)_requestAccessTokensWithIdentifier:(id)arg1 password:(id)arg2 oneFactorAuthorizationRequestType:(unsigned long long)arg3 responseBlock:(/*^block*/id)arg4 ;
-(void)_unenrollFromLoginVerificationWithAccount:(id)arg1 ;
-(void)_challengeOrNativeLoginForResponse:(id)arg1 userName:(id)arg2 ;
-(void)setDelegate:(id<T1SignInManagerDelegate>)arg1 ;
-(id<T1SignInManagerDelegate>)delegate;
@end

