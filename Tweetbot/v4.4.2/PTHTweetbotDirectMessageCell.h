/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Tweetbot/PTHTweetbotEntityTextLabelDelegate.h>

@class _PTHMaskedImageView, PTHTweetbotEntityTextLabel, PTHTweetbotAvatarView, PTHTweetbotTimeDifferenceLabel, NSMutableArray, NSLayoutConstraint, PTHKeyValueObserver, UIImageView, PTHTweetbotEntity, PTHTweetbotDirectMessagesController, PTHTweetbotDirectMessage, NSString;

@interface PTHTweetbotDirectMessageCell : UITableViewCell <PTHTweetbotEntityTextLabelDelegate> {

	_PTHMaskedImageView* _textBackgroundView;
	PTHTweetbotEntityTextLabel* _entityTextLabel;
	PTHTweetbotAvatarView* _avatarView;
	PTHTweetbotTimeDifferenceLabel* _dateLabel;
	BOOL _wasSentMessage;
	NSMutableArray* _subviewConstraints;
	NSLayoutConstraint* _entityTextLabelWidthConstraint;
	NSLayoutConstraint* _entityTextLabelHeightConstraint;
	PTHKeyValueObserver* _draftObserver;
	long long _directMessageState;
	double _lastTextSizeCellWidth;
	UIImageView* _imageView;
	PTHTweetbotEntity* _mediaEntity;
	PTHTweetbotDirectMessagesController* _viewController;
	PTHTweetbotDirectMessage* _directMessage;

}

@property (assign,nonatomic,__weak) PTHTweetbotDirectMessagesController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) PTHTweetbotDirectMessage * directMessage;                                 //@synthesize directMessage=_directMessage - In the implementation block
@property (nonatomic,readonly) long long tid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)cellHeightWithItem:(id)arg1 forTableView:(id)arg2 ;
+(CGSize)textSizeForItem:(id)arg1 forWidth:(double)arg2 ;
+(void)initialize;
-(void)setDirectMessage:(PTHTweetbotDirectMessage *)arg1 ;
-(void)showMedia;
-(void)longPressMedia:(id)arg1 ;
-(void)_showUser;
-(void)_updateDateFormat;
-(void)_updateTextSize;
-(id)optionsSheet;
-(void)_updateTextSizeIfNeeded;
-(void)entityTextLabel:(id)arg1 didTouchUpEntity:(id)arg2 entityFrame:(CGRect)arg3 ;
-(void)entityTextLabel:(id)arg1 didLongPressEntity:(id)arg2 entityFrame:(CGRect)arg3 ;
-(PTHTweetbotDirectMessage *)directMessage;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)accessibilityLabel;
-(void)_update;
-(void)setViewController:(PTHTweetbotDirectMessagesController *)arg1 ;
-(PTHTweetbotDirectMessagesController *)viewController;
-(void)updateConstraints;
-(id)accessibilityValue;
-(long long)tid;
@end

