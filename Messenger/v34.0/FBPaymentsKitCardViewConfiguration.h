/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSDictionary, NSNumber, FBMemCreditCard;

@interface FBPaymentsKitCardViewConfiguration : FBValueObject <NSCopying> {

	NSDictionary* _configurationsForIdentifiers;
	NSNumber* _shouldShowActionButtons;
	long long _presentingMode;
	FBMemCreditCard* _card;

}

@property (nonatomic,copy,readonly) NSDictionary * configurationsForIdentifiers;              //@synthesize configurationsForIdentifiers=_configurationsForIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * shouldShowActionButtons;                       //@synthesize shouldShowActionButtons=_shouldShowActionButtons - In the implementation block
@property (nonatomic,readonly) long long presentingMode;                                      //@synthesize presentingMode=_presentingMode - In the implementation block
@property (nonatomic,copy,readonly) FBMemCreditCard * card;                                   //@synthesize card=_card - In the implementation block
-(id)initWithConfigurationsForIdentifiers:(id)arg1 shouldShowActionButtons:(id)arg2 presentingMode:(long long)arg3 card:(id)arg4 ;
-(FBMemCreditCard *)card;
-(long long)presentingMode;
-(NSNumber *)shouldShowActionButtons;
-(NSDictionary *)configurationsForIdentifiers;
@end

