/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BITPLCrashReportSymbolInfo;

@interface BITPLCrashReportStackFrameInfo : NSObject {

	unsigned long long _instructionPointer;
	BITPLCrashReportSymbolInfo* _symbolInfo;

}

@property (nonatomic,readonly) unsigned long long instructionPointer;                //@synthesize instructionPointer=_instructionPointer - In the implementation block
@property (nonatomic,readonly) BITPLCrashReportSymbolInfo * symbolInfo;              //@synthesize symbolInfo=_symbolInfo - In the implementation block
-(unsigned long long)instructionPointer;
-(BITPLCrashReportSymbolInfo *)symbolInfo;
-(id)initWithInstructionPointer:(unsigned long long)arg1 symbolInfo:(id)arg2 ;
-(void)dealloc;
@end

