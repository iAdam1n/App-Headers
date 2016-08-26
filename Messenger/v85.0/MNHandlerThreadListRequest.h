/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadListRequestFilter, MNModelRequestConfiguration;

@interface MNHandlerThreadListRequest : FBValueObject <NSCopying> {

	unsigned long long _requestId;
	MNThreadListRequestFilter* _filter;
	MNModelRequestConfiguration* _configuration;

}

@property (nonatomic,readonly) unsigned long long requestId;                                  //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) MNThreadListRequestFilter * filter;                       //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)initWithRequestId:(unsigned long long)arg1 filter:(id)arg2 configuration:(id)arg3 ;
-(MNModelRequestConfiguration *)configuration;
-(unsigned long long)requestId;
-(MNThreadListRequestFilter *)filter;
@end
