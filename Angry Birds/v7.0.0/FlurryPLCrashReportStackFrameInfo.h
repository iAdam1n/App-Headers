/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:37 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FlurryPLCrashReportSymbolInfo;

@interface FlurryPLCrashReportStackFrameInfo : NSObject {

	unsigned long long _instructionPointer;
	FlurryPLCrashReportSymbolInfo* _symbolInfo;

}

@property (nonatomic,readonly) unsigned long long instructionPointer;                   //@synthesize instructionPointer=_instructionPointer - In the implementation block
@property (nonatomic,readonly) FlurryPLCrashReportSymbolInfo * symbolInfo;              //@synthesize symbolInfo=_symbolInfo - In the implementation block
-(id)initWithInstructionPointer:(unsigned long long)arg1 symbolInfo:(id)arg2 ;
-(unsigned long long)instructionPointer;
-(FlurryPLCrashReportSymbolInfo *)symbolInfo;
-(void)dealloc;
@end
