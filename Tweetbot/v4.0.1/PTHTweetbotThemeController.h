/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
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

