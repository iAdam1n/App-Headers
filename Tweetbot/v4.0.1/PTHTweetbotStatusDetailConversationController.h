/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:56 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatusDetailChildController.h>

@class NSMutableArray, UIStackView, UILabel, UIView, UILayoutGuide, NSArray, NSLayoutYAxisAnchor;

@interface PTHTweetbotStatusDetailConversationController : PTHTweetbotStatusDetailChildController {

	NSMutableArray* _statusViews;
	UIStackView* _stackView;
	UILabel* _inReplyToLabel;
	UIView* _inReplyToView;
	UILayoutGuide* _topAnchorLayoutGuide;
	NSArray* _conversationStatuses;

}

@property (nonatomic,readonly) NSArray * conversationStatuses;               //@synthesize conversationStatuses=_conversationStatuses - In the implementation block
@property (nonatomic,readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (nonatomic,readonly) UIView * lastStatusView; 
-(void)swipeLeft:(id)arg1 ;
-(void)_updateReplyToLabel;
-(void)statusWasUpdated;
-(void)_loadConversation;
-(UIView *)lastStatusView;
-(NSArray *)conversationStatuses;
-(void)previewingStatusDidChange;
-(void)loadView;
-(NSLayoutYAxisAnchor *)topAnchor;
@end

