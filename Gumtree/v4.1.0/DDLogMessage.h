/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface DDLogMessage : NSObject <NSCopying> {

	int logLevel;
	int logFlag;
	int logContext;
	NSString* logMsg;
	NSDate* timestamp;
	char* file;
	char* function;
	int lineNumber;
	unsigned machThreadID;
	char* queueLabel;
	NSString* threadName;
	id tag;
	int options;

}
-(id)initWithLogMsg:(id)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char*)arg5 function:(const char*)arg6 line:(int)arg7 tag:(id)arg8 options:(int)arg9 ;
-(id)methodName;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)threadID;
-(id)fileName;
@end

