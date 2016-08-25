/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/GADURLConnectionDelegate.h>

@protocol GADAdFetcherDelegate;
@class NSString, NSRecursiveLock, GADAd, GADRequest, GADTiming, GADURLConnection;

@interface GADAdFetcher : NSObject <GADURLConnectionDelegate> {

	BOOL _hasStartedFetch;
	BOOL _hasNotifiedDelegate;
	NSString* _signedInAdsToken;
	BOOL _adConnectionHasCompleted;
	NSRecursiveLock* _recursiveLock;
	GADAd* _ad;
	GADRequest* _request;
	id<GADAdFetcherDelegate> _delegate;
	GADTiming* _timer;
	GADURLConnection* _adConnection;

}

@property (nonatomic,retain) NSRecursiveLock * recursiveLock;                       //@synthesize recursiveLock=_recursiveLock - In the implementation block
@property (nonatomic,retain) GADAd * ad;                                            //@synthesize ad=_ad - In the implementation block
@property (nonatomic,retain) GADRequest * request;                                  //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<GADAdFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GADTiming * timer;                                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) GADURLConnection * adConnection;                       //@synthesize adConnection=_adConnection - In the implementation block
@property (assign,nonatomic) BOOL adConnectionHasCompleted;                         //@synthesize adConnectionHasCompleted=_adConnectionHasCompleted - In the implementation block
+(id)whitelistedDomains;
-(void)setAd:(GADAd *)arg1 ;
-(BOOL)fetchRemainingContentForAd:(id)arg1 headers:(id)arg2 delegate:(id)arg3 request:(id)arg4 error:(id*)arg5 ;
-(BOOL)fetchRequestURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(void)setAdConnectionHasCompleted:(BOOL)arg1 ;
-(id)requestHeadersForURL:(id)arg1 ;
-(BOOL)fetchRequestURL:(id)arg1 delegate:(id)arg2 responseHeaders:(id)arg3 responseAd:(id)arg4 error:(id*)arg5 ;
-(void)markFetchStart;
-(BOOL)startFetchWithRequestURL:(id)arg1 responseHeaders:(id)arg2 error:(id*)arg3 ;
-(void)processHTTPHeaders:(id)arg1 ;
-(void)resourceFailedToLoadWithError:(id)arg1 responseCode:(unsigned long long)arg2 ;
-(void)completedURLConnection;
-(void)markFetchComplete;
-(unsigned long long)adResponseTypeFromHeaders:(id)arg1 requestError:(id*)arg2 ;
-(id)connection:(id)arg1 shouldRedirectToURL:(id)arg2 ;
-(void)connection:(id)arg1 loadDidReceiveRedirectResponse:(id)arg2 ;
-(BOOL)connection:(id)arg1 loadShouldUseCachedResponse:(id)arg2 ;
-(void)connection:(id)arg1 loadDidReceiveCachedResponse:(id)arg2 ;
-(void)connection:(id)arg1 loadDidFinish:(id)arg2 baseURL:(id)arg3 ;
-(void)connection:(id)arg1 loadDidFail:(id)arg2 httpStatusCode:(long long)arg3 ;
-(NSRecursiveLock *)recursiveLock;
-(void)setRecursiveLock:(NSRecursiveLock *)arg1 ;
-(GADURLConnection *)adConnection;
-(void)setAdConnection:(GADURLConnection *)arg1 ;
-(BOOL)adConnectionHasCompleted;
-(void)cancel;
-(void)setDelegate:(id<GADAdFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<GADAdFetcherDelegate>)delegate;
-(GADRequest *)request;
-(void)setTimer:(GADTiming *)arg1 ;
-(GADTiming *)timer;
-(void)setRequest:(GADRequest *)arg1 ;
-(GADAd *)ad;
@end

