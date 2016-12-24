/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadSummary, MNIndexedAppMessageSet, NSDictionary, MNThreadQuery;

@interface MNMessagingAndUserDataPreparerCollectedState : FBValueObject <NSCopying> {

	FBMThreadSummary* _threadSummary;
	MNIndexedAppMessageSet* _messages;
	NSDictionary* _usersByUserId;
	MNThreadQuery* _threadQuery;

}

@property (nonatomic,copy,readonly) FBMThreadSummary * threadSummary;               //@synthesize threadSummary=_threadSummary - In the implementation block
@property (nonatomic,copy,readonly) MNIndexedAppMessageSet * messages;              //@synthesize messages=_messages - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * usersByUserId;                   //@synthesize usersByUserId=_usersByUserId - In the implementation block
@property (nonatomic,copy,readonly) MNThreadQuery * threadQuery;                    //@synthesize threadQuery=_threadQuery - In the implementation block
-(FBMThreadSummary *)threadSummary;
-(NSDictionary *)usersByUserId;
-(MNThreadQuery *)threadQuery;
-(id)initWithThreadSummary:(id)arg1 messages:(id)arg2 usersByUserId:(id)arg3 threadQuery:(id)arg4 ;
-(MNIndexedAppMessageSet *)messages;
@end
