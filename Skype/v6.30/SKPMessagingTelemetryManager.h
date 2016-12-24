/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:37 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/ALESkyLibProtocol.h>

@class SKPMessagingTelemetrySyncMeasurement, NSString;

@interface SKPMessagingTelemetryManager : NSObject <ALESkyLibProtocol> {

	BOOL _isObserving;
	int _syncStatus;
	SKPMessagingTelemetrySyncMeasurement* _syncMeasurement;

}

@property (assign,nonatomic) BOOL isObserving;                                                    //@synthesize isObserving=_isObserving - In the implementation block
@property (assign,nonatomic) int syncStatus;                                                      //@synthesize syncStatus=_syncStatus - In the implementation block
@property (nonatomic,retain) SKPMessagingTelemetrySyncMeasurement * syncMeasurement;              //@synthesize syncMeasurement=_syncMeasurement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultTimeoutForExtendedMessagingTelemetry;
+(void)reportMSNPSyncDuration:(double)arg1 success:(BOOL)arg2 activationType:(long long)arg3 ;
+(void)reportMessageDeliveryDuration:(double)arg1 messageType:(long long)arg2 success:(BOOL)arg3 networkType:(id)arg4 ;
+(void)reportShowPushDuration:(double)arg1 outcome:(long long)arg2 activationType:(long long)arg3 notificationType:(id)arg4 ;
-(void)OnChatServiceConnectivity:(id)arg1 ;
-(void)OnMessage:(id)arg1 andMessageobjectid:(unsigned)arg2 andChangesinboxtimestamp:(BOOL)arg3 andSupersedeshistorymessageobjectid:(unsigned)arg4 andConversationobjectid:(unsigned)arg5 andShownotification:(BOOL)arg6 ;
-(void)OnObjectPropertyChangeWithValue:(id)arg1 andObjectid:(unsigned)arg2 andPropkey:(int)arg3 andProperty:(id)arg4 ;
-(int)synchronouslyFetchMSNPSyncStatus;
-(void)setSyncMeasurement:(SKPMessagingTelemetrySyncMeasurement *)arg1 ;
-(SKPMessagingTelemetrySyncMeasurement *)syncMeasurement;
-(void)setSyncStatus:(int)arg1 ;
-(void)notifySyncCompleted;
-(void)notifyAppWasActivated:(id)arg1 activationType:(long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)isObserving;
-(int)syncStatus;
-(void)setIsObserving:(BOOL)arg1 ;
@end
