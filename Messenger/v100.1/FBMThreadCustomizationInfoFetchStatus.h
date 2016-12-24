/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMThreadCustomizationInfoFetchStatus : FBValueObject <NSCoding, NSCopying> {

	BOOL _hasFetchedCustomLikeEmoji;
	BOOL _hasFetchedOutgoingBubbleColor;
	BOOL _hasFetchedParticipantsNickname;
	BOOL _hasFetchedSubscribedBotIds;

}

@property (nonatomic,readonly) BOOL hasFetchedCustomLikeEmoji;                   //@synthesize hasFetchedCustomLikeEmoji=_hasFetchedCustomLikeEmoji - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedOutgoingBubbleColor;               //@synthesize hasFetchedOutgoingBubbleColor=_hasFetchedOutgoingBubbleColor - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedParticipantsNickname;              //@synthesize hasFetchedParticipantsNickname=_hasFetchedParticipantsNickname - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedSubscribedBotIds;                  //@synthesize hasFetchedSubscribedBotIds=_hasFetchedSubscribedBotIds - In the implementation block
-(BOOL)hasFetchedParticipantsNickname;
-(BOOL)hasFetchedCustomLikeEmoji;
-(BOOL)hasFetchedOutgoingBubbleColor;
-(id)initWithHasFetchedCustomLikeEmoji:(BOOL)arg1 hasFetchedOutgoingBubbleColor:(BOOL)arg2 hasFetchedParticipantsNickname:(BOOL)arg3 hasFetchedSubscribedBotIds:(BOOL)arg4 ;
-(BOOL)hasFetchedSubscribedBotIds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
