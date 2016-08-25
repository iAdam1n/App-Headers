/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSURLCredential;

@interface ECAPIConfiguration : NSObject {

	BOOL _apiForceAllRequestsToHTTPS;
	BOOL _apiForceAllRequestsToHTTP;
	BOOL _apiIgnoreProtectionSpace;
	BOOL _apiUseEmailForUserID;
	BOOL _apiEnableCrossDeviceTracking;
	BOOL _apiAllowHttpCookies;
	BOOL _apiUseBasicAuthMethod;
	NSString* _host;
	NSString* _port;
	NSString* _sslHost;
	NSString* _sslPort;
	NSString* _path;
	NSString* _version;
	NSString* _languageCode;
	NSString* _userID;
	NSString* _userAuthToken;
	NSString* _userEmail;
	NSString* _userPasswordHash;
	NSString* _clientVersion;
	NSString* _echelonID;
	NSString* _userAgent;
	NSString* _ecgUDID;
	NSArray* _apiCredentials;
	NSDictionary* _extraHeaders;
	NSDictionary* _commandOverrides;
	NSArray* _apiForceHTTPSExceptions;
	double _timeout;
	unsigned long long _currentCredentialIndex;
	unsigned long long _currentCredentialFailureCount;
	NSURLCredential* _currentCredential;

}

@property (assign,nonatomic) unsigned long long currentCredentialIndex;                     //@synthesize currentCredentialIndex=_currentCredentialIndex - In the implementation block
@property (assign,nonatomic) unsigned long long currentCredentialFailureCount;              //@synthesize currentCredentialFailureCount=_currentCredentialFailureCount - In the implementation block
@property (nonatomic,retain) NSURLCredential * currentCredential;                           //@synthesize currentCredential=_currentCredential - In the implementation block
@property (nonatomic,retain) NSString * host;                                               //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSString * port;                                               //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSString * sslHost;                                            //@synthesize sslHost=_sslHost - In the implementation block
@property (nonatomic,retain) NSString * sslPort;                                            //@synthesize sslPort=_sslPort - In the implementation block
@property (nonatomic,retain) NSString * path;                                               //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSString * version;                                            //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                                       //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSString * userID;                                             //@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) NSString * userAuthToken;                                      //@synthesize userAuthToken=_userAuthToken - In the implementation block
@property (nonatomic,retain) NSString * userEmail;                                          //@synthesize userEmail=_userEmail - In the implementation block
@property (nonatomic,retain) NSString * userPasswordHash;                                   //@synthesize userPasswordHash=_userPasswordHash - In the implementation block
@property (nonatomic,retain) NSString * clientVersion;                                      //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSString * echelonID;                                          //@synthesize echelonID=_echelonID - In the implementation block
@property (nonatomic,retain) NSString * userAgent;                                          //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSString * ecgUDID;                                            //@synthesize ecgUDID=_ecgUDID - In the implementation block
@property (nonatomic,retain) NSArray * apiCredentials;                                      //@synthesize apiCredentials=_apiCredentials - In the implementation block
@property (nonatomic,retain) NSDictionary * extraHeaders;                                   //@synthesize extraHeaders=_extraHeaders - In the implementation block
@property (nonatomic,retain) NSDictionary * commandOverrides;                               //@synthesize commandOverrides=_commandOverrides - In the implementation block
@property (nonatomic,retain) NSArray * apiForceHTTPSExceptions;                             //@synthesize apiForceHTTPSExceptions=_apiForceHTTPSExceptions - In the implementation block
@property (assign,nonatomic) double timeout;                                                //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) BOOL apiForceAllRequestsToHTTPS;                               //@synthesize apiForceAllRequestsToHTTPS=_apiForceAllRequestsToHTTPS - In the implementation block
@property (assign,nonatomic) BOOL apiForceAllRequestsToHTTP;                                //@synthesize apiForceAllRequestsToHTTP=_apiForceAllRequestsToHTTP - In the implementation block
@property (assign,nonatomic) BOOL apiIgnoreProtectionSpace;                                 //@synthesize apiIgnoreProtectionSpace=_apiIgnoreProtectionSpace - In the implementation block
@property (assign,nonatomic) BOOL apiUseEmailForUserID;                                     //@synthesize apiUseEmailForUserID=_apiUseEmailForUserID - In the implementation block
@property (assign,nonatomic) BOOL apiEnableCrossDeviceTracking;                             //@synthesize apiEnableCrossDeviceTracking=_apiEnableCrossDeviceTracking - In the implementation block
@property (assign,nonatomic) BOOL apiAllowHttpCookies;                                      //@synthesize apiAllowHttpCookies=_apiAllowHttpCookies - In the implementation block
@property (assign,nonatomic) BOOL apiUseBasicAuthMethod;                                    //@synthesize apiUseBasicAuthMethod=_apiUseBasicAuthMethod - In the implementation block
+(void)setParams:(id)arg1 ;
+(id)current;
-(NSArray *)apiCredentials;
-(id)initWithParams:(id)arg1 ;
-(void)setCurrentCredentialIndex:(unsigned long long)arg1 ;
-(void)setCurrentCredentialFailureCount:(unsigned long long)arg1 ;
-(void)setSslHost:(NSString *)arg1 ;
-(void)setSslPort:(NSString *)arg1 ;
-(void)setApiCredentials:(NSArray *)arg1 ;
-(void)setExtraHeaders:(NSDictionary *)arg1 ;
-(void)setApiForceAllRequestsToHTTPS:(BOOL)arg1 ;
-(void)setApiForceAllRequestsToHTTP:(BOOL)arg1 ;
-(void)setApiIgnoreProtectionSpace:(BOOL)arg1 ;
-(void)setApiForceHTTPSExceptions:(NSArray *)arg1 ;
-(void)setApiUseEmailForUserID:(BOOL)arg1 ;
-(void)setCommandOverrides:(NSDictionary *)arg1 ;
-(void)setApiEnableCrossDeviceTracking:(BOOL)arg1 ;
-(void)setApiAllowHttpCookies:(BOOL)arg1 ;
-(void)setApiUseBasicAuthMethod:(BOOL)arg1 ;
-(void)setEcgUDID:(NSString *)arg1 ;
-(BOOL)apiIgnoreProtectionSpace;
-(BOOL)apiForceAllRequestsToHTTP;
-(NSString *)sslPort;
-(NSString *)sslHost;
-(BOOL)apiUseEmailForUserID;
-(NSString *)ecgUDID;
-(NSDictionary *)extraHeaders;
-(NSString *)echelonID;
-(BOOL)apiUseBasicAuthMethod;
-(id)updateCurrentCredential;
-(void)setCurrentCredential:(NSURLCredential *)arg1 ;
-(NSURLCredential *)currentCredential;
-(BOOL)apiAllowHttpCookies;
-(BOOL)apiForceAllRequestsToHTTPS;
-(NSArray *)apiForceHTTPSExceptions;
-(void)setUpCrossDeviceTracking:(id)arg1 ;
-(NSString *)userAuthToken;
-(NSString *)userPasswordHash;
-(BOOL)apiEnableCrossDeviceTracking;
-(unsigned long long)currentCredentialFailureCount;
-(BOOL)checkForValidCertificate:(id)arg1 ;
-(unsigned long long)currentCredentialIndex;
-(void)increaseFailureCount;
-(void)setUserAuthToken:(NSString *)arg1 ;
-(void)setUserPasswordHash:(NSString *)arg1 ;
-(void)setEchelonID:(NSString *)arg1 ;
-(NSDictionary *)commandOverrides;
-(void)setupRequest:(id)arg1 ;
-(void)setupUserAuth:(id)arg1 ;
-(id)baseHTTPSURL;
-(id)baseHTTPURL;
-(void)apiAuthSucceeded;
-(id)userIDForURL;
-(void)setPort:(NSString *)arg1 ;
-(NSString *)path;
-(NSString *)host;
-(void)setPath:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(NSString *)languageCode;
-(NSString *)port;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)setTimeout:(double)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(NSString *)userAgent;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)userEmail;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(void)setClientVersion:(NSString *)arg1 ;
-(NSString *)clientVersion;
-(double)timeout;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
@end

