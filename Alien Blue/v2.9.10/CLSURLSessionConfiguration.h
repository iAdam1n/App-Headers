/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSURLCache;

@interface CLSURLSessionConfiguration : NSObject <NSCopying> {

	NSDictionary* _additionalHeaders;
	NSURLCache* _URLCache;
	unsigned long long _cookiePolicy;

}

@property (nonatomic,copy) NSDictionary * HTTPAdditionalHeaders;                     //@synthesize additionalHeaders=_additionalHeaders - In the implementation block
@property (nonatomic,retain) NSURLCache * URLCache;                                  //@synthesize URLCache=_URLCache - In the implementation block
@property (assign,nonatomic) unsigned long long HTTPCookieAcceptPolicy;              //@synthesize cookiePolicy=_cookiePolicy - In the implementation block
@property (assign,nonatomic) BOOL sessionSendsLaunchEvents; 
+(id)backgroundSessionConfiguration:(id)arg1 ;
+(id)ephemeralSessionConfiguration;
+(id)defaultSessionConfiguration;
+(id)backgroundSessionConfigurationWithIdentifier:(id)arg1 ;
-(unsigned long long)HTTPCookieAcceptPolicy;
-(void)setSessionSendsLaunchEvents:(BOOL)arg1 ;
-(BOOL)sessionSendsLaunchEvents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURLCache:(NSURLCache *)arg1 ;
-(NSURLCache *)URLCache;
-(void)setHTTPAdditionalHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)HTTPAdditionalHeaders;
-(void)setHTTPCookieAcceptPolicy:(unsigned long long)arg1 ;
@end

