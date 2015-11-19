/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDate;

@interface PLCrashReportProcessInfo : NSObject {

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
-(unsigned long long)parentProcessID;
-(id)initWithProcessName:(id)arg1 processID:(unsigned long long)arg2 processPath:(id)arg3 processStartTime:(id)arg4 parentProcessName:(id)arg5 parentProcessID:(unsigned long long)arg6 native:(BOOL)arg7 ;
-(NSString *)processPath;
-(NSDate *)processStartTime;
-(BOOL)native;
-(void)dealloc;
-(NSString *)processName;
-(unsigned long long)processID;
-(NSString *)parentProcessName;
@end

