/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>

@class MNOnlineStatusListenerAnnouncer, MNUserSettings, MNOnlineStatusMQTTSender, FBUserSession, NSString;

@interface MNOnlineStatusManager : NSObject <FBViewerContextClassProvidable> {

	MNOnlineStatusListenerAnnouncer* _announcer;
	BOOL _online;
	BOOL _started;
	MNUserSettings* _userSettings;
	MNOnlineStatusMQTTSender* _onlineStatusSender;
	FBUserSession* _session;
	id _mqttConnectedChangedObserver;

}

@property (nonatomic,retain) MNUserSettings * userSettings;                              //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,retain) MNOnlineStatusMQTTSender * onlineStatusSender;              //@synthesize onlineStatusSender=_onlineStatusSender - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id mqttConnectedChangedObserver;                            //@synthesize mqttConnectedChangedObserver=_mqttConnectedChangedObserver - In the implementation block
@property (assign,nonatomic) BOOL started;                                               //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) BOOL online;                                              //@synthesize online=_online - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)startOnlineStatusManager;
-(void)stopOnlineStatusManager;
-(BOOL)getOnline;
-(MNOnlineStatusMQTTSender *)onlineStatusSender;
-(void)setOnlineStatusSender:(MNOnlineStatusMQTTSender *)arg1 ;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(void)setOnline:(BOOL)arg1 userOverride:(BOOL)arg2 ;
-(id)initWithUserSettings:(id)arg1 onlineStatusSender:(id)arg2 session:(id)arg3 ;
-(void)setMqttConnectedChangedObserver:(id)arg1 ;
-(BOOL)online;
-(id)mqttConnectedChangedObserver;
-(void)dealloc;
-(FBUserSession *)session;
-(void)removeListener:(id)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)addListener:(id)arg1 ;
-(MNUserSettings *)userSettings;
-(BOOL)started;
@end
