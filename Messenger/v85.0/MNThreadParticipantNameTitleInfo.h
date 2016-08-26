/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSOrderedSet, FBMThreadCustomizationInfo;

@interface MNThreadParticipantNameTitleInfo : FBValueObject <NSCopying> {

	NSOrderedSet* _participantIdsInSendingOrder;
	FBMThreadCustomizationInfo* _customizationInfo;

}

@property (nonatomic,copy,readonly) NSOrderedSet * participantIdsInSendingOrder;                 //@synthesize participantIdsInSendingOrder=_participantIdsInSendingOrder - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadCustomizationInfo * customizationInfo;              //@synthesize customizationInfo=_customizationInfo - In the implementation block
-(FBMThreadCustomizationInfo *)customizationInfo;
-(id)initWithParticipantIdsInSendingOrder:(id)arg1 customizationInfo:(id)arg2 ;
-(NSOrderedSet *)participantIdsInSendingOrder;
@end
