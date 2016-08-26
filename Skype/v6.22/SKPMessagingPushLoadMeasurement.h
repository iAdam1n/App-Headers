/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/ALESkyLibProtocol.h>

@class SKPMessagingTelemetryPushLoadMeasurement, NSString, NSTimer;

@interface SKPMessagingPushLoadMeasurement : NSObject <ALESkyLibProtocol> {

	BOOL _isObserving;
	SKPMessagingTelemetryPushLoadMeasurement* _loadChatMeasurement;
	NSString* _identityOfSelectedConversation;
	NSString* _identityOfLoadedConversation;
	NSTimer* _pushLoadTimer;

}

@property (nonatomic,retain) SKPMessagingTelemetryPushLoadMeasurement * loadChatMeasurement;              //@synthesize loadChatMeasurement=_loadChatMeasurement - In the implementation block
@property (assign,nonatomic) BOOL isObserving;                                                            //@synthesize isObserving=_isObserving - In the implementation block
@property (nonatomic,copy) NSString * identityOfSelectedConversation;                                     //@synthesize identityOfSelectedConversation=_identityOfSelectedConversation - In the implementation block
@property (nonatomic,copy) NSString * identityOfLoadedConversation;                                       //@synthesize identityOfLoadedConversation=_identityOfLoadedConversation - In the implementation block
@property (nonatomic,retain) NSTimer * pushLoadTimer;                                                     //@synthesize pushLoadTimer=_pushLoadTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)OnMessage:(id)arg1 andMessageobjectid:(unsigned)arg2 andChangesinboxtimestamp:(BOOL)arg3 andSupersedeshistorymessageobjectid:(unsigned)arg4 andConversationobjectid:(unsigned)arg5 andShownotification:(BOOL)arg6 ;
-(void)mainViewControllerDidChangeSelection:(id)arg1 ;
-(void)setLoadChatMeasurement:(SKPMessagingTelemetryPushLoadMeasurement *)arg1 ;
-(NSTimer *)pushLoadTimer;
-(void)setPushLoadTimer:(NSTimer *)arg1 ;
-(void)setIdentityOfLoadedConversation:(NSString *)arg1 ;
-(NSString *)identityOfSelectedConversation;
-(SKPMessagingTelemetryPushLoadMeasurement *)loadChatMeasurement;
-(void)setIdentityOfSelectedConversation:(NSString *)arg1 ;
-(void)pushLoadTimerUpdate:(id)arg1 ;
-(NSString *)identityOfLoadedConversation;
-(void)notifyChatPushNotificationOpened:(id)arg1 messageServerId:(unsigned long long)arg2 conversationIdentity:(id)arg3 activationType:(long long)arg4 ;
-(void)notifyChatHistoryViewIsLoadedForConversationIdentity:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)isObserving;
-(void)setIsObserving:(BOOL)arg1 ;
@end
