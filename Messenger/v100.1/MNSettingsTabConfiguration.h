/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, MNSettingsTabAccountSwitchingConfiguration, MNContactSettingsConfiguration, MNSettingsTabNameConfiguration;

@interface MNSettingsTabConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldShowPeopleRow;
	BOOL _shouldShowHelpRow;
	BOOL _shouldShowMontageRow;
	BOOL _shouldShowMessengerCode;
	BOOL _shouldShowUsername;
	BOOL _canEditUsername;
	BOOL _shouldShowPhoneNumber;
	BOOL _shouldShowPhoneNumberOptions;
	BOOL _shouldShowSecretConversationRow;
	BOOL _shouldShowMAIRow;
	BOOL _prioritizeMessengerCode;
	BOOL _allowsProfileEditing;
	NSURL* _helpURL;
	MNSettingsTabAccountSwitchingConfiguration* _accountSwitchingConfiguration;
	MNContactSettingsConfiguration* _contactSettingsConfiguration;
	MNSettingsTabNameConfiguration* _settingsTabNameConfiguration;

}

@property (nonatomic,readonly) BOOL shouldShowPeopleRow;                                                                     //@synthesize shouldShowPeopleRow=_shouldShowPeopleRow - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowHelpRow;                                                                       //@synthesize shouldShowHelpRow=_shouldShowHelpRow - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMontageRow;                                                                    //@synthesize shouldShowMontageRow=_shouldShowMontageRow - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMessengerCode;                                                                 //@synthesize shouldShowMessengerCode=_shouldShowMessengerCode - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowUsername;                                                                      //@synthesize shouldShowUsername=_shouldShowUsername - In the implementation block
@property (nonatomic,readonly) BOOL canEditUsername;                                                                         //@synthesize canEditUsername=_canEditUsername - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPhoneNumber;                                                                   //@synthesize shouldShowPhoneNumber=_shouldShowPhoneNumber - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPhoneNumberOptions;                                                            //@synthesize shouldShowPhoneNumberOptions=_shouldShowPhoneNumberOptions - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSecretConversationRow;                                                         //@synthesize shouldShowSecretConversationRow=_shouldShowSecretConversationRow - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMAIRow;                                                                        //@synthesize shouldShowMAIRow=_shouldShowMAIRow - In the implementation block
@property (nonatomic,readonly) BOOL prioritizeMessengerCode;                                                                 //@synthesize prioritizeMessengerCode=_prioritizeMessengerCode - In the implementation block
@property (nonatomic,copy,readonly) NSURL * helpURL;                                                                         //@synthesize helpURL=_helpURL - In the implementation block
@property (nonatomic,readonly) BOOL allowsProfileEditing;                                                                    //@synthesize allowsProfileEditing=_allowsProfileEditing - In the implementation block
@property (nonatomic,copy,readonly) MNSettingsTabAccountSwitchingConfiguration * accountSwitchingConfiguration;              //@synthesize accountSwitchingConfiguration=_accountSwitchingConfiguration - In the implementation block
@property (nonatomic,copy,readonly) MNContactSettingsConfiguration * contactSettingsConfiguration;                           //@synthesize contactSettingsConfiguration=_contactSettingsConfiguration - In the implementation block
@property (nonatomic,copy,readonly) MNSettingsTabNameConfiguration * settingsTabNameConfiguration;                           //@synthesize settingsTabNameConfiguration=_settingsTabNameConfiguration - In the implementation block
-(BOOL)shouldShowMessengerCode;
-(MNSettingsTabNameConfiguration *)settingsTabNameConfiguration;
-(BOOL)allowsProfileEditing;
-(MNContactSettingsConfiguration *)contactSettingsConfiguration;
-(BOOL)shouldShowPeopleRow;
-(BOOL)shouldShowMontageRow;
-(BOOL)shouldShowSecretConversationRow;
-(BOOL)shouldShowMAIRow;
-(MNSettingsTabAccountSwitchingConfiguration *)accountSwitchingConfiguration;
-(BOOL)shouldShowHelpRow;
-(id)initWithShouldShowPeopleRow:(BOOL)arg1 shouldShowHelpRow:(BOOL)arg2 shouldShowMontageRow:(BOOL)arg3 shouldShowMessengerCode:(BOOL)arg4 shouldShowUsername:(BOOL)arg5 canEditUsername:(BOOL)arg6 shouldShowPhoneNumber:(BOOL)arg7 shouldShowPhoneNumberOptions:(BOOL)arg8 shouldShowSecretConversationRow:(BOOL)arg9 shouldShowMAIRow:(BOOL)arg10 prioritizeMessengerCode:(BOOL)arg11 helpURL:(id)arg12 allowsProfileEditing:(BOOL)arg13 accountSwitchingConfiguration:(id)arg14 contactSettingsConfiguration:(id)arg15 settingsTabNameConfiguration:(id)arg16 ;
-(BOOL)canEditUsername;
-(BOOL)shouldShowPhoneNumberOptions;
-(BOOL)prioritizeMessengerCode;
-(BOOL)shouldShowUsername;
-(BOOL)shouldShowPhoneNumber;
-(NSURL *)helpURL;
@end
