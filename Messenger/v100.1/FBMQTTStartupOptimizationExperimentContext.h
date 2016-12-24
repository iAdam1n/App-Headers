/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBMQTTStartupOptimizationExperimentContext : FBExperimentContext {

	BOOL _delayMessengerInboxCountsMqttService;
	BOOL _delayMqttManagerService;
	BOOL _delayNotificationsMqttService;
	BOOL _delayFriendingServices;

}

@property (assign,nonatomic) BOOL delayMessengerInboxCountsMqttService;              //@synthesize delayMessengerInboxCountsMqttService=_delayMessengerInboxCountsMqttService - In the implementation block
@property (assign,nonatomic) BOOL delayMqttManagerService;                           //@synthesize delayMqttManagerService=_delayMqttManagerService - In the implementation block
@property (assign,nonatomic) BOOL delayNotificationsMqttService;                     //@synthesize delayNotificationsMqttService=_delayNotificationsMqttService - In the implementation block
@property (assign,nonatomic) BOOL delayFriendingServices;                            //@synthesize delayFriendingServices=_delayFriendingServices - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)delayFriendingServices;
-(BOOL)delayMessengerInboxCountsMqttService;
-(BOOL)delayMqttManagerService;
-(BOOL)delayNotificationsMqttService;
-(void)setDelayMessengerInboxCountsMqttService:(BOOL)arg1 ;
-(void)setDelayMqttManagerService:(BOOL)arg1 ;
-(void)setDelayNotificationsMqttService:(BOOL)arg1 ;
-(void)setDelayFriendingServices:(BOOL)arg1 ;
@end
