/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SLKWatchSentMessage : NSObject {

	NSString* _teamId;
	NSString* _userId;
	NSString* _message;

}

@property (nonatomic,copy) NSString * teamId;               //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,copy) NSString * userId;               //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
-(void)setTeamId:(NSString *)arg1 ;
-(NSString *)teamId;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
@end
