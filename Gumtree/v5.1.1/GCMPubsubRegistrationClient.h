/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, GCMCheckinService, NSURLSession, NSURLSessionDataTask;

@interface GCMPubsubRegistrationClient : NSObject {

	NSString* _token;
	NSString* _topic;
	NSDictionary* _options;
	GCMCheckinService* _checkin;
	NSURLSession* _session;
	NSURLSessionDataTask* _task;

}

@property (nonatomic,retain) NSString * token;                         //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSString * topic;                         //@synthesize topic=_topic - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                   //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) GCMCheckinService * checkin;              //@synthesize checkin=_checkin - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * task;              //@synthesize task=_task - In the implementation block
+(id)newSession;
+(id)pubsubRegistrationKeyWithToken:(id)arg1 topic:(id)arg2 options:(id)arg3 ;
-(void)cancelAnyOngoingOperation;
-(BOOL)isSubscriptionInProgress;
-(void)updateSubscriptionWithCompletion:(/*^block*/id)arg1 shouldDelete:(BOOL)arg2 ;
-(id)initWithCheckinService:(id)arg1 token:(id)arg2 topic:(id)arg3 options:(id)arg4 ;
-(void)setCheckin:(GCMCheckinService *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURLSessionDataTask *)task;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(GCMCheckinService *)checkin;
@end
