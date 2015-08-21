/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol IGNetworkSourceDelegate, IGNetworkParser, OS_dispatch_queue;
@class NSObject, NSString, NSDictionary, IGRequest;

@interface IGNetworkSource : NSObject {

	BOOL _secure;
	BOOL _cancelsPreviousRequest;
	BOOL _loading;
	id<IGNetworkSourceDelegate> _delegate;
	id<IGNetworkParser> _parser;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* _fetchPath;
	unsigned long long _fetchType;
	NSDictionary* _constantParameters;
	NSObject* _stateMutext;
	IGRequest* _previousRequest;
	NSString* _nextMaxID;

}

@property (nonatomic,__weak,readonly) id<IGNetworkSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<IGNetworkParser> parser;                               //@synthesize parser=_parser - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;               //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * fetchPath;                                //@synthesize fetchPath=_fetchPath - In the implementation block
@property (nonatomic,readonly) unsigned long long fetchType;                             //@synthesize fetchType=_fetchType - In the implementation block
@property (nonatomic,readonly) NSDictionary * constantParameters;                        //@synthesize constantParameters=_constantParameters - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure;                              //@synthesize secure=_secure - In the implementation block
@property (nonatomic,readonly) BOOL cancelsPreviousRequest;                              //@synthesize cancelsPreviousRequest=_cancelsPreviousRequest - In the implementation block
@property (nonatomic,retain) NSObject * stateMutext;                                     //@synthesize stateMutext=_stateMutext - In the implementation block
@property (nonatomic,retain) IGRequest * previousRequest;                                //@synthesize previousRequest=_previousRequest - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                              //@synthesize loading=_loading - In the implementation block
@property (nonatomic,copy) NSString * nextMaxID;                                         //@synthesize nextMaxID=_nextMaxID - In the implementation block
+(void)appendTopAggregatorOverride:(id)arg1 ;
-(void)setNextMaxID:(NSString *)arg1 ;
-(NSString *)nextMaxID;
-(id)initWithDelegate:(id)arg1 parser:(id)arg2 delegateQueue:(id)arg3 fetchPath:(id)arg4 fetchType:(unsigned long long)arg5 constantParameters:(id)arg6 secure:(BOOL)arg7 cancelsPreviousRequest:(BOOL)arg8 ;
-(void)fetchMore;
-(BOOL)isMoreAvailable;
-(NSString *)fetchPath;
-(void)fetchWithParameters:(id)arg1 ;
-(void)fetchWithParameters:(id)arg1 isLoadMore:(BOOL)arg2 ;
-(void)fetchMoreWithParameters:(id)arg1 ;
-(id)appendParameters:(id)arg1 withMaxID:(id)arg2 ;
-(BOOL)cancelsPreviousRequest;
-(IGRequest *)previousRequest;
-(id)requestWithParameters:(id)arg1 ;
-(NSObject *)stateMutext;
-(void)setPreviousRequest:(IGRequest *)arg1 ;
-(void)handleSuccess:(id)arg1 isLoadMore:(BOOL)arg2 ;
-(void)handleFailure:(id)arg1 ;
-(NSDictionary *)constantParameters;
-(id)fetchURL;
-(id)parametersWithParameters:(id)arg1 ;
-(void)setStateMutext:(NSObject *)arg1 ;
-(unsigned long long)fetchType;
-(id<IGNetworkParser>)parser;
-(void)cancel;
-(id)init;
-(id<IGNetworkSourceDelegate>)delegate;
-(BOOL)isSecure;
-(BOOL)isLoading;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setLoading:(BOOL)arg1 ;
-(void)fetch;
@end

