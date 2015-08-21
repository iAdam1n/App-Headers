/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/NSURLConnectionDelegate.h>

@protocol ACTPingerDelegate;
@class NSURLRequest, NSURLConnection, NSURLResponse, NSMutableData, NSDate, NSString;

@interface ACTPinger : NSObject <NSURLConnectionDelegate> {

	BOOL _modifiedForRetry;
	id<ACTPingerDelegate> _delegate;
	NSURLRequest* _request;
	NSURLConnection* _connection;
	NSURLResponse* _response;
	NSMutableData* _receivedData;
	unsigned long long _remainingRetryCount;
	NSDate* _staleDate;

}

@property (nonatomic,retain) id<ACTPingerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURLRequest * request;                                         //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                                     //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;                                 //@synthesize receivedData=_receivedData - In the implementation block
@property (assign,nonatomic) unsigned long long remainingRetryCount;                       //@synthesize remainingRetryCount=_remainingRetryCount - In the implementation block
@property (nonatomic,retain) NSDate * staleDate;                                           //@synthesize staleDate=_staleDate - In the implementation block
@property (assign,getter=isModifiedForRetry,nonatomic) BOOL modifiedForRetry;              //@synthesize modifiedForRetry=_modifiedForRetry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pingerWithRequestString:(id)arg1 retryParameters:(id)arg2 ;
-(id)requestString;
-(id)parameters;
-(void)setRemainingRetryCount:(unsigned long long)arg1 ;
-(void)setStaleDate:(NSDate *)arg1 ;
-(void)setModifiedForRetry:(BOOL)arg1 ;
-(NSDate *)staleDate;
-(unsigned long long)remainingRetryCount;
-(id)retryQueue;
-(id)pingerStore;
-(void)appendRetryParameter;
-(BOOL)isModifiedForRetry;
-(void)dealloc;
-(void)setDelegate:(id<ACTPingerDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<ACTPingerDelegate>)delegate;
-(NSURLRequest *)request;
-(NSURLResponse *)response;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithRequest:(id)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(BOOL)shouldRetry;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(void)ping;
-(void)handleFailureWithError:(id)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
@end
