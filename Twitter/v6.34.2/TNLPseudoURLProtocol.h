/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@protocol OS_dispatch_queue;
@class NSCachedURLResponse, NSObject;

@interface TNLPseudoURLProtocol : NSURLProtocol {

	BOOL _stopped;
	NSCachedURLResponse* _responseToUse;
	NSObject*<OS_dispatch_queue> _protocolQueue;
	CFRunLoopRef _protocolRunLoop;

}

@property (assign) BOOL stopped;                                                      //@synthesize stopped=_stopped - In the implementation block
@property (nonatomic,retain) NSCachedURLResponse * responseToUse;                     //@synthesize responseToUse=_responseToUse - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> protocolQueue;              //@synthesize protocolQueue=_protocolQueue - In the implementation block
@property (assign,nonatomic) CFRunLoopRef protocolRunLoop;                            //@synthesize protocolRunLoop=_protocolRunLoop - In the implementation block
+(void)registerURLResponse:(id)arg1 body:(id)arg2 withEndpoint:(id)arg3 ;
+(void)unregisterEndpoint:(id)arg1 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(void)initialize;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(void)setProtocolRunLoop:(CFRunLoopRef)arg1 ;
-(BOOL)stopped;
-(void)executeClientBlock:(/*^block*/id)arg1 ;
-(void)setStopped:(BOOL)arg1 ;
-(void)chunkData:(id)arg1 bps:(unsigned long long)arg2 bytesSent:(unsigned long long)arg3 ;
-(NSCachedURLResponse *)responseToUse;
-(void)setResponseToUse:(NSCachedURLResponse *)arg1 ;
-(NSObject*<OS_dispatch_queue>)protocolQueue;
-(void)setProtocolQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CFRunLoopRef)protocolRunLoop;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
-(void)stopLoading;
@end

