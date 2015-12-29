//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionMenuController.h"

#import "ASWatcher.h"
#import "TGAlertSoundControllerDelegate.h"

@class ASHandle, NSMutableDictionary, NSString, TGSwitchCollectionItem, TGVariantCollectionItem;

@interface TGNotificationSettingsController : TGCollectionMenuController <TGAlertSoundControllerDelegate, ASWatcher>
{
    TGSwitchCollectionItem *_privateAlert;
    TGSwitchCollectionItem *_privatePreview;
    TGVariantCollectionItem *_privateSound;
    TGSwitchCollectionItem *_groupAlert;
    TGSwitchCollectionItem *_groupPreview;
    TGVariantCollectionItem *_groupSound;
    TGSwitchCollectionItem *_inAppSounds;
    TGSwitchCollectionItem *_inAppVibrate;
    TGSwitchCollectionItem *_inAppPreview;
    NSMutableDictionary *_privateNotificationSettings;
    NSMutableDictionary *_groupNotificationSettings;
    _Bool _selectingPrivateSound;
    ASHandle *_actionHandle;
}

@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)_updateItems:(_Bool)arg1;
- (id)soundNameFromId:(int)arg1;
- (void)alertSoundController:(id)arg1 didFinishPickingWithSoundInfo:(id)arg2;
- (void)groupSoundPressed;
- (void)privateSoundPressed;
- (id)_soundInfoListForSelectedSoundId:(int)arg1;
- (void)_commitResetAllNotitications;
- (void)resetAllNotifications;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
