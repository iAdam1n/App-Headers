/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@class NSMutableURLRequest, WVPResponse, WVPRequestMatcher;

@interface WebViewProxyURLProtocol : NSURLProtocol {

	NSMutableURLRequest* _correctedRequest;
	WVPResponse* _proxyResponse;
	WVPRequestMatcher* _requestMatcher;

}

@property (nonatomic,retain) WVPResponse * proxyResponse;                     //@synthesize proxyResponse=_proxyResponse - In the implementation block
@property (nonatomic,retain) WVPRequestMatcher * requestMatcher;              //@synthesize requestMatcher=_requestMatcher - In the implementation block
+(id)findRequestMatcher:(id)arg1 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
-(void)setRequestMatcher:(WVPRequestMatcher *)arg1 ;
-(void)setProxyResponse:(WVPResponse *)arg1 ;
-(WVPRequestMatcher *)requestMatcher;
-(WVPResponse *)proxyResponse;
-(void)stopLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
@end

