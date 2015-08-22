/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class MNMessageFetchRequestQuery, MNModelRequestConfiguration;

@interface MNMessageFetchHandlerRequest : FBValueObject <NSCopying> {

	long long _requestId;
	MNMessageFetchRequestQuery* _query;
	MNModelRequestConfiguration* _configuration;
	unsigned long long _handlerOptions;

}

@property (nonatomic,readonly) long long requestId;                                           //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) MNMessageFetchRequestQuery * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) unsigned long long handlerOptions;                             //@synthesize handlerOptions=_handlerOptions - In the implementation block
-(id)initWithRequestId:(long long)arg1 query:(id)arg2 configuration:(id)arg3 handlerOptions:(unsigned long long)arg4 ;
-(unsigned long long)handlerOptions;
-(MNMessageFetchRequestQuery *)query;
-(MNModelRequestConfiguration *)configuration;
-(long long)requestId;
@end
