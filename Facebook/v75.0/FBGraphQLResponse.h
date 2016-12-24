/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMultipleResponding.h>

@protocol FBRequest;
@class NSString, NSDictionary, FBGraphQLQuery, NSError, FBResponse;

@interface FBGraphQLResponse : NSObject <FBMultipleResponding> {

	id<FBRequest> _request;
	NSDictionary* _headers;
	unsigned long long _index;
	FBGraphQLQuery* _query;
	NSDictionary* _parsedResponse;
	NSError* _parseError;
	FBResponse* _rawResponse;

}

@property (assign,nonatomic) unsigned long long index;                          //@synthesize index=_index - In the implementation block
@property (nonatomic,retain,readonly) FBGraphQLQuery * query;                   //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parsedResponse;              //@synthesize parsedResponse=_parsedResponse - In the implementation block
@property (nonatomic,retain,readonly) NSError * parseError;                     //@synthesize parseError=_parseError - In the implementation block
@property (nonatomic,retain,readonly) FBResponse * rawResponse;                 //@synthesize rawResponse=_rawResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBRequest> request;                           //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * headers;                     //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
-(NSDictionary *)parsedResponse;
-(id)initWithQuery:(id)arg1 request:(id)arg2 headers:(id)arg3 index:(unsigned long long)arg4 parsedResponse:(id)arg5 parseError:(id)arg6 rawResponse:(id)arg7 ;
-(BOOL)isFirstResponse;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id<FBRequest>)request;
-(FBGraphQLQuery *)query;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(NSError *)parseError;
-(NSDictionary *)headers;
-(FBResponse *)rawResponse;
@end
