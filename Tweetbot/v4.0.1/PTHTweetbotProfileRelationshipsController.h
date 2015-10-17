/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:56 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotProfileChildController.h>

@class UIButton;

@interface PTHTweetbotProfileRelationshipsController : PTHTweetbotProfileChildController {

	UIButton* _followersButton;
	UIButton* _followingButton;
	long long _followersCount;
	long long _followingCount;

}
-(id)initWithTweetbotUser:(id)arg1 ;
-(void)_showFollowers:(id)arg1 ;
-(void)_showFollowing:(id)arg1 ;
-(void)userWasUpdated;
-(void)loadView;
-(void)_updateTitles;
@end
