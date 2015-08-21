/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
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

