/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FlurryPLCrashReportProcessorInfo;

@interface FlurryPLCrashReportMachineInfo : NSObject {

	NSString* _modelName;
	FlurryPLCrashReportProcessorInfo* _processorInfo;
	unsigned long long _processorCount;
	unsigned long long _logicalProcessorCount;

}

@property (nonatomic,readonly) NSString * modelName;                                          //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,readonly) FlurryPLCrashReportProcessorInfo * processorInfo;              //@synthesize processorInfo=_processorInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long processorCount;                             //@synthesize processorCount=_processorCount - In the implementation block
@property (nonatomic,readonly) unsigned long long logicalProcessorCount;                      //@synthesize logicalProcessorCount=_logicalProcessorCount - In the implementation block
-(id)initWithModelName:(id)arg1 processorInfo:(id)arg2 processorCount:(unsigned long long)arg3 logicalProcessorCount:(unsigned long long)arg4 ;
-(FlurryPLCrashReportProcessorInfo *)processorInfo;
-(unsigned long long)logicalProcessorCount;
-(void)dealloc;
-(unsigned long long)processorCount;
-(NSString *)modelName;
@end
