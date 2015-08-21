/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:09 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/TBaseStruct.h>
#import <Messenger/TBase.h>
#import <Messenger/NSCoding.h>

@class FBAThriftAnalyticsCustomExtraData, FBAThriftAnalyticsDeviceStatusExtraData, NSString;

@interface FBAThriftAnalyticsEventExtraData : TBaseStruct <TBase, NSCoding> {

	FBAThriftAnalyticsCustomExtraData* __thrift_customExtraData;
	FBAThriftAnalyticsDeviceStatusExtraData* __thrift_deviceStatusExtraData;
	BOOL __thrift_customExtraData_set;
	BOOL __thrift_deviceStatusExtraData_set;

}

@property (nonatomic,retain) FBAThriftAnalyticsCustomExtraData * customExtraData; 
@property (nonatomic,retain) FBAThriftAnalyticsDeviceStatusExtraData * deviceStatusExtraData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(id)toDict;
-(void)setCustomExtraData:(FBAThriftAnalyticsCustomExtraData *)arg1 ;
-(void)setDeviceStatusExtraData:(FBAThriftAnalyticsDeviceStatusExtraData *)arg1 ;
-(id)initWithCustomExtraData:(id)arg1 deviceStatusExtraData:(id)arg2 ;
-(FBAThriftAnalyticsCustomExtraData *)customExtraData;
-(BOOL)customExtraDataIsSet;
-(void)unsetCustomExtraData;
-(FBAThriftAnalyticsDeviceStatusExtraData *)deviceStatusExtraData;
-(BOOL)deviceStatusExtraDataIsSet;
-(void)unsetDeviceStatusExtraData;
-(BOOL)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

