/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBGraphQLSubscriber : NSObject
+(id)subscribedHandleForQuery:(id)arg1 session:(id)arg2 mqttInterface:(id)arg3 onSuccess:(/*^block*/id)arg4 ;
+(id)subscribedHandleForQuery:(id)arg1 session:(id)arg2 onSuccess:(/*^block*/id)arg3 ;
+(void)persistPayload:(id)arg1 forQuery:(id)arg2 handleType:(id)arg3 session:(id)arg4 onSuccess:(/*^block*/id)arg5 ;
+(void)logQuery:(id)arg1 handleType:(id)arg2 ;
@end
