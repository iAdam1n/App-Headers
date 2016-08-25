/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatusDetailChildController.h>

@class UIStackView, NSArray;

@interface PTHTweetbotStatusDetailRepliesController : PTHTweetbotStatusDetailChildController {

	BOOL _loadedReplies;
	UIStackView* _replyThreadsStackView;
	NSArray* _replyThreads;

}

@property (nonatomic,readonly) NSArray * replyStatuses; 
-(void)statusWasUpdated;
-(NSArray *)replyStatuses;
-(void)_loadReplies;
-(void)_updatePreviewingStatus;
-(void)previewingStatusDidChange;
@end

