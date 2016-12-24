/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/AFURLRequestSerialization.h>

@class NSSet, NSMutableSet, NSMutableDictionary, NSDictionary, NSString;

@interface AFHTTPRequestSerializer : NSObject <AFURLRequestSerialization> {

	BOOL _allowsCellularAccess;
	BOOL _HTTPShouldHandleCookies;
	BOOL _HTTPShouldUsePipelining;
	unsigned long long _stringEncoding;
	unsigned long long _cachePolicy;
	unsigned long long _networkServiceType;
	double _timeoutInterval;
	NSSet* _HTTPMethodsEncodingParametersInURI;
	NSMutableSet* _mutableObservedChangedKeyPaths;
	NSMutableDictionary* _mutableHTTPRequestHeaders;
	unsigned long long _queryStringSerializationStyle;
	/*^block*/id _queryStringSerialization;

}

@property (nonatomic,retain) NSMutableSet * mutableObservedChangedKeyPaths;                 //@synthesize mutableObservedChangedKeyPaths=_mutableObservedChangedKeyPaths - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableHTTPRequestHeaders;               //@synthesize mutableHTTPRequestHeaders=_mutableHTTPRequestHeaders - In the implementation block
@property (assign,nonatomic) unsigned long long queryStringSerializationStyle;              //@synthesize queryStringSerializationStyle=_queryStringSerializationStyle - In the implementation block
@property (nonatomic,copy) id queryStringSerialization;                                     //@synthesize queryStringSerialization=_queryStringSerialization - In the implementation block
@property (assign,nonatomic) unsigned long long stringEncoding;                             //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                                     //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) unsigned long long cachePolicy;                                //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign,nonatomic) BOOL HTTPShouldHandleCookies;                                  //@synthesize HTTPShouldHandleCookies=_HTTPShouldHandleCookies - In the implementation block
@property (assign,nonatomic) BOOL HTTPShouldUsePipelining;                                  //@synthesize HTTPShouldUsePipelining=_HTTPShouldUsePipelining - In the implementation block
@property (assign,nonatomic) unsigned long long networkServiceType;                         //@synthesize networkServiceType=_networkServiceType - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,readonly) NSDictionary * HTTPRequestHeaders; 
@property (nonatomic,retain) NSSet * HTTPMethodsEncodingParametersInURI;                    //@synthesize HTTPMethodsEncodingParametersInURI=_HTTPMethodsEncodingParametersInURI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)serializer;
-(id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id*)arg4 ;
-(void)setQueryStringSerializationWithBlock:(/*^block*/id)arg1 ;
-(id)multipartFormRequestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
-(void)setStringEncoding:(unsigned long long)arg1 ;
-(void)setMutableHTTPRequestHeaders:(NSMutableDictionary *)arg1 ;
-(void)setHTTPMethodsEncodingParametersInURI:(NSSet *)arg1 ;
-(void)setMutableObservedChangedKeyPaths:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)mutableHTTPRequestHeaders;
-(void)setQueryStringSerializationStyle:(unsigned long long)arg1 ;
-(void)setQueryStringSerialization:(id)arg1 ;
-(NSMutableSet *)mutableObservedChangedKeyPaths;
-(id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)HTTPRequestHeaders;
-(id)queryStringSerialization;
-(unsigned long long)queryStringSerializationStyle;
-(NSSet *)HTTPMethodsEncodingParametersInURI;
-(void)setAuthorizationHeaderFieldWithUsername:(id)arg1 password:(id)arg2 ;
-(void)clearAuthorizationHeader;
-(void)setQueryStringSerializationWithStyle:(unsigned long long)arg1 ;
-(id)requestWithMultipartFormRequest:(id)arg1 writingStreamContentsToFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setHTTPShouldHandleCookies:(BOOL)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(unsigned long long)stringEncoding;
-(BOOL)HTTPShouldHandleCookies;
-(double)timeoutInterval;
-(void)setHTTPShouldUsePipelining:(BOOL)arg1 ;
-(unsigned long long)networkServiceType;
-(BOOL)HTTPShouldUsePipelining;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(BOOL)allowsCellularAccess;
-(unsigned long long)cachePolicy;
-(void)setNetworkServiceType:(unsigned long long)arg1 ;
@end
