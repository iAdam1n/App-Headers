/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/CLSEventLogEvent.h>

@class NSString, NSDictionary;

@interface CLSAnalyticsEvent : CLSEventLogEvent {

	NSString* _eventIdentifier;
	NSDictionary* _stringPayloadValueDict;

}

@property (nonatomic,copy,readonly) NSString * eventIdentifier;                         //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stringPayloadValueDict;              //@synthesize stringPayloadValueDict=_stringPayloadValueDict - In the implementation block
-(id)initWithPriority:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 eventIdentifier:(id)arg4 ;
-(id)initWithAnswersEvent:(id)arg1 timestamp:(unsigned long long)arg2 eventIdentifier:(id)arg3 ;
-(id)initWithPriority:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 eventIdentifier:(id)arg4 payloadValues:(id)arg5 ;
-(NSDictionary *)stringPayloadValueDict;
-(id)description;
-(NSString *)eventIdentifier;
@end
