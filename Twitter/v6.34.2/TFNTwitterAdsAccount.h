/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface TFNTwitterAdsAccount : NSObject {

	BOOL _hasPromotedReadAccess;
	BOOL _hasAnalyticsAccess;
	NSNumber* _accountID;
	NSString* _accountIDHash;

}

@property (nonatomic,readonly) NSNumber * accountID;                    //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * accountIDHash;                //@synthesize accountIDHash=_accountIDHash - In the implementation block
@property (nonatomic,readonly) BOOL hasPromotedReadAccess;              //@synthesize hasPromotedReadAccess=_hasPromotedReadAccess - In the implementation block
@property (nonatomic,readonly) BOOL hasAnalyticsAccess;                 //@synthesize hasAnalyticsAccess=_hasAnalyticsAccess - In the implementation block
+(BOOL)_setError:(id*)arg1 description:(id)arg2 ;
+(id)adsAccountsWithJSONArray:(id)arg1 ;
+(id)adsAccountsDictionaryWithJSONData:(id)arg1 error:(id*)arg2 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(NSString *)accountIDHash;
-(BOOL)hasPromotedReadAccess;
-(BOOL)hasAnalyticsAccess;
-(id)description;
-(NSNumber *)accountID;
@end

