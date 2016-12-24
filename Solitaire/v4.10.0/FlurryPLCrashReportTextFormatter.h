/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/FlurryPLCrashReportFormatter.h>

@interface FlurryPLCrashReportTextFormatter : NSObject <FlurryPLCrashReportFormatter> {

	int _textFormat;
	unsigned long long _stringEncoding;

}
+(id)formatStackFrame:(id)arg1 frameIndex:(unsigned long long)arg2 report:(id)arg3 lp64:(BOOL)arg4 ;
+(id)stringValueForCrashReport:(id)arg1 withTextFormat:(int)arg2 ;
-(id)formatReport:(id)arg1 error:(id*)arg2 ;
-(id)initWithTextFormat:(int)arg1 stringEncoding:(unsigned long long)arg2 ;
@end
