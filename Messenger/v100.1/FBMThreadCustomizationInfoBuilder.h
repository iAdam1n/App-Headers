/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, NSDictionary, NSSet, FBMThreadCustomizationInfoFetchStatus;

@interface FBMThreadCustomizationInfoBuilder : NSObject {

	NSString* _customLikeEmoji;
	UIColor* _outgoingBubbleColor;
	NSDictionary* _participantsNickname;
	NSSet* _subscribedBotIds;
	FBMThreadCustomizationInfoFetchStatus* _fetchStatus;

}
+(id)threadCustomizationInfoFromExistingThreadCustomizationInfo:(id)arg1 ;
+(id)threadCustomizationInfo;
-(id)withOutgoingBubbleColor:(id)arg1 ;
-(id)withParticipantsNickname:(id)arg1 ;
-(id)withFetchStatus:(id)arg1 ;
-(id)withSubscribedBotIds:(id)arg1 ;
-(id)withCustomLikeEmoji:(id)arg1 ;
-(id)build;
@end
