/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGCollectionMenuController.h>

@class TGNotificationPrivacyAccountSetting, TGCheckCollectionItem, TGVariantCollectionItem, TGCollectionMenuSection;

@interface TGPrivacyLastSeenController : TGCollectionMenuController {

	int _mode;
	TGNotificationPrivacyAccountSetting* _savedPrivacySettings;
	TGNotificationPrivacyAccountSetting* _privacySettings;
	BOOL _settingsModified;
	TGCheckCollectionItem* _everybodyItem;
	TGCheckCollectionItem* _contactsItem;
	TGCheckCollectionItem* _nobodyItem;
	TGVariantCollectionItem* _alwaysShareWithItem;
	TGVariantCollectionItem* _neverShareWithItem;
	TGCollectionMenuSection* _customShareSection;
	id _addInterfaceCoordinator;
	/*^block*/id _privacySettingsChanged;

}

@property (nonatomic,copy,readonly) id privacySettingsChanged;              //@synthesize privacySettingsChanged=_privacySettingsChanged - In the implementation block
-(void)everybodyPressed;
-(void)contactsPressed;
-(void)nobodyPressed;
-(void)alwaysShareWithPressed;
-(void)neverShareWithPressed;
-(void)setPrivacySettings:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSettingsModified:(BOOL)arg1 ;
-(void)updatePrivacySettings:(id)arg1 ;
-(id)initWithMode:(int)arg1 privacySettings:(id)arg2 privacySettingsChanged:(/*^block*/id)arg3 ;
-(id)privacySettingsChanged;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)cancelPressed;
-(void)donePressed;
@end
