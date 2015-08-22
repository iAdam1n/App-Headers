/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class FBMBatchThreadRequestFilter, MNModelRequestConfiguration, FBMBatchThreadRequestBehavior;

@interface FBMBatchThreadRequest : FBValueObject <NSCopying> {

	FBMBatchThreadRequestFilter* _filter;
	MNModelRequestConfiguration* _configuration;
	FBMBatchThreadRequestBehavior* _behavior;

}

@property (nonatomic,copy,readonly) FBMBatchThreadRequestFilter * filter;                     //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) FBMBatchThreadRequestBehavior * behavior;                 //@synthesize behavior=_behavior - In the implementation block
-(id)initWithFilter:(id)arg1 configuration:(id)arg2 behavior:(id)arg3 ;
-(FBMBatchThreadRequestBehavior *)behavior;
-(MNModelRequestConfiguration *)configuration;
-(FBMBatchThreadRequestFilter *)filter;
@end
