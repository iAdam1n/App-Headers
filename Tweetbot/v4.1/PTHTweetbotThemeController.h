/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDate;

@interface PTHTweetbotThemeController : NSObject {

	NSDate* _nextAutochangeDate;
	unsigned long long _changeCounter;
	BOOL _themeAutoChangeEnabled;

}
+(id)sharedController;
-(void)_didBecomeActive;
-(void)setTheme:(id)arg1 withAnimation:(unsigned long long)arg2 ;
-(void)_changeIfNeeded;
-(void)pauseAutochange:(double)arg1 ;
-(id)init;
-(void)_defaultsDidChange;
@end

