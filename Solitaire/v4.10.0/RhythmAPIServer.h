/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol RhythmAPIDelegate;
@class NSObject, NSString, NSMutableData, NSURLSession, RhythmReachability;

@interface RhythmAPIServer : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate> {

	NSObject*<RhythmAPIDelegate> apiDelegate;
	NSString* appId;
	NSString* hardwarePlatform;
	NSString* deviceIdentifier;
	NSMutableData* adData;
	NSURLSession* serverSession;
	NSString* networkType;
	RhythmReachability* reachability;
	NSString* headerString;

}

@property (nonatomic,readonly) NSString * deviceIdentifier; 
@property (nonatomic,readonly) NSString * hardwarePlatform; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateIDFA;
+(id)apiWithDelegate:(id)arg1 ;
-(id)baseUrl;
-(id)browserUserAgent;
-(id)requestWithUrlString:(id)arg1 ;
-(id)requestWithMapperHeader:(id)arg1 URLString:(id)arg2 ;
-(void)initiateConnectionWithRequest:(id)arg1 ;
-(void)notifyError:(id)arg1 ;
-(id)initWithApiDelegate:(id)arg1 ;
-(void)pingTrackingUrls:(id)arg1 clickType:(int)arg2 clickLabel:(id)arg3 EventName:(id)arg4 ;
-(id)currentTimeZone;
-(void)storeAllHeaderValues;
-(void)makeAdRequest:(id)arg1 Headers:(id)arg2 userParams:(id)arg3 ;
-(void)pingTrackingUrls:(id)arg1 EventName:(id)arg2 ;
-(NSString *)hardwarePlatform;
-(id)defaultHost;
-(void)cancel;
-(id)host;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)connectionType;
-(NSString *)deviceIdentifier;
@end
