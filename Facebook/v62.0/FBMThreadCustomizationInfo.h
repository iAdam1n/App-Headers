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

@class NSString, UIColor, NSDictionary, NSSet, FBMThreadCustomizationInfoFetchStatus;

@interface FBMThreadCustomizationInfo : FBValueObject <NSCoding, NSCopying> {

	NSString* _customLikeEmoji;
	UIColor* _outgoingBubbleColor;
	NSDictionary* _participantsNickname;
	NSSet* _subscribedBotIds;
	FBMThreadCustomizationInfoFetchStatus* _fetchStatus;

}

@property (nonatomic,copy,readonly) NSString * customLikeEmoji;                                       //@synthesize customLikeEmoji=_customLikeEmoji - In the implementation block
@property (nonatomic,copy,readonly) UIColor * outgoingBubbleColor;                                    //@synthesize outgoingBubbleColor=_outgoingBubbleColor - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * participantsNickname;                              //@synthesize participantsNickname=_participantsNickname - In the implementation block
@property (nonatomic,copy,readonly) NSSet * subscribedBotIds;                                         //@synthesize subscribedBotIds=_subscribedBotIds - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadCustomizationInfoFetchStatus * fetchStatus;              //@synthesize fetchStatus=_fetchStatus - In the implementation block
-(FBMThreadCustomizationInfoFetchStatus *)fetchStatus;
-(NSDictionary *)participantsNickname;
-(id)initWithCustomLikeEmoji:(id)arg1 outgoingBubbleColor:(id)arg2 participantsNickname:(id)arg3 subscribedBotIds:(id)arg4 fetchStatus:(id)arg5 ;
-(NSSet *)subscribedBotIds;
-(NSString *)customLikeEmoji;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIColor *)outgoingBubbleColor;
@end
