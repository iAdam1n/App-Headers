/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMQTTClient <NSObject>
@property (assign,nonatomic) BOOL useVOIP; 
@property (assign,nonatomic) int mqttKeepAliveTime; 
@property (assign,nonatomic) int mqttForegroundKeepAliveTime; 
@property (assign,nonatomic) float pingResponseTimeout; 
@property (assign,nonatomic) float connectTimeout; 
@property (assign,nonatomic) double lastMqttActivityTimeSecond; 
@property (assign,nonatomic,__weak) id<FBMQTTClientDelegate> delegate; 
@property (assign,nonatomic) BOOL inBackground; 
@property (readonly) int connectStatus; 
@required
-(id)connectionDebugInfo;
-(void)setInBackground:(BOOL)arg1;
-(float)pingResponseTimeout;
-(void)setPingResponseTimeout:(float)arg1;
-(BOOL)useVOIP;
-(BOOL)inBackground;
-(void)setLastMqttActivityTimeSecond:(double)arg1;
-(int)mqttKeepAliveTime;
-(void)subscribeToPatterns:(id)arg1;
-(void)unsubscribeFromPatterns:(id)arg1;
-(void)runKeepAlive;
-(void)pauseForegroundKeepAlive;
-(void)resumeForegroundKeepAlive;
-(void)networkStatusChangedFrom:(long long)arg1 to:(long long)arg2;
-(void)setUseVOIP:(BOOL)arg1;
-(void)setMqttKeepAliveTime:(int)arg1;
-(int)mqttForegroundKeepAliveTime;
-(void)setMqttForegroundKeepAliveTime:(int)arg1;
-(double)lastMqttActivityTimeSecond;
-(int)connectStatus;
-(void)setDelegate:(id)arg1;
-(id<FBMQTTClientDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)publishMessage:(id)arg1;
-(float)connectTimeout;
-(void)setConnectTimeout:(float)arg1;

@end
