/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/PLCrashReportFormatter.h>

@interface FlurryPLCrashReportTextFormatter : NSObject <PLCrashReportFormatter> {

	int _textFormat;
	unsigned long long _stringEncoding;

}
+(id)formatStackFrame:(id)arg1 frameIndex:(unsigned long long)arg2 report:(id)arg3 lp64:(BOOL)arg4 ;
+(id)stringValueForCrashReport:(id)arg1 withTextFormat:(int)arg2 ;
-(id)formatReport:(id)arg1 error:(id*)arg2 ;
-(id)initWithTextFormat:(int)arg1 stringEncoding:(unsigned long long)arg2 ;
@end

