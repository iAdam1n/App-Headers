/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
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

