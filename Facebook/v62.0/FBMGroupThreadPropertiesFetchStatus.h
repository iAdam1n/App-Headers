/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMGroupThreadPropertiesFetchStatus : FBValueObject <NSCoding, NSCopying> {

	BOOL _hasFetchedFbId;
	BOOL _hasFetchedOtherParticipantIds;
	BOOL _hasFetchedCustomName;
	BOOL _hasFetchedThreadDescription;
	BOOL _hasFetchedCustomPicHash;
	BOOL _hasFetchedAdminUserIds;
	BOOL _hasFetchedFbGroupId;
	BOOL _hasFetchedFbEventId;
	BOOL _hasFetchedThreadQueueType;
	BOOL _hasFetchedThreadCallData;

}

@property (nonatomic,readonly) BOOL hasFetchedFbId;                             //@synthesize hasFetchedFbId=_hasFetchedFbId - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedOtherParticipantIds;              //@synthesize hasFetchedOtherParticipantIds=_hasFetchedOtherParticipantIds - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedCustomName;                       //@synthesize hasFetchedCustomName=_hasFetchedCustomName - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedThreadDescription;                //@synthesize hasFetchedThreadDescription=_hasFetchedThreadDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedCustomPicHash;                    //@synthesize hasFetchedCustomPicHash=_hasFetchedCustomPicHash - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedAdminUserIds;                     //@synthesize hasFetchedAdminUserIds=_hasFetchedAdminUserIds - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedFbGroupId;                        //@synthesize hasFetchedFbGroupId=_hasFetchedFbGroupId - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedFbEventId;                        //@synthesize hasFetchedFbEventId=_hasFetchedFbEventId - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedThreadQueueType;                  //@synthesize hasFetchedThreadQueueType=_hasFetchedThreadQueueType - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedThreadCallData;                   //@synthesize hasFetchedThreadCallData=_hasFetchedThreadCallData - In the implementation block
-(id)initWithHasFetchedFbId:(BOOL)arg1 hasFetchedOtherParticipantIds:(BOOL)arg2 hasFetchedCustomName:(BOOL)arg3 hasFetchedThreadDescription:(BOOL)arg4 hasFetchedCustomPicHash:(BOOL)arg5 hasFetchedAdminUserIds:(BOOL)arg6 hasFetchedFbGroupId:(BOOL)arg7 hasFetchedFbEventId:(BOOL)arg8 hasFetchedThreadQueueType:(BOOL)arg9 hasFetchedThreadCallData:(BOOL)arg10 ;
-(BOOL)hasFetchedOtherParticipantIds;
-(BOOL)hasFetchedCustomName;
-(BOOL)hasFetchedThreadDescription;
-(BOOL)hasFetchedCustomPicHash;
-(BOOL)hasFetchedAdminUserIds;
-(BOOL)hasFetchedFbGroupId;
-(BOOL)hasFetchedFbEventId;
-(BOOL)hasFetchedThreadQueueType;
-(BOOL)hasFetchedThreadCallData;
-(BOOL)hasFetchedFbId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
