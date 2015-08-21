/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TNLRequestDelegate.h>

@class TNLRequestOperation, NSURL, NSError, NSString;

@interface TFNTwitterMediaAbstractPlaylist : NSObject <TNLRequestDelegate> {

	TNLRequestOperation* _operation;
	BOOL _loaded;
	NSURL* _url;
	NSError* _error;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL loaded;                         //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id responseHandler;                      //@synthesize responseHandler=_responseHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userAgentString;
-(void)requestOperation:(id)arg1 didCompleteWithResponse:(id)arg2 ;
-(id)completionQueueForRequestOperation:(id)arg1 ;
-(void)requestInstance;
-(id)processResponse:(id)arg1 ;
-(id)mutableRequest;
-(void)dealloc;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(NSError *)error;
-(void)cancelRequest;
-(void)_cancelRequest:(id)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(BOOL)loaded;
@end

