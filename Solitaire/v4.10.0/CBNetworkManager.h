/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@class Chartboost_AFNetworkReachabilityManager, Chartboost_AFHTTPSessionManager, NSDictionary;

@interface CBNetworkManager : NSObject {

	BOOL _defaultFlush;
	Chartboost_AFNetworkReachabilityManager* _reachabilityManager;
	Chartboost_AFHTTPSessionManager* _cbAPISessionManager;
	Chartboost_AFHTTPSessionManager* _cbDefaultSessionManger;
	NSDictionary* _apiRetryRules;

}

@property (nonatomic,retain) Chartboost_AFNetworkReachabilityManager * reachabilityManager;              //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,retain) Chartboost_AFHTTPSessionManager * cbAPISessionManager;                      //@synthesize cbAPISessionManager=_cbAPISessionManager - In the implementation block
@property (nonatomic,retain) Chartboost_AFHTTPSessionManager * cbDefaultSessionManger;                   //@synthesize cbDefaultSessionManger=_cbDefaultSessionManger - In the implementation block
@property (assign,nonatomic) BOOL defaultFlush;                                                          //@synthesize defaultFlush=_defaultFlush - In the implementation block
@property (nonatomic,retain) NSDictionary * apiRetryRules;                                               //@synthesize apiRetryRules=_apiRetryRules - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)shared;
-(void)addAPIRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)addAPIRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 sendNow:(BOOL)arg4 ;
-(void)addURLRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 sendNow:(BOOL)arg4 ;
-(NSDictionary *)apiRetryRules;
-(void)addDownloadURLRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 outputURL:(id)arg4 priority:(long long)arg5 ;
-(void)setupReachabilityManager;
-(void)setCbAPISessionManager:(Chartboost_AFHTTPSessionManager *)arg1 ;
-(Chartboost_AFHTTPSessionManager *)cbAPISessionManager;
-(void)setCbDefaultSessionManger:(Chartboost_AFHTTPSessionManager *)arg1 ;
-(Chartboost_AFHTTPSessionManager *)cbDefaultSessionManger;
-(void)setDefaultFlush:(BOOL)arg1 ;
-(/*^block*/id)blockWithAPIRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 sessionManager:(id)arg4 ;
-(BOOL)defaultFlush;
-(/*^block*/id)blockWithDownloadRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 outputURL:(id)arg4 sessionManager:(id)arg5 ;
-(/*^block*/id)sessionTaskCompletionHandlerWithRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(BOOL)shouldRetryRequest:(id)arg1 ;
-(BOOL)isInternetAvailable;
-(void)setApiRetryRules:(NSDictionary *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Chartboost_AFNetworkReachabilityManager *)reachabilityManager;
-(void)setReachabilityManager:(Chartboost_AFNetworkReachabilityManager *)arg1 ;
@end

