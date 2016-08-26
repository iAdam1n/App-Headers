/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, FBStringWithRedactedDescription, FBMThreadQueueType, FBMRTCCallData, FBMGroupThreadPropertiesFetchStatus;

@interface FBMGroupThreadProperties : FBValueObject <NSCoding, NSCopying> {

	NSString* _fbId;
	NSSet* _otherParticipantIds;
	FBStringWithRedactedDescription* _customName;
	FBStringWithRedactedDescription* _threadDescription;
	NSString* _customPicHash;
	NSSet* _adminUserIds;
	NSString* _fbGroupId;
	NSString* _fbEventId;
	FBMThreadQueueType* _threadQueueType;
	FBMRTCCallData* _threadCallData;
	FBMGroupThreadPropertiesFetchStatus* _fetchStatus;

}

@property (nonatomic,copy,readonly) NSString * fbId;                                                  //@synthesize fbId=_fbId - In the implementation block
@property (nonatomic,copy,readonly) NSSet * otherParticipantIds;                                      //@synthesize otherParticipantIds=_otherParticipantIds - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * customName;                     //@synthesize customName=_customName - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * threadDescription;              //@synthesize threadDescription=_threadDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * customPicHash;                                         //@synthesize customPicHash=_customPicHash - In the implementation block
@property (nonatomic,copy,readonly) NSSet * adminUserIds;                                             //@synthesize adminUserIds=_adminUserIds - In the implementation block
@property (nonatomic,copy,readonly) NSString * fbGroupId;                                             //@synthesize fbGroupId=_fbGroupId - In the implementation block
@property (nonatomic,copy,readonly) NSString * fbEventId;                                             //@synthesize fbEventId=_fbEventId - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadQueueType * threadQueueType;                             //@synthesize threadQueueType=_threadQueueType - In the implementation block
@property (nonatomic,copy,readonly) FBMRTCCallData * threadCallData;                                  //@synthesize threadCallData=_threadCallData - In the implementation block
@property (nonatomic,copy,readonly) FBMGroupThreadPropertiesFetchStatus * fetchStatus;                //@synthesize fetchStatus=_fetchStatus - In the implementation block
-(NSString *)customPicHash;
-(NSSet *)otherParticipantIds;
-(NSString *)fbId;
-(FBMRTCCallData *)threadCallData;
-(FBMThreadQueueType *)threadQueueType;
-(FBMGroupThreadPropertiesFetchStatus *)fetchStatus;
-(NSString *)fbGroupId;
-(NSString *)fbEventId;
-(NSSet *)adminUserIds;
-(id)initWithFbId:(id)arg1 otherParticipantIds:(id)arg2 customName:(id)arg3 threadDescription:(id)arg4 customPicHash:(id)arg5 adminUserIds:(id)arg6 fbGroupId:(id)arg7 fbEventId:(id)arg8 threadQueueType:(id)arg9 threadCallData:(id)arg10 fetchStatus:(id)arg11 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(FBStringWithRedactedDescription *)threadDescription;
-(FBStringWithRedactedDescription *)customName;
@end
