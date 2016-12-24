/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/TBaseStruct.h>
#import <Facebook/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBAThriftAnalyticsEventExtraData;

@interface FBAThriftAnalyticsEvent : TBaseStruct <TBase, NSCoding> {

	long long __thrift_eventTimestampInMilliseconds;
	long long __thrift_eventID;
	int __thrift_eventType;
	NSString* __thrift_eventModule;
	NSString* __thrift_eventUUID;
	FBAThriftAnalyticsEventExtraData* __thrift_eventExtraData;
	BOOL __thrift_eventTimestampInMilliseconds_set;
	BOOL __thrift_eventID_set;
	BOOL __thrift_eventType_set;
	BOOL __thrift_eventModule_set;
	BOOL __thrift_eventUUID_set;
	BOOL __thrift_eventExtraData_set;

}

@property (assign,nonatomic) long long eventTimestampInMilliseconds; 
@property (assign,nonatomic) long long eventID; 
@property (assign,nonatomic) int eventType; 
@property (nonatomic,retain) NSString * eventModule; 
@property (nonatomic,retain) NSString * eventUUID; 
@property (nonatomic,retain) FBAThriftAnalyticsEventExtraData * eventExtraData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setEventTimestampInMilliseconds:(long long)arg1 ;
-(void)setEventModule:(NSString *)arg1 ;
-(void)setEventUUID:(NSString *)arg1 ;
-(void)setEventExtraData:(FBAThriftAnalyticsEventExtraData *)arg1 ;
-(id)initWithEventTimestampInMilliseconds:(long long)arg1 eventID:(long long)arg2 eventType:(int)arg3 eventModule:(id)arg4 eventUUID:(id)arg5 eventExtraData:(id)arg6 ;
-(long long)eventTimestampInMilliseconds;
-(BOOL)eventTimestampInMillisecondsIsSet;
-(void)unsetEventTimestampInMilliseconds;
-(BOOL)eventIDIsSet;
-(void)unsetEventID;
-(BOOL)eventTypeIsSet;
-(void)unsetEventType;
-(NSString *)eventModule;
-(BOOL)eventModuleIsSet;
-(void)unsetEventModule;
-(BOOL)eventUUIDIsSet;
-(void)unsetEventUUID;
-(FBAThriftAnalyticsEventExtraData *)eventExtraData;
-(BOOL)eventExtraDataIsSet;
-(void)unsetEventExtraData;
-(id)toDict;
-(BOOL)makeImmutable;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(int)eventType;
-(void)setEventType:(int)arg1 ;
-(NSString *)eventUUID;
-(void)setEventID:(long long)arg1 ;
-(long long)eventID;
-(void)write:(id)arg1 ;
@end
