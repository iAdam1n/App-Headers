/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAppService.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBMessengerInboxCountsMQTTServiceDelegate;
@class FBUserSession, FBMQTTManager, FBMQTTListener, NSString;

@interface FBMessengerInboxCountsMQTTService : NSObject <FBAppService, FBViewerContextClassProvidable> {

	FBUserSession* _session;
	FBMQTTManager* _mqttManager;
	FBMQTTListener* _inboxListener;
	id<FBMessengerInboxCountsMQTTServiceDelegate> _delegate;

}

@property (nonatomic,readonly) FBMQTTListener * inboxListener;                                           //@synthesize inboxListener=_inboxListener - In the implementation block
@property (assign,nonatomic,__weak) id<FBMessengerInboxCountsMQTTServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)startAppService;
-(void)stopAppService;
-(void)_inboxMQTTListenerBlock:(id)arg1 ;
-(void)_startMQTTInboxListeningIfNecessary;
-(void)_stopMQTTInboxListeningIfNecessary;
-(FBMQTTListener *)inboxListener;
-(void)setDelegate:(id<FBMessengerInboxCountsMQTTServiceDelegate>)arg1 ;
-(id<FBMessengerInboxCountsMQTTServiceDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end
