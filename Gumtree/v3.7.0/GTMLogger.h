/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GTMLogWriter.h>

@protocol GTMLogWriter, GTMLogFormatter, GTMLogFilter;
@interface GTMLogger : NSObject <GTMLogWriter> {

	id<GTMLogWriter> writer_;
	id<GTMLogFormatter> formatter_;
	id<GTMLogFilter> filter_;

}
+(id)standardLogger;
+(id)loggerWithWriter:(id)arg1 formatter:(id)arg2 filter:(id)arg3 ;
+(void)setSharedLogger:(id)arg1 ;
+(id)standardLoggerWithStderr;
+(id)standardLoggerWithStdoutAndStderr;
+(id)standardLoggerWithPath:(id)arg1 ;
+(id)sharedLogger;
+(id)logger;
-(void)logMessage:(id)arg1 level:(int)arg2 ;
-(void)logInternalFunc:(const char*)arg1 format:(id)arg2 valist:(char*)arg3 level:(int)arg4 ;
-(void)logFuncDebug:(const char*)arg1 msg:(id)arg2 ;
-(void)logFuncInfo:(const char*)arg1 msg:(id)arg2 ;
-(void)logFuncError:(const char*)arg1 msg:(id)arg2 ;
-(void)logFuncAssert:(const char*)arg1 msg:(id)arg2 ;
-(id)initWithWriter:(id)arg1 formatter:(id)arg2 filter:(id)arg3 ;
-(void)logDebug:(id)arg1 ;
-(void)logAssert:(id)arg1 ;
-(id)formatter;
-(void)setFormatter:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFilter:(id)arg1 ;
-(void)logError:(id)arg1 ;
-(void)logInfo:(id)arg1 ;
-(id)writer;
-(void)setWriter:(id)arg1 ;
-(id)filter;
@end

