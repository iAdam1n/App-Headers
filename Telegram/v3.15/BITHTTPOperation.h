/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSURLRequest, NSURLConnection, NSMutableData, NSHTTPURLResponse, NSError, NSData;

@interface BITHTTPOperation : NSOperation <NSURLConnectionDelegate> {

	NSURLRequest* _URLRequest;
	NSURLConnection* _connection;
	NSMutableData* _data;
	BOOL _isExecuting;
	BOOL _isFinished;
	NSHTTPURLResponse* _response;
	NSError* _error;

}

@property (nonatomic,readonly) NSURLRequest * URLRequest;                 //@synthesize URLRequest=_URLRequest - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSError * error;                           //@synthesize error=_error - In the implementation block
+(id)operationWithRequest:(id)arg1 ;
-(void)cancel;
-(NSHTTPURLResponse *)response;
-(NSData *)data;
-(void)start;
-(void)setCompletion:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(BOOL)isConcurrent;
-(NSURLRequest *)URLRequest;
-(NSError *)error;
@end
