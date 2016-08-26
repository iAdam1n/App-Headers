/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNTypingStateListener.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol FBMAppProperties;
@class FBUserSession, FBMMQTTSender, FBAnalytics, FBTimer, MNThreadViewModel, NSString;

@interface MNThreadTypingStateSender : NSObject <MNTypingStateListener, FBClassProvidable, MNThreadViewModelConfigurable> {

	FBUserSession* _userSession;
	FBMMQTTSender* _mqttSender;
	id<FBMAppProperties> _appProperties;
	FBAnalytics* _analytics;
	double _activeTimeout;
	FBTimer* _activeTimeoutTimer;
	double _activeRepeatInterval;
	FBTimer* _activeRepeatTimer;
	int _lastSentTypingState;
	int _typingState;
	MNThreadViewModel* _threadViewModel;

}

@property (nonatomic,retain) MNThreadViewModel * threadViewModel;              //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (nonatomic,readonly) int typingState;                                //@synthesize typingState=_typingState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(MNThreadViewModel *)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)setThreadViewModel:(MNThreadViewModel *)arg1 ;
-(id)initWithUserSession:(id)arg1 analytics:(id)arg2 mqttSender:(id)arg3 appProperties:(id)arg4 activeTimeout:(double)arg5 activeRepeatInterval:(double)arg6 ;
-(void)_setTypingState:(int)arg1 ;
-(void)_sendTypingState;
-(BOOL)shouldSendDuplicateTypingActive;
-(void)_ensureActiveRepeatTimer;
-(void)_ensureActiveTimeoutTimer;
-(void)userMayStartTyping;
-(void)userDidType;
-(void)userDidFinishTyping;
-(int)typingState;
@end
