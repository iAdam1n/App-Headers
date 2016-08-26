/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Telegram/Telegram-Structs.h>
@class BITPLCrashReporterConfig, BITPLCrashMachExceptionServer, BITPLCrashMachExceptionPortSet, NSString;

@interface BITPLCrashReporter : NSObject {

	BITPLCrashReporterConfig* _config;
	BOOL _enabled;
	BITPLCrashMachExceptionServer* _machServer;
	BITPLCrashMachExceptionPortSet* _previousMachPorts;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _crashReportDirectory;

}
+(void)initialize;
+(id)sharedReporter;
-(id)initWithBundle:(id)arg1 configuration:(id)arg2 ;
-(id)crashReportPath;
-(BOOL)populateCrashReportDirectoryAndReturnError:(id*)arg1 ;
-(int)mapToAsyncSymbolicationStrategy:(unsigned long long)arg1 ;
-(id)enableMachExceptionServerWithPreviousPortSet:(id*)arg1 callback:(/*function pointer*/void*)arg2 context:(void*)arg3 error:(id*)arg4 ;
-(id)initWithApplicationIdentifier:(id)arg1 appVersion:(id)arg2 configuration:(id)arg3 ;
-(id)crashReportDirectory;
-(id)queuedCrashReportDirectory;
-(void)dealloc;
-(id)loadPendingCrashReportDataAndReturnError:(id*)arg1 ;
-(BOOL)purgePendingCrashReportAndReturnError:(id*)arg1 ;
-(BOOL)enableCrashReporterAndReturnError:(id*)arg1 ;
-(id)generateLiveReportWithThread:(unsigned)arg1 error:(id*)arg2 ;
-(id)generateLiveReportAndReturnError:(id*)arg1 ;
-(BOOL)hasPendingCrashReport;
-(id)loadPendingCrashReportData;
-(BOOL)purgePendingCrashReport;
-(BOOL)enableCrashReporter;
-(id)generateLiveReportWithThread:(unsigned)arg1 ;
-(id)generateLiveReport;
-(void)setCrashCallbacks:(PLCrashReporterCallbacks*)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
@end
