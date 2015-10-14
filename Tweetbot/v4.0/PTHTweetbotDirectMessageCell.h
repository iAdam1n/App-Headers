/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Tweetbot/PTHTweetbotEntityTextLabelDelegate.h>

@class _PTHMaskedImageView, PTHTweetbotEntityTextLabel, PTHTweetbotAvatarView, UILabel, NSMutableArray, NSLayoutConstraint, PTHKeyValueObserver, UIImageView, PTHTweetbotEntity, PTHTweetbotDirectMessagesController, PTHTweetbotDirectMessage, NSString;

@interface PTHTweetbotDirectMessageCell : UITableViewCell <PTHTweetbotEntityTextLabelDelegate> {

	_PTHMaskedImageView* _textBackgroundView;
	PTHTweetbotEntityTextLabel* _entityTextLabel;
	PTHTweetbotAvatarView* _avatarView;
	UILabel* _dateLabel;
	BOOL _registeredForSecondNotification;
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
-(void)_updateDate;
-(void)_updateDateSecond;
-(id)timeDifferenceFormatter;
-(void)setDirectMessage:(PTHTweetbotDirectMessage *)arg1 ;
-(void)showMedia;
-(void)longPressMedia:(id)arg1 ;
-(void)_showUser;
-(id)optionsSheet;
-(id)absoluteDateFormatter;
-(void)_updateTextSize;
-(void)_updateDateAndColors;
-(void)_updateTextSizeIfNeeded;
-(void)entityTextLabel:(id)arg1 didTouchUpEntity:(id)arg2 entityFrame:(CGRect)arg3 ;
-(void)entityTextLabel:(id)arg1 didLongPressEntity:(id)arg2 entityFrame:(CGRect)arg3 ;
-(PTHTweetbotDirectMessage *)directMessage;
-(void)_updateColors;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)accessibilityLabel;
-(void)setViewController:(PTHTweetbotDirectMessagesController *)arg1 ;
-(PTHTweetbotDirectMessagesController *)viewController;
-(void)updateConstraints;
-(id)accessibilityValue;
-(long long)tid;
@end

