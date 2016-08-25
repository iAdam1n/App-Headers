/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface DDLogMessage : NSObject <NSCopying> {

	NSString* _message;
	unsigned long long _level;
	unsigned long long _flag;
	long long _context;
	NSString* _file;
	NSString* _fileName;
	NSString* _function;
	unsigned long long _line;
	id _tag;
	long long _options;
	NSDate* _timestamp;
	NSString* _threadID;
	NSString* _threadName;
	NSString* _queueLabel;

}

@property (nonatomic,readonly) NSString * message;                    //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) unsigned long long level;              //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) unsigned long long flag;               //@synthesize flag=_flag - In the implementation block
@property (nonatomic,readonly) long long context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * file;                       //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) NSString * fileName;                   //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,readonly) NSString * function;                   //@synthesize function=_function - In the implementation block
@property (nonatomic,readonly) unsigned long long line;               //@synthesize line=_line - In the implementation block
@property (nonatomic,readonly) id tag;                                //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) long long options;                     //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSString * threadID;                   //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,readonly) NSString * threadName;                 //@synthesize threadName=_threadName - In the implementation block
@property (nonatomic,readonly) NSString * queueLabel;                 //@synthesize queueLabel=_queueLabel - In the implementation block
-(id)initWithMessage:(id)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3 context:(long long)arg4 file:(id)arg5 function:(id)arg6 line:(unsigned long long)arg7 tag:(id)arg8 options:(long long)arg9 timestamp:(id)arg10 ;
-(unsigned long long)flag;
-(NSString *)queueLabel;
-(NSString *)function;
-(NSString *)threadName;
-(NSDate *)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)context;
-(unsigned long long)level;
-(id)tag;
-(NSString *)message;
-(unsigned long long)line;
-(long long)options;
-(NSString *)threadID;
-(NSString *)fileName;
-(NSString *)file;
@end

