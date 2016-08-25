/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface BITPLCrashReportProcessInfo : NSObject {

	NSString* _processName;
	unsigned long long _processID;
	NSString* _processPath;
	NSDate* _processStartTime;
	NSString* _parentProcessName;
	unsigned long long _parentProcessID;
	BOOL _native;

}

@property (nonatomic,readonly) NSString * processName;                          //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) unsigned long long processID;                    //@synthesize processID=_processID - In the implementation block
@property (nonatomic,readonly) NSString * processPath;                          //@synthesize processPath=_processPath - In the implementation block
@property (nonatomic,readonly) NSDate * processStartTime;                       //@synthesize processStartTime=_processStartTime - In the implementation block
@property (nonatomic,readonly) NSString * parentProcessName;                    //@synthesize parentProcessName=_parentProcessName - In the implementation block
@property (nonatomic,readonly) unsigned long long parentProcessID;              //@synthesize parentProcessID=_parentProcessID - In the implementation block
@property (nonatomic,readonly) BOOL native;                                     //@synthesize native=_native - In the implementation block
-(NSDate *)processStartTime;
-(NSString *)processPath;
-(unsigned long long)parentProcessID;
-(id)initWithProcessName:(id)arg1 processID:(unsigned long long)arg2 processPath:(id)arg3 processStartTime:(id)arg4 parentProcessName:(id)arg5 parentProcessID:(unsigned long long)arg6 native:(BOOL)arg7 ;
-(BOOL)native;
-(void)dealloc;
-(NSString *)processName;
-(unsigned long long)processID;
-(NSString *)parentProcessName;
@end

