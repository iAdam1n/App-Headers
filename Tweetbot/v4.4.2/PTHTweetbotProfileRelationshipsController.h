/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(void)userWasUpdated;
-(void)_showFollowers:(id)arg1 ;
-(void)_showFollowing:(id)arg1 ;
-(void)loadView;
-(void)_updateTitles;
@end
