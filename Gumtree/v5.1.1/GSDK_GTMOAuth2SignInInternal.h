/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GSDK_GTMOAuth2SignIn.h>

@class NSString;

@interface GSDK_GTMOAuth2SignInInternal : GSDK_GTMOAuth2SignIn {

	NSString* authorizationEmail_;
	NSString* authorizationTemplate_;
	BOOL shouldUseLoginScope_;

}

@property (nonatomic,retain) NSString * authorizationEmail; 
@property (nonatomic,retain) NSString * authorizationTemplate; 
@property (assign,nonatomic) BOOL shouldUseLoginScope; 
+(id)googleTokenURL;
+(id)googleAuthorizationURL;
+(id)nativeClientRedirectURI;
+(id)googleUserInfoURL;
+(id)googleRevocationURL;
+(id)authorizationHost;
+(id)userInfoHost;
+(id)defaultSourceString;
+(id)accountsHost;
+(id)dictionaryWithClientLoginResponseString:(id)arg1 ;
+(void)fetchClientLoginValuesWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 doUberAuthFetch:(BOOL)arg4 parseBlock:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)tokenAuthURLWithAuthToken:(id)arg1 service:(id)arg2 source:(id)arg3 URLString:(id)arg4 ;
+(void)fetchUberAuthTokenWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)fetchAuthTokenWithValues:(id)arg1 service:(id)arg2 isSessionOnly:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)setAccountsHost:(id)arg1 ;
+(void)setAuthorizationHost:(id)arg1 ;
+(void)setUserInfoHost:(id)arg1 ;
+(void)fetchClientLoginValuesWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)fetchTokenAuthURLWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 URLString:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)fetchTokenAuthURLWithValues:(id)arg1 service:(id)arg2 source:(id)arg3 URLString:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)parametersForWebRequest;
-(BOOL)startSigningIn;
-(BOOL)titleChanged:(id)arg1 ;
-(BOOL)cookiesChanged:(id)arg1 ;
-(BOOL)shouldUseLoginScope;
-(NSString *)authorizationEmail;
-(NSString *)authorizationTemplate;
-(void)setAuthorizationEmail:(NSString *)arg1 ;
-(void)setAuthorizationTemplate:(NSString *)arg1 ;
-(void)setShouldUseLoginScope:(BOOL)arg1 ;
-(void)dealloc;
@end

