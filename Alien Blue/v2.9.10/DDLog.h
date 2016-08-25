/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AlienBlue/AlienBlue-Structs.h>
@interface DDLog : NSObject
+(void)log:(BOOL)arg1 message:(id)arg2 ;
+(dispatch_queue_sRef)loggingQueue;
+(void)addLogger:(id)arg1 withLogLevel:(int)arg2 ;
+(void)lt_addLogger:(id)arg1 logLevel:(int)arg2 ;
+(void)lt_removeLogger:(id)arg1 ;
+(void)lt_removeAllLoggers;
+(id)lt_allLoggers;
+(void)lt_log:(id)arg1 ;
+(void)queueLogMessage:(id)arg1 asynchronously:(BOOL)arg2 ;
+(void)lt_flush;
+(BOOL)isRegisteredClass:(Class)arg1 ;
+(id)registeredClasses;
+(int)logLevelForClass:(Class)arg1 ;
+(void)setLogLevel:(int)arg1 forClass:(Class)arg2 ;
+(void)addLogger:(id)arg1 ;
+(void)removeLogger:(id)arg1 ;
+(void)removeAllLoggers;
+(id)allLoggers;
+(void)log:(BOOL)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char*)arg5 function:(const char*)arg6 line:(int)arg7 tag:(id)arg8 format:(id)arg9 ;
+(void)log:(BOOL)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char*)arg5 function:(const char*)arg6 line:(int)arg7 tag:(id)arg8 format:(id)arg9 args:(char*)arg10 ;
+(id)registeredClassNames;
+(int)logLevelForClassWithName:(id)arg1 ;
+(void)applicationWillTerminate:(id)arg1 ;
+(void)initialize;
+(void)setLogLevel:(int)arg1 forClassWithName:(id)arg2 ;
+(void)flushLog;
@end

