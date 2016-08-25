/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface PLCrashReportSystemInfo : NSObject {

	int _operatingSystem;
	NSString* _osVersion;
	NSString* _osBuild;
	int _architecture;
	NSDate* _timestamp;

}

@property (nonatomic,readonly) int operatingSystem;                            //@synthesize operatingSystem=_operatingSystem - In the implementation block
@property (nonatomic,readonly) NSString * operatingSystemVersion;              //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * operatingSystemBuild;                //@synthesize osBuild=_osBuild - In the implementation block
@property (nonatomic,readonly) int architecture;                               //@synthesize architecture=_architecture - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
-(NSString *)operatingSystemBuild;
-(id)initWithOperatingSystem:(int)arg1 operatingSystemVersion:(id)arg2 operatingSystemBuild:(id)arg3 architecture:(int)arg4 timestamp:(id)arg5 ;
-(id)initWithOperatingSystem:(int)arg1 operatingSystemVersion:(id)arg2 architecture:(int)arg3 timestamp:(id)arg4 ;
-(int)operatingSystem;
-(NSString *)operatingSystemVersion;
-(void)dealloc;
-(NSDate *)timestamp;
-(int)architecture;
@end

