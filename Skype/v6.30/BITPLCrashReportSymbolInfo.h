/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BITPLCrashReportSymbolInfo : NSObject {

	NSString* _symbolName;
	unsigned long long _startAddress;
	unsigned long long _endAddress;

}

@property (nonatomic,readonly) NSString * symbolName;                        //@synthesize symbolName=_symbolName - In the implementation block
@property (nonatomic,readonly) unsigned long long startAddress;              //@synthesize startAddress=_startAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long endAddress;                //@synthesize endAddress=_endAddress - In the implementation block
-(id)initWithSymbolName:(id)arg1 startAddress:(unsigned long long)arg2 endAddress:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)startAddress;
-(unsigned long long)endAddress;
-(NSString *)symbolName;
@end
