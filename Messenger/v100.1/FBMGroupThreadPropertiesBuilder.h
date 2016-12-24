/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, FBStringWithRedactedDescription, FBMThreadQueueType, FBMRTCCallData, FBMGroupThreadPropertiesFetchStatus;

@interface FBMGroupThreadPropertiesBuilder : NSObject {

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
+(id)groupThreadPropertiesFromExistingGroupThreadProperties:(id)arg1 ;
+(id)groupThreadProperties;
-(id)withCustomName:(id)arg1 ;
-(id)withFetchStatus:(id)arg1 ;
-(id)withAdminUserIds:(id)arg1 ;
-(id)withThreadCallData:(id)arg1 ;
-(id)withOtherParticipantIds:(id)arg1 ;
-(id)withCustomPicHash:(id)arg1 ;
-(id)withFbId:(id)arg1 ;
-(id)withThreadDescription:(id)arg1 ;
-(id)withFbGroupId:(id)arg1 ;
-(id)withFbEventId:(id)arg1 ;
-(id)withThreadQueueType:(id)arg1 ;
-(id)build;
@end
