/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(id)initWithPriority:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 payload:(id)arg4 ;
-(id)initWithPriority:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)timestamp;
-(NSString *)key;
-(NSData *)payload;
-(unsigned long long)priority;
-(id)eventData;
@end

