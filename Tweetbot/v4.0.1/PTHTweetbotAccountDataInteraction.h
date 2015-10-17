/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:58 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Tweetbot/Tweetbot-Structs.h>
@class PTHTweetbotUser, PTHTweetbotStatus, NSDate, PTHTweetbotAccount;

@interface PTHTweetbotAccountDataInteraction : NSObject {

	unsigned char _action;
	PTHTweetbotUser* _sourceUser;
	PTHTweetbotStatus* _sourceStatus;
	PTHTweetbotStatus* _targetStatus;
	NSDate* _createdAt;
	long long _sourceUserTID;
	long long _sourceStatusTID;
	long long _targetStatusTID;
	PTHTweetbotAccount* _account;

}

@property (nonatomic,retain) NSDate * createdAt;                               //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) unsigned char action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) long long sourceUserTID;                        //@synthesize sourceUserTID=_sourceUserTID - In the implementation block
@property (nonatomic,readonly) long long sourceStatusTID;                      //@synthesize sourceStatusTID=_sourceStatusTID - In the implementation block
@property (nonatomic,readonly) long long targetStatusTID;                      //@synthesize targetStatusTID=_targetStatusTID - In the implementation block
@property (assign,nonatomic,__weak) PTHTweetbotAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) PTHTweetbotUser * sourceUser;                   //@synthesize sourceUser=_sourceUser - In the implementation block
@property (nonatomic,readonly) PTHTweetbotStatus * sourceStatus;               //@synthesize sourceStatus=_sourceStatus - In the implementation block
@property (nonatomic,readonly) PTHTweetbotStatus * targetStatus;               //@synthesize targetStatus=_targetStatus - In the implementation block
-(PTHTweetbotUser *)sourceUser;
-(PTHTweetbotStatus *)targetStatus;
-(long long)sourceUserTID;
-(long long)sourceStatusTID;
-(long long)targetStatusTID;
-(PTHTweetbotStatus *)sourceStatus;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned char)action;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 ;
-(NSDate *)createdAt;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(PTHTweetbotAccount *)account;
@end
