/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotProfileChildController.h>

@class PTHTweetbotCursor;

@interface PTHTweetbotProfileRecentMediaController : PTHTweetbotProfileChildController {

	PTHTweetbotCursor* _userTimelineCursor;

}
-(id)initWithTweetbotUser:(id)arg1 ;
-(id)initWithUserTimelineCursor:(id)arg1 ;
-(void)_loadStatuses:(id)arg1 ;
-(void)loadView;
@end

