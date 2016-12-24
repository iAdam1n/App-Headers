/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ListingNetworkSourceDelegate;
@class NSObject, NSString, NSDictionary, NSArray;

@interface ListingNetworkSource : NSObject {

	BOOL _hasFinishedFirstFetch;
	BOOL _hasFinishedFirstSuccessfulFetch;
	BOOL _isFetching;
	BOOL _isFetchingMore;
	BOOL _isFailed;
	NSObject*<OS_dispatch_queue> _parsingQueue;
	NSObject*<ListingNetworkSourceDelegate> _delegate;
	NSString* _fetchURLString;
	NSDictionary* _parameters;
	NSArray* _objects;
	NSString* _afterID;
	NSString* _beforeID;

}

@property (nonatomic,copy) NSString * fetchURLString;                                              //@synthesize fetchURLString=_fetchURLString - In the implementation block
@property (assign,nonatomic) BOOL isFetching;                                                      //@synthesize isFetching=_isFetching - In the implementation block
@property (assign,nonatomic) BOOL isFetchingMore;                                                  //@synthesize isFetchingMore=_isFetchingMore - In the implementation block
@property (assign,nonatomic) BOOL isFailed;                                                        //@synthesize isFailed=_isFailed - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedFirstFetch;                                           //@synthesize hasFinishedFirstFetch=_hasFinishedFirstFetch - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedFirstSuccessfulFetch;                                 //@synthesize hasFinishedFirstSuccessfulFetch=_hasFinishedFirstSuccessfulFetch - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                                            //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> parsingQueue;                            //@synthesize parsingQueue=_parsingQueue - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ListingNetworkSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreContent; 
@property (nonatomic,copy) NSArray * objects;                                                      //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) NSString * afterID;                                                   //@synthesize afterID=_afterID - In the implementation block
@property (nonatomic,retain) NSString * beforeID;                                                  //@synthesize beforeID=_beforeID - In the implementation block
-(id)initWithFetchURLString:(id)arg1 ;
-(id)initWithFetchURLString:(id)arg1 parameters:(id)arg2 ;
-(void)parseMoreData:(id)arg1 ;
-(void)setFetchURLString:(NSString *)arg1 ;
-(BOOL)hasMoreContent;
-(void)fetchMoreData;
-(NSString *)fetchURLString;
-(BOOL)hasFinishedFirstSuccessfulFetch;
-(NSObject*<OS_dispatch_queue>)parsingQueue;
-(void)setHasFinishedFirstFetch:(BOOL)arg1 ;
-(void)setHasFinishedFirstSuccessfulFetch:(BOOL)arg1 ;
-(void)setIsFetchingMore:(BOOL)arg1 ;
-(void)fetchDataWithParameters:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(BOOL)isFetchingMore;
-(NSString *)afterID;
-(void)setIsFailed:(BOOL)arg1 ;
-(void)setParsingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)hasFinishedFirstFetch;
-(void)setAfterID:(NSString *)arg1 ;
-(NSString *)beforeID;
-(void)setBeforeID:(NSString *)arg1 ;
-(void)parseData:(id)arg1 ;
-(void)setDelegate:(NSObject*<ListingNetworkSourceDelegate>)arg1 ;
-(id)debugDescription;
-(NSObject*<ListingNetworkSourceDelegate>)delegate;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)fetchData;
-(BOOL)isFetching;
-(void)setIsFetching:(BOOL)arg1 ;
-(NSArray *)objects;
-(void)setObjects:(NSArray *)arg1 ;
-(BOOL)isFailed;
@end
