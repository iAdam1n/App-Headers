/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:36 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSData;

@interface CLSEventLogEvent : NSObject {

	unsigned long long _priority;
	unsigned long long _timestamp;
	NSString* _key;
	NSData* _payload;

}

@property (nonatomic,readonly) unsigned long long priority;               //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSData * payload;                     //@synthesize payload=_payload - In the implementation block
-(id)initWithPriority:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 ;
-(id)initWithPriority:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 payload:(id)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)timestamp;
-(NSString *)key;
-(NSData *)payload;
-(unsigned long long)priority;
-(id)eventData;
@end

