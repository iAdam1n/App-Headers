/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:25:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FB69C75F-331C-4C56-9EB7-0BF6B9A7830F/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet, NSArray, NSString, NSURL, NSURLRequest, NSURLSession;

@interface VCEBridge : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueueCSVCE;
	BOOL _ggAcquired;
	BOOL _ggAcquiring;
	NSSet* _whiteListSet;
	NSSet* _blackListSet;
	NSArray* _adViewNamesArray;
	NSString* _ggString;
	NSURL* _url;
	NSURLRequest* _request;
	NSURLSession* _session;

}

@property (nonatomic,copy) NSString * ggString;                       //@synthesize ggString=_ggString - In the implementation block
@property (assign,nonatomic) BOOL ggAcquired;                         //@synthesize ggAcquired=_ggAcquired - In the implementation block
@property (assign,nonatomic) BOOL ggAcquiring;                        //@synthesize ggAcquiring=_ggAcquiring - In the implementation block
@property (nonatomic,retain) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                  //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSSet * whiteListSet;                    //@synthesize whiteListSet=_whiteListSet - In the implementation block
@property (nonatomic,retain) NSSet * blackListSet;                    //@synthesize blackListSet=_blackListSet - In the implementation block
@property (nonatomic,retain) NSArray * adViewNamesArray;              //@synthesize adViewNamesArray=_adViewNamesArray - In the implementation block
+(id)sharedInstance;
-(void)passVIDict:(id)arg1 forWebView:(id)arg2 ;
-(void)passVIDict:(id)arg1 forWKWebView:(id)arg2 ;
-(void)executeGGForWV:(id)arg1 usingWVID:(id)arg2 ;
-(void)executeGGForWKWV:(id)arg1 usingWVID:(id)arg2 ;
-(NSSet *)whiteListSet;
-(void)setWhiteListSet:(NSSet *)arg1 ;
-(NSSet *)blackListSet;
-(void)setBlackListSet:(NSSet *)arg1 ;
-(NSArray *)adViewNamesArray;
-(void)setAdViewNamesArray:(NSArray *)arg1 ;
-(NSString *)ggString;
-(void)setGgString:(NSString *)arg1 ;
-(BOOL)ggAcquired;
-(void)setGgAcquired:(BOOL)arg1 ;
-(BOOL)ggAcquiring;
-(void)setGgAcquiring:(BOOL)arg1 ;
-(void)requestGGScript;
-(id)init;
-(NSURL *)url;
-(NSURLRequest *)request;
-(void)setUrl:(NSURL *)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(void)willResignActive:(id)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)disable;
-(NSURLSession *)session;
-(void)registerForNotifications;
@end
