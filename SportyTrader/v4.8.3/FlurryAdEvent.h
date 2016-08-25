/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface FlurryAdEvent : NSObject {

	BOOL _toBeSent;
	int _eventId;
	NSString* _eventName;
	long long _sessionStartTimeOffset;
	NSMutableDictionary* _paramMap;

}

@property (assign,nonatomic) int eventId;                                   //@synthesize eventId=_eventId - In the implementation block
@property (assign,nonatomic) long long sessionStartTimeOffset;              //@synthesize sessionStartTimeOffset=_sessionStartTimeOffset - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * paramMap;                //@synthesize paramMap=_paramMap - In the implementation block
@property (nonatomic,retain) NSString * eventName;                          //@synthesize eventName=_eventName - In the implementation block
@property (assign,nonatomic) BOOL toBeSent;                                 //@synthesize toBeSent=_toBeSent - In the implementation block
+(id)adEventEnumToString:(int)arg1 ;
+(id)adEventArrayInstance;
+(int)adEventStringToEnum:(id)arg1 ;
-(id)initWithEventId:(int)arg1 eventName:(id)arg2 paramsMap:(id)arg3 timeOffset:(long long)arg4 ;
-(void)setToBeSent:(BOOL)arg1 ;
-(BOOL)toBeSent;
-(long long)sessionStartTimeOffset;
-(NSMutableDictionary *)paramMap;
-(void)addParams:(id)arg1 ;
-(void)setSessionStartTimeOffset:(long long)arg1 ;
-(void)setParamMap:(NSMutableDictionary *)arg1 ;
-(BOOL)compareWithAdEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(int)eventId;
-(void)setEventId:(int)arg1 ;
@end

