/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
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

