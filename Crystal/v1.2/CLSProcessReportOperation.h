/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:12:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/CF12D463-F5F0-40C2-A761-CC2E709AB052/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CLSSymbolResolver, CLSInternalReport;

@interface CLSProcessReportOperation : NSOperation {

	CLSSymbolResolver* _symbolResolver;
	CLSInternalReport* _report;

}

@property (nonatomic,readonly) CLSSymbolResolver * symbolResolver;              //@synthesize symbolResolver=_symbolResolver - In the implementation block
@property (nonatomic,readonly) CLSInternalReport * report;                      //@synthesize report=_report - In the implementation block
-(id)binaryImagePath;
-(id)threadArrayFromFile:(id)arg1 ;
-(CLSSymbolResolver *)symbolResolver;
-(BOOL)symbolicateFile:(id)arg1 withResolver:(id)arg2 ;
-(id)initWithReport:(id)arg1 resolver:(id)arg2 ;
-(void)main;
-(CLSInternalReport *)report;
@end
