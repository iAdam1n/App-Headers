/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotUIActivity.h>

@class PTHTweetbotBookmarkerService;

@interface PTHTweetbotBookmarkerUIActivity : PTHTweetbotUIActivity {

	PTHTweetbotBookmarkerService* _bookmarker;

}

@property (nonatomic,readonly) PTHTweetbotBookmarkerService * bookmarker;              //@synthesize bookmarker=_bookmarker - In the implementation block
+(id)validActivityItemClasses;
+(long long)activityCategory;
-(PTHTweetbotBookmarkerService *)bookmarker;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)activityImage;
-(void)setAccount:(id)arg1 ;
@end
