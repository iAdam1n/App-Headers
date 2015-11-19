/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GADCachedFileDelegate;
@class NSMutableData, NSString, NSURL, NSDictionary, NSURLConnection;

@interface GADCachedFile : NSObject {

	NSMutableData* _receivedData;
	NSString* _filePath;
	id<GADCachedFileDelegate> _delegate;
	NSURL* _sourceURL;
	unsigned long long _cachePolicy;
	NSURL* _HTTPDestinationURL;
	long long _HTTPStatusCode;
	NSDictionary* _HTTPHeaders;
	NSURLConnection* _connection;
	NSString* _receivedModificationDate;

}

@property (assign,nonatomic,__weak) id<GADCachedFileDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * sourceURL;                                                //@synthesize sourceURL=_sourceURL - In the implementation block
@property (assign,nonatomic) unsigned long long cachePolicy;                                   //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentAsString; 
@property (nonatomic,copy,readonly) NSString * filePath;                                       //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) BOOL fileExists; 
@property (nonatomic,copy,readonly) NSString * fileModificationRFC1123DateString; 
@property (nonatomic,retain) NSURL * HTTPDestinationURL;                                       //@synthesize HTTPDestinationURL=_HTTPDestinationURL - In the implementation block
@property (nonatomic,readonly) long long HTTPStatusCode;                                       //@synthesize HTTPStatusCode=_HTTPStatusCode - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * HTTPHeaders;                                //@synthesize HTTPHeaders=_HTTPHeaders - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * receivedModificationDate;                                //@synthesize receivedModificationDate=_receivedModificationDate - In the implementation block
+(id)formatterForHTTPDate;
+(id)headersForResponse:(id)arg1 ;
-(void)processResponse:(id)arg1 ;
-(NSString *)fileModificationRFC1123DateString;
-(void)beginFetchWithCacheBuster:(BOOL)arg1 ;
-(void)cleanUpConnection;
-(void)saveDataToFile;
-(void)saveHeadersFromResponse:(id)arg1 ;
-(NSString *)receivedModificationDate;
-(void)setReceivedModificationDate:(NSString *)arg1 ;
-(NSString *)contentAsString;
-(void)validateWithCacheBuster;
-(NSURL *)HTTPDestinationURL;
-(void)setHTTPDestinationURL:(NSURL *)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<GADCachedFileDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<GADCachedFileDelegate>)delegate;
-(void)invalidate;
-(id)initWithURL:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)validate;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(NSString *)filePath;
-(unsigned long long)cachePolicy;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(BOOL)fileExists;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(NSDictionary *)HTTPHeaders;
-(long long)HTTPStatusCode;
@end

