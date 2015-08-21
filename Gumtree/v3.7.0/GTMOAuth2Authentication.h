/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GTMFetcherAuthorizationProtocol.h>

@protocol GTMHTTPFetcherServiceProtocol;
@class NSString, NSMutableDictionary, NSURL, NSDate, NSDictionary, GTMHTTPFetcher, NSMutableArray, NSNumber;

@interface GTMOAuth2Authentication : NSObject <GTMFetcherAuthorizationProtocol> {

	NSString* clientID_;
	NSString* clientSecret_;
	NSString* redirectURI_;
	NSMutableDictionary* parameters_;
	NSURL* tokenURL_;
	NSDate* expirationDate_;
	NSString* authorizationTokenKey_;
	NSDictionary* additionalTokenRequestParameters_;
	NSDictionary* additionalGrantTypeRequestParameters_;
	GTMHTTPFetcher* refreshFetcher_;
	NSMutableArray* authorizationQueue_;
	id<GTMHTTPFetcherServiceProtocol> fetcherService_;
	Class parserClass_;
	BOOL shouldAuthorizeAllRequests_;
	id userData_;
	NSMutableDictionary* properties_;

}

@property (copy) NSString * clientID; 
@property (copy) NSString * clientSecret; 
@property (copy) NSString * redirectURI; 
@property (retain) NSString * scope; 
@property (retain) NSString * tokenType; 
@property (retain) NSString * assertion; 
@property (retain) NSString * refreshScope; 
@property (retain) NSDictionary * additionalTokenRequestParameters; 
@property (retain) NSDictionary * additionalGrantTypeRequestParameters; 
@property (retain) NSMutableDictionary * parameters; 
@property (retain) NSString * accessToken; 
@property (retain) NSString * refreshToken; 
@property (retain) NSNumber * expiresIn; 
@property (retain) NSString * code; 
@property (retain) NSString * errorString; 
@property (copy) NSURL * tokenURL; 
@property (copy) NSDate * expirationDate; 
@property (copy) NSString * serviceProvider; 
@property (retain) NSString * userID; 
@property (retain) NSString * userEmail; 
@property (retain) NSString * userEmailIsVerified; 
@property (readonly) BOOL canAuthorize; 
@property (assign) BOOL shouldAuthorizeAllRequests; 
@property (retain) id userData; 
@property (retain) NSDictionary * properties; 
@property (assign) id<GTMHTTPFetcherServiceProtocol> fetcherService; 
@property (assign) Class parserClass; 
@property (copy) NSString * authorizationTokenKey; 
@property (retain) GTMHTTPFetcher * refreshFetcher; 
@property (retain) NSMutableArray * authorizationQueue; 
@property (readonly) NSString * authorizationToken; 
+(id)dictionaryWithResponseString:(id)arg1 ;
+(id)dictionaryWithJSONData:(id)arg1 ;
+(id)encodedQueryParametersForDictionary:(id)arg1 ;
+(void)invokeDelegate:(id)arg1 selector:(SEL)arg2 object:(id)arg3 object:(id)arg4 object:(id)arg5 ;
+(id)encodedOAuthValueForString:(id)arg1 ;
+(id)unencodedOAuthParameterForString:(id)arg1 ;
+(id)authenticationWithServiceProvider:(id)arg1 tokenURL:(id)arg2 redirectURI:(id)arg3 clientID:(id)arg4 clientSecret:(id)arg5 ;
+(id)dictionaryWithResponseData:(id)arg1 ;
+(id)scopeWithStrings:(id)arg1 ;
-(void)setUserID:(NSString *)arg1 ;
-(id<GTMHTTPFetcherServiceProtocol>)fetcherService;
-(void)setFetcherService:(id<GTMHTTPFetcherServiceProtocol>)arg1 ;
-(BOOL)isAuthorizedRequest:(id)arg1 ;
-(void)authorizeRequest:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3 ;
-(BOOL)isAuthorizingRequest:(id)arg1 ;
-(void)stopAuthorizationForRequest:(id)arg1 ;
-(BOOL)primeForRefresh;
-(void)waitForCompletionWithTimeout:(double)arg1 ;
-(void)setRedirectURI:(NSString *)arg1 ;
-(void)setClientSecret:(NSString *)arg1 ;
-(void)setExpiresIn:(NSNumber *)arg1 ;
-(void)updateExpirationDate;
-(void)setKeysForResponseDictionary:(id)arg1 ;
-(BOOL)authorizeRequestArgs:(id)arg1 ;
-(BOOL)shouldRefreshAccessToken;
-(GTMHTTPFetcher *)refreshFetcher;
-(void)auth:(id)arg1 finishedRefreshWithFetcher:(id)arg2 error:(id)arg3 ;
-(id)beginTokenFetchWithDelegate:(id)arg1 didFinishSelector:(SEL)arg2 ;
-(void)setRefreshFetcher:(GTMHTTPFetcher *)arg1 ;
-(BOOL)authorizeRequestImmediateArgs:(id)arg1 ;
-(void)stopAuthorization;
-(BOOL)shouldAuthorizeAllRequests;
-(void)invokeCallbackArgs:(id)arg1 ;
-(NSString *)refreshScope;
-(NSString *)redirectURI;
-(NSDictionary *)additionalTokenRequestParameters;
-(NSDictionary *)additionalGrantTypeRequestParameters;
-(void)tokenFetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3 ;
-(void)notifyFetchIsRunning:(BOOL)arg1 fetcher:(id)arg2 type:(id)arg3 ;
-(void)setKeysForResponseJSONData:(id)arg1 ;
-(void)setKeysForResponseString:(id)arg1 ;
-(NSString *)userEmailIsVerified;
-(void)setAssertion:(NSString *)arg1 ;
-(void)setUserEmailIsVerified:(NSString *)arg1 ;
-(void)setAuthorizationTokenKey:(NSString *)arg1 ;
-(NSString *)authorizationTokenKey;
-(NSNumber *)expiresIn;
-(void)authorizeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canAuthorize;
-(void)setShouldAuthorizeAllRequests:(BOOL)arg1 ;
-(BOOL)authorizeRequest:(id)arg1 ;
-(void)setKeysForPersistenceResponseString:(id)arg1 ;
-(id)persistenceResponseString;
-(void)setRefreshScope:(NSString *)arg1 ;
-(void)setAdditionalTokenRequestParameters:(NSDictionary *)arg1 ;
-(void)setAdditionalGrantTypeRequestParameters:(NSDictionary *)arg1 ;
-(Class)parserClass;
-(void)setParserClass:(Class)arg1 ;
-(NSMutableArray *)authorizationQueue;
-(void)setAuthorizationQueue:(NSMutableArray *)arg1 ;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(NSString *)clientSecret;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)code;
-(void)reset;
-(void)setScope:(NSString *)arg1 ;
-(NSString *)scope;
-(id)userData;
-(void)setUserData:(id)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)properties;
-(NSString *)assertion;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(NSURL *)tokenURL;
-(void)setTokenURL:(NSURL *)arg1 ;
-(void)setServiceProvider:(NSString *)arg1 ;
-(id)userAgent;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)userEmail;
-(NSString *)userID;
-(NSString *)serviceProvider;
-(NSMutableDictionary *)parameters;
-(void)setParameters:(NSMutableDictionary *)arg1 ;
-(NSDate *)expirationDate;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
-(NSString *)errorString;
-(void)setTokenType:(NSString *)arg1 ;
-(NSString *)tokenType;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)authorizationToken;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)accessToken;
-(void)setErrorString:(NSString *)arg1 ;
-(void)setCode:(NSString *)arg1 ;
@end
