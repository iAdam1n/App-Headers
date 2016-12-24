/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class TGNotificationPrivacyAccountSetting, TGAccountTTLSetting;

@interface TGAccountSettings : NSObject <NSCoding> {

	TGNotificationPrivacyAccountSetting* _notificationSettings;
	TGNotificationPrivacyAccountSetting* _groupsAndChannelsSettings;
	TGNotificationPrivacyAccountSetting* _callSettings;
	TGAccountTTLSetting* _accountTTLSetting;

}

@property (nonatomic,readonly) TGNotificationPrivacyAccountSetting * notificationSettings;                   //@synthesize notificationSettings=_notificationSettings - In the implementation block
@property (nonatomic,readonly) TGNotificationPrivacyAccountSetting * groupsAndChannelsSettings;              //@synthesize groupsAndChannelsSettings=_groupsAndChannelsSettings - In the implementation block
@property (nonatomic,readonly) TGNotificationPrivacyAccountSetting * callSettings;                           //@synthesize callSettings=_callSettings - In the implementation block
@property (nonatomic,readonly) TGAccountTTLSetting * accountTTLSetting;                                      //@synthesize accountTTLSetting=_accountTTLSetting - In the implementation block
-(TGNotificationPrivacyAccountSetting *)groupsAndChannelsSettings;
-(TGNotificationPrivacyAccountSetting *)callSettings;
-(TGAccountTTLSetting *)accountTTLSetting;
-(id)initWithNotificationSettings:(id)arg1 groupsAndChannelsSettings:(id)arg2 callSettings:(id)arg3 accountTTLSetting:(id)arg4 ;
-(TGNotificationPrivacyAccountSetting *)notificationSettings;
-(id)initWithDefaultValues;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
