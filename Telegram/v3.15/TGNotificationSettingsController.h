/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGCollectionMenuController.h>
#import <Telegram/TGAlertSoundControllerDelegate.h>
#import <Telegram/ASWatcher.h>

@class TGSwitchCollectionItem, TGVariantCollectionItem, NSMutableDictionary, ASHandle, NSString;

@interface TGNotificationSettingsController : TGCollectionMenuController <TGAlertSoundControllerDelegate, ASWatcher> {

	TGSwitchCollectionItem* _privateAlert;
	TGSwitchCollectionItem* _privatePreview;
	TGVariantCollectionItem* _privateSound;
	TGSwitchCollectionItem* _groupAlert;
	TGSwitchCollectionItem* _groupPreview;
	TGVariantCollectionItem* _groupSound;
	TGSwitchCollectionItem* _inAppSounds;
	TGSwitchCollectionItem* _inAppVibrate;
	TGSwitchCollectionItem* _inAppPreview;
	NSMutableDictionary* _privateNotificationSettings;
	NSMutableDictionary* _groupNotificationSettings;
	BOOL _selectingPrivateSound;
	ASHandle* _actionHandle;

}

@property (nonatomic,retain) ASHandle * actionHandle;               //@synthesize actionHandle=_actionHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3 ;
-(void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3 ;
-(void)actionStageActionRequested:(id)arg1 options:(id)arg2 ;
-(ASHandle *)actionHandle;
-(void)setActionHandle:(ASHandle *)arg1 ;
-(id)soundNameFromId:(int)arg1 ;
-(id)_soundInfoListForSelectedSoundId:(int)arg1 ;
-(void)alertSoundController:(id)arg1 didFinishPickingWithSoundInfo:(id)arg2 ;
-(void)privateSoundPressed;
-(void)groupSoundPressed;
-(void)resetAllNotifications;
-(void)_commitResetAllNotitications;
-(void)_updateItems:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end
