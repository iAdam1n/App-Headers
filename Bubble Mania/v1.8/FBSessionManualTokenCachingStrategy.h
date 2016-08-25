/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/FBSessionTokenCachingStrategy.h>

@class NSString, NSDate;

@interface FBSessionManualTokenCachingStrategy : FBSessionTokenCachingStrategy {

	NSString* _accessToken;
	NSDate* _expirationDate;

}

@property (copy) NSString * accessToken;               //@synthesize accessToken=_accessToken - In the implementation block
@property (copy) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
-(void)cacheTokenInformation:(id)arg1 ;
-(id)fetchTokenInformation;
-(void)clearToken;
-(void)dealloc;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)accessToken;
@end

