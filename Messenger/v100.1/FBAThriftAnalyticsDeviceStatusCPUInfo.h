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

@class FBAThriftAnalyticsDeviceStatusCPULoadAvg, FBAThriftAnalyticsDeviceStatusCPUTime, NSString;

@interface FBAThriftAnalyticsDeviceStatusCPUInfo : TBaseStruct <TBase, NSCoding> {

	FBAThriftAnalyticsDeviceStatusCPULoadAvg* __thrift_loadAvg;
	FBAThriftAnalyticsDeviceStatusCPUTime* __thrift_cpuTime;
	BOOL __thrift_loadAvg_set;
	BOOL __thrift_cpuTime_set;

}

@property (nonatomic,retain) FBAThriftAnalyticsDeviceStatusCPULoadAvg * loadAvg; 
@property (nonatomic,retain) FBAThriftAnalyticsDeviceStatusCPUTime * cpuTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(id)initWithLoadAvg:(id)arg1 cpuTime:(id)arg2 ;
-(id)toDict;
-(void)setLoadAvg:(FBAThriftAnalyticsDeviceStatusCPULoadAvg *)arg1 ;
-(void)setCpuTime:(FBAThriftAnalyticsDeviceStatusCPUTime *)arg1 ;
-(FBAThriftAnalyticsDeviceStatusCPULoadAvg *)loadAvg;
-(BOOL)loadAvgIsSet;
-(void)unsetLoadAvg;
-(FBAThriftAnalyticsDeviceStatusCPUTime *)cpuTime;
-(BOOL)cpuTimeIsSet;
-(void)unsetCpuTime;
-(BOOL)makeImmutable;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
@end
