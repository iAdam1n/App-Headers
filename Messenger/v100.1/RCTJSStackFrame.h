/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RCTJSStackFrame : NSObject {

	NSString* _methodName;
	NSString* _file;
	long long _lineNumber;
	long long _column;

}

@property (nonatomic,copy,readonly) NSString * methodName;              //@synthesize methodName=_methodName - In the implementation block
@property (nonatomic,copy,readonly) NSString * file;                    //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) long long lineNumber;                    //@synthesize lineNumber=_lineNumber - In the implementation block
@property (nonatomic,readonly) long long column;                        //@synthesize column=_column - In the implementation block
+(id)stackFrameWithLine:(id)arg1 ;
+(id)stackFrameWithDictionary:(id)arg1 ;
+(id)stackFramesWithLines:(id)arg1 ;
+(id)stackFramesWithDictionaries:(id)arg1 ;
-(id)initWithMethodName:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 column:(long long)arg4 ;
-(long long)lineNumber;
-(id)toDictionary;
-(long long)column;
-(NSString *)file;
-(NSString *)methodName;
@end
