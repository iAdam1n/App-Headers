/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class PLCrashReportSymbolInfo;

@interface PLCrashReportStackFrameInfo : NSObject {

	unsigned long long _instructionPointer;
	PLCrashReportSymbolInfo* _symbolInfo;

}

@property (nonatomic,readonly) unsigned long long instructionPointer;              //@synthesize instructionPointer=_instructionPointer - In the implementation block
@property (nonatomic,readonly) PLCrashReportSymbolInfo * symbolInfo;               //@synthesize symbolInfo=_symbolInfo - In the implementation block
-(id)initWithInstructionPointer:(unsigned long long)arg1 symbolInfo:(id)arg2 ;
-(unsigned long long)instructionPointer;
-(PLCrashReportSymbolInfo *)symbolInfo;
-(void)dealloc;
@end

