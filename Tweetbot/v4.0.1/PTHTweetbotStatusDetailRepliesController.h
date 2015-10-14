/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatusDetailChildController.h>

@class NSMutableArray, NSArray, UIView;

@interface PTHTweetbotStatusDetailRepliesController : PTHTweetbotStatusDetailChildController {

	NSMutableArray* _statusViews;
	BOOL _loadedReplies;
	NSArray* _replyStatuses;

}

@property (nonatomic,readonly) NSArray * replyStatuses;              //@synthesize replyStatuses=_replyStatuses - In the implementation block
@property (nonatomic,readonly) UIView * firstReplyView; 
-(void)swipeLeft:(id)arg1 ;
-(void)statusWasUpdated;
-(NSArray *)replyStatuses;
-(void)_loadReplies;
-(UIView *)firstReplyView;
-(void)previewingStatusDidChange;
@end

