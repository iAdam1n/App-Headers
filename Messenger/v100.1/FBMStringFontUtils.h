/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBMStringFontUtils : NSObject
+(id)fontToFitString:(id)arg1 largestFont:(id)arg2 minFontSize:(double)arg3 fontSizeStep:(double)arg4 constraintSize:(CGSize)arg5 maxNumberOfLines:(long long)arg6 ;
+(id)fontToFitLongestString:(id)arg1 largestFont:(id)arg2 minFontSize:(double)arg3 maxWidth:(double)arg4 ;
+(double)maxFontSizeForLabel:(id)arg1 constrainedToWidth:(double)arg2 defaultFont:(id)arg3 minFontSize:(double)arg4 ;
@end
