/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TNLRequestConfiguration.h>

@class NSString, NSURLCredentialStorage, NSURLCache, NSHTTPCookieStorage;

@interface TNLMutableRequestConfiguration : TNLRequestConfiguration

@property (assign,nonatomic) BOOL contributeToExecutingNetworkConnectionsCount; 
@property (assign,nonatomic) BOOL skipHostSanitization; 
@property (assign,nonatomic) long long executionMode; 
@property (assign,nonatomic) long long redirectPolicy; 
@property (assign,nonatomic) long long responseDataConsumptionMode; 
@property (assign,nonatomic) long long protocolOptions; 
@property (nonatomic,retain) id<TNLRequestRetryPolicyProvider> retryPolicyProvider; 
@property (assign,nonatomic) double idleTimeout; 
@property (assign,nonatomic) double attemptTimeout; 
@property (assign,nonatomic) double operationTimeout; 
@property (assign,nonatomic) double deferrableInterval; 
@property (assign,nonatomic) unsigned long long cachePolicy; 
@property (assign,nonatomic) unsigned long long networkServiceType; 
@property (assign,nonatomic) unsigned long long cookieAcceptPolicy; 
@property (assign,nonatomic) BOOL shouldSetCookies; 
@property (assign,nonatomic) BOOL allowsCellularAccess; 
@property (assign,getter=isDiscretionary,nonatomic) BOOL discretionary; 
@property (nonatomic,copy) NSString * sharedContainerIdentifier; 
@property (assign,nonatomic) BOOL shouldLaunchAppForBackgroundEvents; 
@property (nonatomic,retain) NSURLCredentialStorage * URLCredentialStorage; 
@property (nonatomic,retain) NSURLCache * URLCache; 
@property (nonatomic,retain) NSHTTPCookieStorage * cookieStorage; 
-(void)setResponseDataConsumptionMode:(long long)arg1 ;
-(void)setProtocolOptions:(long long)arg1 ;
-(void)setRedirectPolicy:(long long)arg1 ;
-(void)setAttemptTimeout:(double)arg1 ;
-(void)setIdleTimeout:(double)arg1 ;
-(void)setRetryPolicyProvider:(id<TNLRequestRetryPolicyProvider>)arg1 ;
-(void)setExecutionMode:(long long)arg1 ;
-(void)setSkipHostSanitization:(BOOL)arg1 ;
-(void)setDeferrableInterval:(double)arg1 ;
-(void)setContributeToExecutingNetworkConnectionsCount:(BOOL)arg1 ;
-(void)setShouldLaunchAppForBackgroundEvents:(BOOL)arg1 ;
-(void)configureAsLowPriority;
-(void)setCookieAcceptPolicy:(unsigned long long)arg1 ;
-(void)setNetworkServiceType:(unsigned long long)arg1 ;
-(void)setSharedContainerIdentifier:(NSString *)arg1 ;
-(void)setOperationTimeout:(double)arg1 ;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCookieStorage:(NSHTTPCookieStorage *)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setURLCredentialStorage:(NSURLCredentialStorage *)arg1 ;
-(void)setURLCache:(NSURLCache *)arg1 ;
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)setShouldSetCookies:(BOOL)arg1 ;
@end

