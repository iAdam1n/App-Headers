/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/TBaseStruct.h>
#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, HoneySchema, NSMutableArray;

@interface MarauderEventBatch : TBaseStruct <TBase, NSCoding> {

	long long __thrift_timeStampInMilliseconds;
	NSString* __thrift_deviceID;
	NSString* __thrift_appID;
	NSString* __thrift_appVersion;
	NSMutableArray* __thrift_events;
	NSString* __thrift_platformSoftwareVersion;
	NSString* __thrift_platformHardwareVersion;
	HoneySchema* __thrift_honeySchema;
	BOOL __thrift_timeStampInMilliseconds_set;
	BOOL __thrift_deviceID_set;
	BOOL __thrift_appID_set;
	BOOL __thrift_appVersion_set;
	BOOL __thrift_events_set;
	BOOL __thrift_platformSoftwareVersion_set;
	BOOL __thrift_platformHardwareVersion_set;
	BOOL __thrift_honeySchema_set;

}

@property (assign,nonatomic) long long timeStampInMilliseconds; 
@property (nonatomic,retain) NSString * deviceID; 
@property (nonatomic,retain) NSString * appID; 
@property (nonatomic,retain) NSString * appVersion; 
@property (nonatomic,retain) NSMutableArray * events; 
@property (nonatomic,retain) NSString * platformSoftwareVersion; 
@property (nonatomic,retain) NSString * platformHardwareVersion; 
@property (nonatomic,retain) HoneySchema * honeySchema; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setTimeStampInMilliseconds:(long long)arg1 ;
-(void)setPlatformSoftwareVersion:(NSString *)arg1 ;
-(void)setPlatformHardwareVersion:(NSString *)arg1 ;
-(void)setHoneySchema:(HoneySchema *)arg1 ;
-(id)toDict;
-(long long)timeStampInMilliseconds;
-(BOOL)timeStampInMillisecondsIsSet;
-(void)unsetTimeStampInMilliseconds;
-(id)initWithTimeStampInMilliseconds:(long long)arg1 deviceID:(id)arg2 appID:(id)arg3 appVersion:(id)arg4 events:(NSMutableArray*)arg5 platformSoftwareVersion:(id)arg6 platformHardwareVersion:(id)arg7 honeySchema:(id)arg8 ;
-(BOOL)deviceIDIsSet;
-(void)unsetDeviceID;
-(BOOL)appIDIsSet;
-(void)unsetAppID;
-(BOOL)appVersionIsSet;
-(void)unsetAppVersion;
-(BOOL)eventsIsSet;
-(void)unsetEvents;
-(NSString *)platformSoftwareVersion;
-(BOOL)platformSoftwareVersionIsSet;
-(void)unsetPlatformSoftwareVersion;
-(NSString *)platformHardwareVersion;
-(BOOL)platformHardwareVersionIsSet;
-(void)unsetPlatformHardwareVersion;
-(HoneySchema *)honeySchema;
-(BOOL)honeySchemaIsSet;
-(void)unsetHoneySchema;
-(BOOL)makeImmutable;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)setAppID:(NSString *)arg1 ;
-(NSMutableArray *)events;
-(NSString *)appID;
-(void)write:(id)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)appVersion;
@end
