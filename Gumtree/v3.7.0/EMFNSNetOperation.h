/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/EMFNetOperation.h>

@class NSURLConnection, NSMutableData, NSURLRequest, NSHTTPURLResponse, NSTimer;

@interface EMFNSNetOperation : EMFNetOperation {

	NSURLConnection* _connection;
	NSMutableData* _data;
	NSURLRequest* _urlRequest;
	NSHTTPURLResponse* _urlResponse;
	NSTimer* _urlRequestTimer;

}

@property (nonatomic,retain) NSURLConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSURLRequest * urlRequest;                    //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * urlResponse;              //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSTimer * urlRequestTimer;                    //@synthesize urlRequestTimer=_urlRequestTimer - In the implementation block
-(void)requestTimedOut:(id)arg1 ;
-(void)setUrlRequestTimer:(NSTimer *)arg1 ;
-(NSTimer *)urlRequestTimer;
-(NSHTTPURLResponse *)urlResponse;
-(void)cancel;
-(void)dealloc;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)finish;
-(BOOL)isConcurrent;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)setUrlRequest:(NSURLRequest *)arg1 ;
-(void)setUrlResponse:(NSHTTPURLResponse *)arg1 ;
-(NSURLRequest *)urlRequest;
-(BOOL)connectionShouldUseCredentialStorage:(id)arg1 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
@end

