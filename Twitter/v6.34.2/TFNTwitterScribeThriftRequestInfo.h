/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TBase.h>
#import <Twitter/NSCoding.h>

@class NSDictionary, NSString;

@interface TFNTwitterScribeThriftRequestInfo : NSObject <TBase, NSCoding> {

	BOOL _idsIsSet;
	BOOL _clientIpAddressIsSet;
	BOOL _oauthAppIdIsSet;
	BOOL _userAgentIsSet;
	BOOL _languageCodeIsSet;
	BOOL _countryCodeIsSet;
	NSDictionary* _ids;
	NSString* _clientIpAddress;
	long long _oauthAppId;
	NSString* _userAgent;
	NSString* _languageCode;
	NSString* _countryCode;

}

@property (nonatomic,copy) NSDictionary * ids;                         //@synthesize ids=_ids - In the implementation block
@property (nonatomic,readonly) BOOL idsIsSet;                          //@synthesize idsIsSet=_idsIsSet - In the implementation block
@property (nonatomic,copy) NSString * clientIpAddress;                 //@synthesize clientIpAddress=_clientIpAddress - In the implementation block
@property (nonatomic,readonly) BOOL clientIpAddressIsSet;              //@synthesize clientIpAddressIsSet=_clientIpAddressIsSet - In the implementation block
@property (assign,nonatomic) long long oauthAppId;                     //@synthesize oauthAppId=_oauthAppId - In the implementation block
@property (nonatomic,readonly) BOOL oauthAppIdIsSet;                   //@synthesize oauthAppIdIsSet=_oauthAppIdIsSet - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                       //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,readonly) BOOL userAgentIsSet;                    //@synthesize userAgentIsSet=_userAgentIsSet - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                    //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL languageCodeIsSet;                 //@synthesize languageCodeIsSet=_languageCodeIsSet - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                     //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL countryCodeIsSet;                  //@synthesize countryCodeIsSet=_countryCodeIsSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClientIpAddress:(NSString *)arg1 ;
-(void)setOauthAppId:(long long)arg1 ;
-(void)read:(id)arg1 ;
-(id)initWithIds:(id)arg1 clientIpAddress:(id)arg2 oauthAppId:(long long)arg3 userAgent:(id)arg4 languageCode:(id)arg5 countryCode:(id)arg6 ;
-(BOOL)idsIsSet;
-(NSString *)clientIpAddress;
-(BOOL)clientIpAddressIsSet;
-(long long)oauthAppId;
-(BOOL)oauthAppIdIsSet;
-(BOOL)userAgentIsSet;
-(BOOL)languageCodeIsSet;
-(BOOL)countryCodeIsSet;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)validate;
-(NSString *)languageCode;
-(void)write:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSDictionary *)ids;
-(void)setIds:(NSDictionary *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
@end

