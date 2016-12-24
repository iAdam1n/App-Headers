/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WANotificationWindowDelegate.h>

@class CTCallCenter, SoundEffect, AVAudioPlayer, NSMutableDictionary, NSMutableArray, WATextFormatter, WANotificationWindow, NSString, NSArray, WAPushSound;

@interface WAMessageNotificationCenter : NSObject <WANotificationWindowDelegate> {

	CTCallCenter* _callCenter;
	SoundEffect* _incomingSoundEffect;
	SoundEffect* _outgoingSoundEffect;
	AVAudioPlayer* _incomingSoundShort;
	NSMutableDictionary* _lastIncomingSounds;
	NSMutableDictionary* _lastNotificationTimeForChat;
	NSMutableDictionary* _fetchedCustomConfigs;
	BOOL _isUsingSilentPush;
	BOOL _needsUpdateServer;
	BOOL _requestInProgress;
	NSMutableArray* _presentedInAppNotificationAlerts;
	NSMutableArray* _deferredInAppNotificationAlerts;
	unsigned long long _timeoutCounter;
	NSMutableDictionary* _activeAlertViews;
	NSMutableDictionary* _postedLocalNotifications;
	WATextFormatter* _textFormatter;
	BOOL _playOfflineMessageSound;
	BOOL _chatSoundsEnabled;
	BOOL _chatVibrateEnabled;
	BOOL _showMessagePreview;
	BOOL _personalMessageAlertsEnabled;
	BOOL _groupMessageAlertsEnabled;
	BOOL _callAlertsEnabled;
	BOOL _ignoreNotifications;
	WANotificationWindow* _notificationWindow;
	unsigned long long _inAppAlertStyle;
	NSString* _personalMessageSound;
	NSString* _groupMessageSound;
	NSString* _callSound;
	NSArray* _pushSoundSets;
	NSArray* _ringtoneSets;
	WAPushSound* _defaultRingtone;

}

@property (nonatomic,readonly) WANotificationWindow * notificationWindow;              //@synthesize notificationWindow=_notificationWindow - In the implementation block
@property (nonatomic,copy) NSString * apnsToken; 
@property (nonatomic,copy) NSString * voipToken; 
@property (assign,nonatomic) BOOL playOfflineMessageSound;                             //@synthesize playOfflineMessageSound=_playOfflineMessageSound - In the implementation block
@property (assign,nonatomic) BOOL chatSoundsEnabled;                                   //@synthesize chatSoundsEnabled=_chatSoundsEnabled - In the implementation block
@property (assign,nonatomic) BOOL chatVibrateEnabled;                                  //@synthesize chatVibrateEnabled=_chatVibrateEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long inAppAlertStyle;                       //@synthesize inAppAlertStyle=_inAppAlertStyle - In the implementation block
@property (assign,nonatomic) BOOL showMessagePreview;                                  //@synthesize showMessagePreview=_showMessagePreview - In the implementation block
@property (nonatomic,copy) NSString * personalMessageSound;                            //@synthesize personalMessageSound=_personalMessageSound - In the implementation block
@property (nonatomic,readonly) NSString * localizedPersonalMessageSound; 
@property (assign,nonatomic) BOOL personalMessageAlertsEnabled;                        //@synthesize personalMessageAlertsEnabled=_personalMessageAlertsEnabled - In the implementation block
@property (nonatomic,copy) NSString * groupMessageSound;                               //@synthesize groupMessageSound=_groupMessageSound - In the implementation block
@property (nonatomic,readonly) NSString * localizedGroupMessageSound; 
@property (assign,nonatomic) BOOL groupMessageAlertsEnabled;                           //@synthesize groupMessageAlertsEnabled=_groupMessageAlertsEnabled - In the implementation block
@property (nonatomic,copy) NSString * callSound;                                       //@synthesize callSound=_callSound - In the implementation block
@property (nonatomic,readonly) NSString * localizedCallSound; 
@property (assign,nonatomic) BOOL callAlertsEnabled;                                   //@synthesize callAlertsEnabled=_callAlertsEnabled - In the implementation block
@property (nonatomic,readonly) NSArray * pushSoundSets;                                //@synthesize pushSoundSets=_pushSoundSets - In the implementation block
@property (nonatomic,readonly) NSArray * ringtoneSets;                                 //@synthesize ringtoneSets=_ringtoneSets - In the implementation block
@property (nonatomic,readonly) WAPushSound * defaultRingtone;                          //@synthesize defaultRingtone=_defaultRingtone - In the implementation block
@property (assign,nonatomic) BOOL ignoreNotifications;                                 //@synthesize ignoreNotifications=_ignoreNotifications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)promptUserForMuteEndDateFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)promptUserForToUnmuteFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)titleForWAAlertStyle:(unsigned long long)arg1 ;
-(void)chatStorageWillUnloadDatabase:(id)arg1 ;
-(BOOL)personalMessageAlertsEnabled;
-(void)processDeferredNotificationsByDiscardingNotifications:(BOOL)arg1 ;
-(BOOL)ignoreNotifications;
-(BOOL)hasValidAPNSToken;
-(void)setApnsToken:(NSString *)arg1 ;
-(void)setNeedsUpdateServer;
-(void)resetToDefaultsAndUpdateServer:(BOOL)arg1 ;
-(id)localizedMuteDateForJID:(id)arg1 ;
-(void)loadGlobalSettings;
-(void)loadNotificationSounds;
-(WAPushSound *)defaultRingtone;
-(void)setCallSound:(NSString *)arg1 ;
-(void)setCallAlertsEnabled:(BOOL)arg1 ;
-(NSString *)callSound;
-(NSArray *)ringtoneSets;
-(void)clearAllNotificationTimeouts;
-(void)setInAppAlertStyle:(unsigned long long)arg1 ;
-(void)fetchAllCustomNotificationConfigsIfNecessary;
-(id)defaultPushSoundForJID:(id)arg1 ;
-(void)updateServerIfNecessary;
-(BOOL)showMessagePreview;
-(NSString *)personalMessageSound;
-(BOOL)groupMessageAlertsEnabled;
-(NSString *)groupMessageSound;
-(BOOL)callAlertsEnabled;
-(BOOL)hasValidVOIPToken;
-(id)allCustomNotificationConfigs;
-(id)muteDateForJID:(id)arg1 ;
-(id)configForJID:(id)arg1 ;
-(id)addNewConfigForJID:(id)arg1 ;
-(short)alertsSettingForJID:(id)arg1 ;
-(id)pushNotificationSoundForJID:(id)arg1 ;
-(NSArray *)pushSoundSets;
-(id)callSoundForJID:(id)arg1 ;
-(BOOL)playOfflineMessageSound;
-(BOOL)chatVibrateEnabled;
-(BOOL)chatSoundsEnabled;
-(void)playIncomingSoundEffect;
-(void)playIncomingSoundEffectShort:(id)arg1 ;
-(void)setPlayOfflineMessageSound:(BOOL)arg1 ;
-(void)playOutgoingSoundEffect;
-(void)presentNotificationForMessage:(id)arg1 fromSenderName:(id)arg2 withSoundEffect:(BOOL)arg3 ;
-(BOOL)isChatWithJIDMuted:(id)arg1 ;
-(void)showInAppNotificationForIncomingMessage:(id)arg1 withSoundEffect:(BOOL)arg2 ;
-(void)presentLocalNotificationIfNeededForMessage:(id)arg1 fromUser:(id)arg2 withSoundEffect:(BOOL)arg3 ;
-(BOOL)shouldSuppressSoundForMessage:(id)arg1 ;
-(void)playIncomingSoundEffectForWAMessage:(id)arg1 ;
-(void)saveNotificationTimeForMessage:(id)arg1 ;
-(void)showInAppNotificationForMessage:(id)arg1 ;
-(unsigned long long)inAppAlertStyle;
-(void)showAlertView:(id)arg1 ;
-(void)showInAppNotificationAlertForMessage:(id)arg1 ;
-(void)showInAppNotificationBannerForMessage:(id)arg1 ;
-(void)didDismissAlertView:(id)arg1 ;
-(void)launchChatFromInAppAlert:(id)arg1 forJID:(id)arg2 ;
-(BOOL)shouldShowRichNotifications;
-(void)presentRichNotificationForMessage:(id)arg1 senderName:(id)arg2 groupName:(id)arg3 sound:(id)arg4 userInfo:(id)arg5 ;
-(void)presentPlainLocalNotificationForMessage:(id)arg1 senderName:(id)arg2 groupName:(id)arg3 soundName:(id)arg4 userInfo:(id)arg5 ;
-(id)preprocessNotificationText:(id)arg1 forMessage:(id)arg2 ;
-(void)notificationWindowTapped:(id)arg1 ;
-(void)notificationWindowDidCancel:(id)arg1 ;
-(void)notificationWindow:(id)arg1 userDidSubmitText:(id)arg2 ;
-(void)migrateSettings;
-(void)setMuteDate:(id)arg1 forJID:(id)arg2 ;
-(id)localizedAlertsSettingForJID:(id)arg1 ;
-(void)setAlertsSetting:(short)arg1 forJIDs:(id)arg2 ;
-(id)localizedPushNotificationSoundForJID:(id)arg1 ;
-(void)setPushNotificationSound:(id)arg1 forJIDs:(id)arg2 ;
-(id)localizedCallSoundForJID:(id)arg1 ;
-(void)setCallSound:(id)arg1 forJIDs:(id)arg2 ;
-(void)setChatSoundsEnabled:(BOOL)arg1 ;
-(void)setChatVibrateEnabled:(BOOL)arg1 ;
-(void)playOutgoingSoundEffectIfAllowed;
-(void)resetIncomingMessageSoundSquelchFor:(id)arg1 ;
-(void)setShowMessagePreview:(BOOL)arg1 ;
-(NSString *)localizedPersonalMessageSound;
-(void)setPersonalMessageSound:(NSString *)arg1 ;
-(void)setPersonalMessageAlertsEnabled:(BOOL)arg1 ;
-(NSString *)localizedGroupMessageSound;
-(void)setGroupMessageSound:(NSString *)arg1 ;
-(void)setGroupMessageAlertsEnabled:(BOOL)arg1 ;
-(NSString *)localizedCallSound;
-(void)presentNotificationForMessage:(id)arg1 fromSenderName:(id)arg2 ;
-(WANotificationWindow *)notificationWindow;
-(void)setIgnoreNotifications:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(NSString *)apnsToken;
-(void)initializeDefaults;
-(NSString *)voipToken;
-(void)setVoipToken:(NSString *)arg1 ;
@end
