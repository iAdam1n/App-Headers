/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAdClientEventManager : NSObject
+(id)createErrorEventWithMessage:(id)arg1 ;
+(void)addClientEvent:(id)arg1 ;
+(id)createEventName:(id)arg1 withEventData:(id)arg2 withRequestId:(id)arg3 ;
+(id)createErrorEventWithException:(id)arg1 ;
+(id)createEventName:(id)arg1 withEventData:(id)arg2 ;
+(id)dumpClientEventsToJson;
+(id)createErrorEventWithFormat:(id)arg1 ;
+(void)initialize;
@end
