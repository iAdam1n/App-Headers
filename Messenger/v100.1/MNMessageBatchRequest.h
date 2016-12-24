/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, MNModelRequestConfiguration, MNMessageBatchRequestBehavior;

@interface MNMessageBatchRequest : FBValueObject <NSCopying> {

	NSSet* _messageRangeQueries;
	MNModelRequestConfiguration* _configuration;
	MNMessageBatchRequestBehavior* _behavior;

}

@property (nonatomic,copy,readonly) NSSet * messageRangeQueries;                              //@synthesize messageRangeQueries=_messageRangeQueries - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) MNMessageBatchRequestBehavior * behavior;                 //@synthesize behavior=_behavior - In the implementation block
-(id)initWithMessageRangeQueries:(id)arg1 configuration:(id)arg2 behavior:(id)arg3 ;
-(NSSet *)messageRangeQueries;
-(MNMessageBatchRequestBehavior *)behavior;
-(MNModelRequestConfiguration *)configuration;
@end
