/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/BITPLCrashReportFormatter.h>

@interface BITPLCrashReportTextFormatter : NSObject <BITPLCrashReportFormatter> {

	int _textFormat;
	unsigned long long _stringEncoding;

}
+(id)formatStackFrame:(id)arg1 frameIndex:(unsigned long long)arg2 report:(id)arg3 lp64:(BOOL)arg4 ;
+(id)stringValueForCrashReport:(id)arg1 withTextFormat:(int)arg2 ;
-(id)formatReport:(id)arg1 error:(id*)arg2 ;
-(id)initWithTextFormat:(int)arg1 stringEncoding:(unsigned long long)arg2 ;
@end

