/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/TWTRSessionRefreshStrategy.h>

@protocol TWTRAPIServiceConfig;
@class TWTRAuthConfig, NSString;

@interface TWTRGuestSessionRefreshStrategy : NSObject <TWTRSessionRefreshStrategy> {

	TWTRAuthConfig* _authConfig;
	NSString* _accessToken;
	id<TWTRAPIServiceConfig> _APIServiceConfig;

}

@property (nonatomic,readonly) TWTRAuthConfig * authConfig;                            //@synthesize authConfig=_authConfig - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                                     //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,readonly) id<TWTRAPIServiceConfig> APIServiceConfig;              //@synthesize APIServiceConfig=_APIServiceConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)expiredStatusCodes;
+(BOOL)canSupportSessionClass:(Class)arg1 ;
+(BOOL)isSessionExpiredBasedOnRequestResponse:(id)arg1 ;
+(BOOL)isSessionExpiredBasedOnRequestError:(id)arg1 ;
-(TWTRAuthConfig *)authConfig;
-(id<TWTRAPIServiceConfig>)APIServiceConfig;
-(void)refreshSession:(id)arg1 URLSession:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithAuthConfig:(id)arg1 APIServiceConfig:(id)arg2 ;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)accessToken;
@end
