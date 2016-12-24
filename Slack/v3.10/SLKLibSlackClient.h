/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSKLibSlack;

@interface SLKLibSlackClient : NSObject {

	LSKLibSlack* _libSlack;

}

@property (nonatomic,retain) LSKLibSlack * libSlack;              //@synthesize libSlack=_libSlack - In the implementation block
+(BOOL)shouldUseLibSlackForTeamId:(id)arg1 ;
+(id)cachePathForLibSlack;
+(id)sharedInstance;
-(LSKLibSlack *)libSlack;
-(void)setLibSlack:(LSKLibSlack *)arg1 ;
-(id)init;
@end
