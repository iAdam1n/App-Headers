/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AFURLRequestSerialization, AFURLResponseSerialization, OS_dispatch_queue, OS_dispatch_group;
@class NSURL, OptimizelyAFHTTPRequestSerializer, OptimizelyAFHTTPResponseSerializer, NSOperationQueue, NSURLCredential, OptimizelyAFSecurityPolicy, OptimizelyAFNetworkReachabilityManager, NSObject;

@interface OptimizelyAFHTTPRequestOperationManager : NSObject <NSSecureCoding, NSCopying> {

	BOOL _shouldUseCredentialStorage;
	NSURL* _baseURL;
	OptimizelyAFHTTPRequestSerializer*<AFURLRequestSerialization> _requestSerializer;
	OptimizelyAFHTTPResponseSerializer*<AFURLResponseSerialization> _responseSerializer;
	NSOperationQueue* _operationQueue;
	NSURLCredential* _credential;
	OptimizelyAFSecurityPolicy* _securityPolicy;
	OptimizelyAFNetworkReachabilityManager* _reachabilityManager;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_group> _completionGroup;

}

@property (nonatomic,retain) NSURL * baseURL;                                                                                 //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) OptimizelyAFHTTPRequestSerializer*<AFURLRequestSerialization> requestSerializer;                 //@synthesize requestSerializer=_requestSerializer - In the implementation block
@property (nonatomic,retain) OptimizelyAFHTTPResponseSerializer*<AFURLResponseSerialization> responseSerializer;              //@synthesize responseSerializer=_responseSerializer - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                                               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldUseCredentialStorage;                                                                 //@synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage - In the implementation block
@property (nonatomic,retain) NSURLCredential * credential;                                                                    //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) OptimizelyAFSecurityPolicy * securityPolicy;                                                     //@synthesize securityPolicy=_securityPolicy - In the implementation block
@property (nonatomic,retain) OptimizelyAFNetworkReachabilityManager * reachabilityManager;                                    //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                                                    //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> completionGroup;                                                    //@synthesize completionGroup=_completionGroup - In the implementation block
+(id)manager;
+(BOOL)supportsSecureCoding;
-(BOOL)shouldUseCredentialStorage;
-(void)setShouldUseCredentialStorage:(BOOL)arg1 ;
-(void)setResponseSerializer:(OptimizelyAFHTTPResponseSerializer*<AFURLResponseSerialization>)arg1 ;
-(void)setRequestSerializer:(OptimizelyAFHTTPRequestSerializer*<AFURLRequestSerialization>)arg1 ;
-(id)POST:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(OptimizelyAFHTTPResponseSerializer*<AFURLResponseSerialization>)responseSerializer;
-(NSObject*<OS_dispatch_group>)completionGroup;
-(void)setCompletionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setSecurityPolicy:(OptimizelyAFSecurityPolicy *)arg1 ;
-(OptimizelyAFHTTPRequestSerializer*<AFURLRequestSerialization>)requestSerializer;
-(id)HTTPRequestOperationWithRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(OptimizelyAFSecurityPolicy *)securityPolicy;
-(id)HTTPRequestOperationWithHTTPMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(id)GET:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)HEAD:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)POST:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(/*^block*/id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
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
-(OptimizelyAFNetworkReachabilityManager *)reachabilityManager;
-(void)setReachabilityManager:(OptimizelyAFNetworkReachabilityManager *)arg1 ;
@end

