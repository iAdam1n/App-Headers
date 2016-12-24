/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphBatchParticipatingRequest.h>

@class NSDictionary, NSString;

@interface FBFQLRequest : FBGraphBatchParticipatingRequest {

	NSDictionary* _parameters;
	NSDictionary* _queries;
	NSString* _queryName;

}

@property (nonatomic,copy,readonly) NSDictionary * queries;              //@synthesize queries=_queries - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryName;                //@synthesize queryName=_queryName - In the implementation block
-(id)initWithFQLQuery:(id)arg1 ;
-(id)batchParameters;
-(id)initWithFQLQuery:(id)arg1 friendlyName:(id)arg2 callerClass:(Class)arg3 ;
-(void)setQueryParameter:(id)arg1 forKey:(id)arg2 ;
-(id)initWithFQLQueries:(id)arg1 friendlyName:(id)arg2 callerClass:(Class)arg3 ;
-(id)analyticsName;
-(id)initWithFQLQueries:(id)arg1 friendlyName:(id)arg2 callerContext:(id)arg3 ;
-(id)initWithFQLQueries:(id)arg1 ;
-(/*^block*/id)responseHandlerFactory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)parameters;
-(id)host;
-(id)httpMethod;
-(NSString *)queryName;
-(id)relativePath;
-(NSDictionary *)queries;
@end
