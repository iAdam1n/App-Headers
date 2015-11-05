/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class PTHTweetbotAccount, PTHTweetbotOAuthURLRequest;

@interface _PTHTweetbotAccountRequestOperation : NSOperation {

	unsigned long long _retryCount;
	BOOL _executing;
	BOOL _finished;
	PTHTweetbotAccount* _account;
	PTHTweetbotOAuthURLRequest* _request;
	/*^block*/id _progressBlock;
	/*^block*/id _responseBlock;

}

@property (nonatomic,retain) PTHTweetbotAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PTHTweetbotOAuthURLRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id progressBlock;                                    //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id responseBlock;                                    //@synthesize responseBlock=_responseBlock - In the implementation block
@property (getter=isExecuting) BOOL executing;                                  //@synthesize executing=_executing - In the implementation block
@property (getter=isFinished) BOOL finished;                                    //@synthesize finished=_finished - In the implementation block
-(BOOL)isAsynchronous;
-(id)responseBlock;
-(PTHTweetbotOAuthURLRequest *)request;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setExecuting:(BOOL)arg1 ;
-(void)setRequest:(PTHTweetbotOAuthURLRequest *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(void)sendRequest;
-(void)setResponseBlock:(id)arg1 ;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(PTHTweetbotAccount *)account;
@end

