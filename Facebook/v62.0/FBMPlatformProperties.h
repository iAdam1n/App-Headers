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

@class NSArray, FBMPageSubscriptionInfo, FBMMessengerExtensionProperties;

@interface FBMPlatformProperties : FBValueObject <NSCoding, NSCopying> {

	BOOL _isBot;
	BOOL _isStructuredMenuEnabled;
	NSArray* _callToActions;
	NSArray* _structuredMenuCTAs;
	FBMPageSubscriptionInfo* _pageSubscriptionInfo;
	unsigned long long _structuredMenuBadgeCount;
	FBMMessengerExtensionProperties* _messengerExtensionProperties;

}

@property (nonatomic,copy,readonly) NSArray * callToActions;                                                     //@synthesize callToActions=_callToActions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * structuredMenuCTAs;                                                //@synthesize structuredMenuCTAs=_structuredMenuCTAs - In the implementation block
@property (nonatomic,copy,readonly) FBMPageSubscriptionInfo * pageSubscriptionInfo;                              //@synthesize pageSubscriptionInfo=_pageSubscriptionInfo - In the implementation block
@property (nonatomic,readonly) BOOL isBot;                                                                       //@synthesize isBot=_isBot - In the implementation block
@property (nonatomic,readonly) BOOL isStructuredMenuEnabled;                                                     //@synthesize isStructuredMenuEnabled=_isStructuredMenuEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long structuredMenuBadgeCount;                                      //@synthesize structuredMenuBadgeCount=_structuredMenuBadgeCount - In the implementation block
@property (nonatomic,copy,readonly) FBMMessengerExtensionProperties * messengerExtensionProperties;              //@synthesize messengerExtensionProperties=_messengerExtensionProperties - In the implementation block
-(NSArray *)callToActions;
-(id)initWithCallToActions:(id)arg1 structuredMenuCTAs:(id)arg2 pageSubscriptionInfo:(id)arg3 isBot:(BOOL)arg4 isStructuredMenuEnabled:(BOOL)arg5 structuredMenuBadgeCount:(unsigned long long)arg6 messengerExtensionProperties:(id)arg7 ;
-(NSArray *)structuredMenuCTAs;
-(FBMPageSubscriptionInfo *)pageSubscriptionInfo;
-(BOOL)isStructuredMenuEnabled;
-(unsigned long long)structuredMenuBadgeCount;
-(FBMMessengerExtensionProperties *)messengerExtensionProperties;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isBot;
@end
