/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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

