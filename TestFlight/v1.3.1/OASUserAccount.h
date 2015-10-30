/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class OASNetworkManager, NSObject, NSMutableDictionary;

@interface OASUserAccount : NSObject {

	OASNetworkManager* _networkManager;
	NSObject*<OS_dispatch_queue> _accountQueue;
	NSMutableDictionary* _notificationSettings;

}

@property (nonatomic,retain) OASNetworkManager * networkManager;                       //@synthesize networkManager=_networkManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accountQueue;              //@synthesize accountQueue=_accountQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationSettings;               //@synthesize notificationSettings=_notificationSettings - In the implementation block
-(OASNetworkManager *)networkManager;
-(void)setNetworkManager:(OASNetworkManager *)arg1 ;
-(id)initWithNetworkManager:(id)arg1 ;
-(void)fetchNotificationSettingsForAppContext:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveNotificationSettings:(id)arg1 forAppContext:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setNotificationSettings:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)notificationSettings;
-(NSObject*<OS_dispatch_queue>)accountQueue;
@end
