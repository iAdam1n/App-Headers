/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AFURLRequestSerialization, AFURLResponseSerialization, OS_dispatch_queue, OS_dispatch_group;
@class NSURL, AFHTTPRequestSerializer, AFHTTPResponseSerializer, NSOperationQueue, NSURLCredential, AFSecurityPolicy, AFNetworkReachabilityManager, NSObject;

@interface AFHTTPRequestOperationManager : NSObject <NSSecureCoding, NSCopying> {

	BOOL _shouldUseCredentialStorage;
	NSURL* _baseURL;
	AFHTTPRequestSerializer*<AFURLRequestSerialization> _requestSerializer;
	AFHTTPResponseSerializer*<AFURLResponseSerialization> _responseSerializer;
	NSOperationQueue* _operationQueue;
	NSURLCredential* _credential;
	AFSecurityPolicy* _securityPolicy;
	AFNetworkReachabilityManager* _reachabilityManager;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_group> _completionGroup;

}

@property (nonatomic,retain) NSURL * baseURL;                                                                       //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) AFHTTPRequestSerializer*<AFURLRequestSerialization> requestSerializer;                 //@synthesize requestSerializer=_requestSerializer - In the implementation block
@property (nonatomic,retain) AFHTTPResponseSerializer*<AFURLResponseSerialization> responseSerializer;              //@synthesize responseSerializer=_responseSerializer - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldUseCredentialStorage;                                                       //@synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage - In the implementation block
@property (nonatomic,retain) NSURLCredential * credential;                                                          //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) AFSecurityPolicy * securityPolicy;                                                     //@synthesize securityPolicy=_securityPolicy - In the implementation block
@property (nonatomic,retain) AFNetworkReachabilityManager * reachabilityManager;                                    //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                                          //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> completionGroup;                                          //@synthesize completionGroup=_completionGroup - In the implementation block
+(id)manager;
+(BOOL)supportsSecureCoding;
-(void)setRequestSerializer:(AFHTTPRequestSerializer*<AFURLRequestSerialization>)arg1 ;
-(void)setResponseSerializer:(AFHTTPResponseSerializer*<AFURLResponseSerialization>)arg1 ;
-(void)setSecurityPolicy:(AFSecurityPolicy *)arg1 ;
-(id)GET:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)POST:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)POST:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(/*^block*/id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)setShouldUseCredentialStorage:(BOOL)arg1 ;
-(AFHTTPRequestSerializer*<AFURLRequestSerialization>)requestSerializer;
-(id)HTTPRequestOperationWithRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(AFHTTPResponseSerializer*<AFURLResponseSerialization>)responseSerializer;
-(BOOL)shouldUseCredentialStorage;
-(AFSecurityPolicy *)securityPolicy;
-(NSObject*<OS_dispatch_group>)completionGroup;
-(void)setCompletionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)HTTPRequestOperationWithHTTPMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(id)HEAD:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)PUT:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)PATCH:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)DELETE:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSURL *)baseURL;
-(NSOperationQueue *)operationQueue;
-(NSURLCredential *)credential;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(id)initWithBaseURL:(id)arg1 ;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(AFNetworkReachabilityManager *)reachabilityManager;
-(void)setReachabilityManager:(AFNetworkReachabilityManager *)arg1 ;
@end

