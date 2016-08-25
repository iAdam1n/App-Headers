/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAdProviderDelegate;
@class FBAdProviderResponseParser, NSOperationQueue, NSMutableArray, FBAdEnvironmentData, FBAdProviderResponse;

@interface FBAdProvider : NSObject {

	BOOL _active;
	id<FBAdProviderDelegate> _delegate;
	FBAdProviderResponseParser* _adParser;
	NSOperationQueue* _parsingQueue;
	NSMutableArray* _requestQueue;
	FBAdEnvironmentData* _environmentData;
	FBAdProviderResponse* _adResponse;
	NSMutableArray* _adSourceRequestQueue;
	long long _adSourceQueries;
	long long _adSourceCompletedQueries;

}

@property (assign,nonatomic,__weak) id<FBAdProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL active;                                           //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) FBAdProviderResponseParser * adParser;                 //@synthesize adParser=_adParser - In the implementation block
@property (nonatomic,retain) NSOperationQueue * parsingQueue;                       //@synthesize parsingQueue=_parsingQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestQueue;                         //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) FBAdEnvironmentData * environmentData;                 //@synthesize environmentData=_environmentData - In the implementation block
@property (nonatomic,retain) FBAdProviderResponse * adResponse;                     //@synthesize adResponse=_adResponse - In the implementation block
@property (nonatomic,retain) NSMutableArray * adSourceRequestQueue;                 //@synthesize adSourceRequestQueue=_adSourceRequestQueue - In the implementation block
@property (assign,nonatomic) long long adSourceQueries;                             //@synthesize adSourceQueries=_adSourceQueries - In the implementation block
@property (assign,nonatomic) long long adSourceCompletedQueries;                    //@synthesize adSourceCompletedQueries=_adSourceCompletedQueries - In the implementation block
-(void)loadAdWithEnvironmentData:(id)arg1 ;
-(void)dispatchError:(id)arg1 ;
-(void)setParsingQueue:(NSOperationQueue *)arg1 ;
-(void)setAdParser:(FBAdProviderResponseParser *)arg1 ;
-(void)setEnvironmentData:(FBAdEnvironmentData *)arg1 ;
-(FBAdEnvironmentData *)environmentData;
-(void)makeFirstAdRequestWithParameters:(id)arg1 ;
-(NSOperationQueue *)parsingQueue;
-(void)setAdSourceRequestQueue:(NSMutableArray *)arg1 ;
-(void)setAdResponse:(FBAdProviderResponse *)arg1 ;
-(void)handleAdResponse:(id)arg1 data:(id)arg2 error:(id)arg3 canReturnSources:(BOOL)arg4 deliveryUrl:(id)arg5 ;
-(void)parseResponseFromData:(id)arg1 canReturnSources:(BOOL)arg2 ;
-(FBAdProviderResponseParser *)adParser;
-(FBAdProviderResponse *)adResponse;
-(NSMutableArray *)adSourceRequestQueue;
-(long long)adSourceQueries;
-(void)setAdSourceQueries:(long long)arg1 ;
-(long long)adSourceCompletedQueries;
-(void)setAdSourceCompletedQueries:(long long)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<FBAdProviderDelegate>)arg1 ;
-(id<FBAdProviderDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(void)setRequestQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)requestQueue;
-(void)destroy;
@end

