/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@protocol GADURLConnectionDelegate;
@class NSURL, NSURLConnection, NSURLResponse, NSMutableData, NSString;

@interface GADURLConnection : NSObject <NSURLConnectionDataDelegate> {

	BOOL _isInProgress;
	BOOL _allowCache;
	NSURL* _sourceURL;
	NSURL* _destinationURL;
	id<GADURLConnectionDelegate> _delegate;
	NSURLConnection* _connection;
	NSURLResponse* _response;
	NSMutableData* _receivedData;

}

@property (assign,nonatomic) BOOL isInProgress;                                         //@synthesize isInProgress=_isInProgress - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                                           //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSURL * destinationURL;                                      //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign,nonatomic) BOOL allowCache;                                           //@synthesize allowCache=_allowCache - In the implementation block
@property (assign,nonatomic,__weak) id<GADURLConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                                  //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;                              //@synthesize receivedData=_receivedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cacheKeyForURL:(id)arg1 ;
+(id)memoryCache;
+(id)defaultCachePath;
+(void)clearCache;
-(BOOL)startWithRequestURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(BOOL)isInProgress;
-(BOOL)allowCache;
-(id)cachedResponseForURL:(id)arg1 ;
-(void)setIsInProgress:(BOOL)arg1 ;
-(void)setAllowCache:(BOOL)arg1 ;
-(BOOL)tryToStoreResponseAndData;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<GADURLConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<GADURLConnectionDelegate>)delegate;
-(void)stop;
-(NSURLResponse *)response;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
@end

