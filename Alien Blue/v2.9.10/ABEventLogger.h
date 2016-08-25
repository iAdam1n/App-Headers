/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PURLogger;

@interface ABEventLogger : NSObject {

	PURLogger* _logger;

}

@property (nonatomic,retain) PURLogger * logger;              //@synthesize logger=_logger - In the implementation block
+(id)shared;
-(void)logTopic:(id)arg1 type:(id)arg2 payload:(id)arg3 obfuscatedPayload:(id)arg4 ;
-(void)logVoteChangeForPost:(id)arg1 container:(id)arg2 gesture:(id)arg3 voteType:(id)arg4 ;
-(id)standardPayload;
-(void)logTopic:(id)arg1 type:(id)arg2 payload:(id)arg3 ;
-(void)logUpvoteChangeForPost:(id)arg1 container:(id)arg2 gesture:(id)arg3 ;
-(void)logDownvoteChangeForPost:(id)arg1 container:(id)arg2 gesture:(id)arg3 ;
-(id)init;
-(PURLogger *)logger;
-(void)setLogger:(PURLogger *)arg1 ;
@end

