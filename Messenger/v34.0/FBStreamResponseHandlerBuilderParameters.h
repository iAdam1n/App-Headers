/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString, FBStreamAnalytics;

@interface FBStreamResponseHandlerBuilderParameters : FBValueObject <NSCopying> {

	NSString* _graphQLRequestTargetID;
	FBStreamAnalytics* _streamAnalytics;
	unsigned long long _loadType;

}

@property (nonatomic,copy,readonly) NSString * graphQLRequestTargetID;                //@synthesize graphQLRequestTargetID=_graphQLRequestTargetID - In the implementation block
@property (nonatomic,copy,readonly) FBStreamAnalytics * streamAnalytics;              //@synthesize streamAnalytics=_streamAnalytics - In the implementation block
@property (nonatomic,readonly) unsigned long long loadType;                           //@synthesize loadType=_loadType - In the implementation block
-(FBStreamAnalytics *)streamAnalytics;
-(unsigned long long)loadType;
-(id)initWithGraphQLRequestTargetID:(id)arg1 streamAnalytics:(id)arg2 loadType:(unsigned long long)arg3 ;
-(NSString *)graphQLRequestTargetID;
@end

