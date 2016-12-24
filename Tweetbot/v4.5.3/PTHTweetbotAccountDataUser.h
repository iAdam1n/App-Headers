/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Tweetbot/Tweetbot-Structs.h>
@class NSString, PTHTweetbotAccount, NSNumber;

@interface PTHTweetbotAccountDataUser : NSObject {

	BOOL _verified;
	long long _tid;
	NSString* _screenName;
	NSString* _profileImageURLString;
	long long _followersCount;
	NSString* _name;
	PTHTweetbotAccount* _account;

}

@property (assign,nonatomic) long long tid;                                        //@synthesize tid=_tid - In the implementation block
@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * screenName;                                  //@synthesize screenName=_screenName - In the implementation block
@property (nonatomic,copy) NSString * profileImageURLString;                       //@synthesize profileImageURLString=_profileImageURLString - In the implementation block
@property (assign,nonatomic,__weak) PTHTweetbotAccount * account;                  //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSNumber * tidValue; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,__weak,readonly) NSString * displayName; 
@property (nonatomic,__weak,readonly) NSString * formattedName; 
@property (nonatomic,__weak,readonly) NSString * formattedScreenName; 
@property (nonatomic,readonly) long long followersCount;                           //@synthesize followersCount=_followersCount - In the implementation block
@property (getter=isVerified,nonatomic,readonly) BOOL verified;                    //@synthesize verified=_verified - In the implementation block
@property (nonatomic,readonly) BOOL isTapbot; 
-(NSString *)formattedScreenName;
-(BOOL)isTapbot;
-(NSNumber *)tidValue;
-(id)profileImageURLForSize:(unsigned long long)arg1 ;
-(NSString *)profileImageURLString;
-(void)setProfileImageURLString:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isLoaded;
-(NSString *)displayName;
-(NSString *)formattedName;
-(long long)followersCount;
-(NSString *)screenName;
-(void)setScreenName:(NSString *)arg1 ;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 ;
-(void)setTid:(long long)arg1 ;
-(long long)tid;
-(PTHTweetbotAccount *)account;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(BOOL)isVerified;
@end
