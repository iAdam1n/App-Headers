/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotUIActivity.h>

@class PTHTweetbotBrowserLauncher;

@interface PTHTweetbotOpenInBrowserUIActivity : PTHTweetbotUIActivity {

	PTHTweetbotBrowserLauncher* _launcher;

}

@property (nonatomic,retain) PTHTweetbotBrowserLauncher * launcher;              //@synthesize launcher=_launcher - In the implementation block
+(id)validActivityItemClasses;
+(long long)activityCategory;
-(void)setLauncher:(PTHTweetbotBrowserLauncher *)arg1 ;
-(id)launcherName;
-(PTHTweetbotBrowserLauncher *)launcher;
-(id)activityTitle;
-(void)performActivity;
-(id)activityImage;
@end
