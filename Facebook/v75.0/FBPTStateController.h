/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGravityBeaconsListener.h>
#import <Facebook/FBPlacePickerViewControllerDelegate.h>
#import <Facebook/FBLocationAccessManagerDelegate.h>
#import <Facebook/FBPTSettingsDelegate.h>
#import <Facebook/FBSportsPlaceTipsTriggerListener.h>
#import <Facebook/FBPTLocationListenerDelegate.h>
#import <Facebook/FBFeedViewControllerLifecycleListener.h>

@class FBUserSession, FBPTLocationListener, FBPTStateListenerAnnouncer, FBPTStateResolver, FBPTStateControllerForceLoader, FBPTSettingsManager, FBPTStatePresenter, FBPTState, FBMemLocationTriggerUnitSet, NSString;

@interface FBPTStateController : NSObject <FBGravityBeaconsListener, FBPlacePickerViewControllerDelegate, FBLocationAccessManagerDelegate, FBPTSettingsDelegate, FBSportsPlaceTipsTriggerListener, FBPTLocationListenerDelegate, FBFeedViewControllerLifecycleListener> {

	FBUserSession* _session;
	FBPTLocationListener* _locationListener;
	FBPTStateListenerAnnouncer* _stateAnnouncer;
	FBPTStateResolver* _stateResolver;
	FBPTStateControllerForceLoader* _forceLoader;
	FBPTSettingsManager* _settingsManager;
	FBPTStatePresenter* _statePresenter;
	FBPTState* _lastValidState;
	FBMemLocationTriggerUnitSet* _lastUnitSet;

}

@property (nonatomic,readonly) FBPTSettingsManager * settingsManager;                  //@synthesize settingsManager=_settingsManager - In the implementation block
@property (nonatomic,readonly) FBPTStatePresenter * statePresenter;                    //@synthesize statePresenter=_statePresenter - In the implementation block
@property (nonatomic,readonly) FBPTState * lastValidState;                             //@synthesize lastValidState=_lastValidState - In the implementation block
@property (nonatomic,readonly) FBMemLocationTriggerUnitSet * lastUnitSet;              //@synthesize lastUnitSet=_lastUnitSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)locationAccessManager:(id)arg1 accessGranted:(id)arg2 ;
-(void)locationAccessManager:(id)arg1 accessDenied:(unsigned long long)arg2 ;
-(BOOL)placePickerDidCancel:(id)arg1 ;
-(void)placePicker:(id)arg1 didFinishWithPlace:(id)arg2 location:(id)arg3 suggestedPhoto:(BOOL)arg4 ;
-(void)placePicker:(id)arg1 didFinishWithFreeString:(id)arg2 ;
-(void)placePickerDidRemoveCurrentPlace:(id)arg1 ;
-(void)addStateListener:(id)arg1 ;
-(void)removeStateListener:(id)arg1 ;
-(FBMemLocationTriggerUnitSet *)lastUnitSet;
-(FBPTSettingsManager *)settingsManager;
-(void)feedViewDidAppear:(BOOL)arg1 isFirstTime:(BOOL)arg2 ;
-(void)feedViewDidDisappear:(BOOL)arg1 ;
-(FBPTStatePresenter *)statePresenter;
-(void)_didGetLocation:(id)arg1 ;
-(void)didNotFindBeacons;
-(void)didFindBeacons:(id)arg1 staleness:(double)arg2 ;
-(void)locationListener:(id)arg1 didGetLocation:(id)arg2 ;
-(void)_hidePlaceTip;
-(void)applicationDidEnterForeground;
-(void)_requestLocationOrReloadGametime;
-(void)_updateAndAnnounceNewState:(id)arg1 ;
-(void)_didGetLocationTriggerUnitSet:(id)arg1 withPlaceTipState:(id)arg2 ;
-(void)_handleNewLocationTriggerUnitSet:(id)arg1 placeTipState:(id)arg2 ;
-(void)_checkForceReloadGametimeTip;
-(BOOL)_shouldIgnoreNewState:(id)arg1 ;
-(BOOL)_shouldPresentEventTipFeedUnit:(id)arg1 ;
-(void)_didGetNewEventTip:(id)arg1 ;
-(void)_didGetNewGametimeTrigger:(id)arg1 ;
-(void)_logIgnoredState:(id)arg1 withReason:(id)arg2 ;
-(void)_resolveLocation:(id)arg1 withLocationTriggerHandler:(/*^block*/id)arg2 ;
-(void)_forceLoadGametimeTrigger:(id)arg1 forSportsPageID:(id)arg2 ;
-(void)placeTipSettingsTurnOnNotifications:(BOOL)arg1 placeTipsStatePresenter:(id)arg2 ;
-(void)didTriggerPlaceTipsLoad:(id)arg1 forSportsPageID:(id)arg2 ;
-(void)composerDidGetPlace:(id)arg1 reactionSessionID:(id)arg2 ;
-(void)_clearPersistentPlaceTip;
-(FBPTState *)lastValidState;
-(void)dealloc;
-(void)applicationDidEnterBackground;
-(id)initWithSession:(id)arg1 ;
@end
