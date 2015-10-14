/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class NSString, NSArray, NSURL, PTHTweetbotStatus, PTHTweetbotAccount, UIViewController;

@interface PTHTweetbotUIActivity : UIActivity {

	NSString* _activityTitle;
	NSArray* _activityItems;
	NSURL* _url;
	PTHTweetbotStatus* _status;
	PTHTweetbotAccount* _account;

}

@property (nonatomic,copy) NSString * activityTitle;                                         //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,readonly) NSArray * activityItems;                                      //@synthesize activityItems=_activityItems - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) PTHTweetbotStatus * status;                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) PTHTweetbotAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * currentViewController; 
+(id)activitiesForURL:(id)arg1 status:(id)arg2 account:(id)arg3 ;
+(id)activitiesForStatus:(id)arg1 ;
+(id)_urlActivities;
-(UIViewController *)currentViewController;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(PTHTweetbotStatus *)status;
-(void)setStatus:(PTHTweetbotStatus *)arg1 ;
-(NSArray *)activityItems;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(PTHTweetbotAccount *)account;
-(void)setActivityTitle:(NSString *)arg1 ;
@end

