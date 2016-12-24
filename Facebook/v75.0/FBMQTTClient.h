/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
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
-(void)setInBackground:(BOOL)arg1;
-(BOOL)useVOIP;
-(BOOL)inBackground;
-(void)setLastMqttActivityTimeSecond:(double)arg1;
-(float)pingResponseTimeout;
-(void)publishMessage:(id)arg1 sendTimeBlock:(/*^block*/id)arg2;
-(int)mqttKeepAliveTime;
-(void)subscribeToPatterns:(id)arg1;
-(void)unsubscribeFromPatterns:(id)arg1;
-(void)publishMessage:(id)arg1;
-(void)runKeepAlive;
-(void)pauseForegroundKeepAlive;
-(void)resumeForegroundKeepAlive;
-(void)networkStatusChangedFrom:(long long)arg1 to:(long long)arg2;
-(id)connectionDebugInfo;
-(void)setUseVOIP:(BOOL)arg1;
-(void)setMqttKeepAliveTime:(int)arg1;
-(int)mqttForegroundKeepAliveTime;
-(void)setMqttForegroundKeepAliveTime:(int)arg1;
-(void)setPingResponseTimeout:(float)arg1;
-(double)lastMqttActivityTimeSecond;
-(int)connectStatus;
-(void)setDelegate:(id)arg1;
-(id<FBMQTTClientDelegate>)delegate;
-(void)stop;
-(void)start;
-(float)connectTimeout;
-(void)setConnectTimeout:(float)arg1;

@end
