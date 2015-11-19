/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Gumtree/ATMessageCenterCell.h>
#import <Gumtree/ATTTTAttributedLabelDelegate.h>

@class UILabel, UIView, ATNetworkImageView, UIImageView, ATTTTAttributedLabel, NSString;

@interface ATTextMessageUserCell : UITableViewCell <ATMessageCenterCell, ATTTTAttributedLabelDelegate> {

	double horizontalCellPadding;
	BOOL composing;
	BOOL showDateLabel;
	BOOL tooLong;
	int cellType;
	UILabel* dateLabel;
	UIView* chatBubbleContainer;
	ATNetworkImageView* userIcon;
	UIImageView* messageBubbleImage;
	UILabel* usernameLabel;
	ATTTTAttributedLabel* messageText;
	UIImageView* composingBubble;
	UILabel* _tooLongLabel;

}

@property (nonatomic,retain) UILabel * dateLabel; 
@property (nonatomic,retain) UIView * chatBubbleContainer; 
@property (nonatomic,retain) ATNetworkImageView * userIcon; 
@property (nonatomic,retain) UIImageView * messageBubbleImage; 
@property (nonatomic,retain) UILabel * usernameLabel; 
@property (nonatomic,retain) ATTTTAttributedLabel * messageText; 
@property (nonatomic,retain) UIImageView * composingBubble; 
@property (nonatomic,retain) UILabel * tooLongLabel;                                     //@synthesize tooLongLabel=_tooLongLabel - In the implementation block
@property (assign,getter=isComposing,nonatomic) BOOL composing; 
@property (assign,getter=shouldShowDateLabel,nonatomic) BOOL showDateLabel; 
@property (assign,getter=isTooLong,nonatomic) BOOL tooLong; 
@property (assign,nonatomic) int cellType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldShowDateLabel;
-(void)setShowDateLabel:(BOOL)arg1 ;
-(UIView *)chatBubbleContainer;
-(ATNetworkImageView *)userIcon;
-(void)setUserIcon:(ATNetworkImageView *)arg1 ;
-(void)setChatBubbleContainer:(UIView *)arg1 ;
-(UIImageView *)messageBubbleImage;
-(void)setMessageBubbleImage:(UIImageView *)arg1 ;
-(BOOL)isTooLong;
-(void)setTooLong:(BOOL)arg1 ;
-(UILabel *)usernameLabel;
-(UIImageView *)composingBubble;
-(void)setComposing:(BOOL)arg1 ;
-(BOOL)isComposing;
-(UILabel *)tooLongLabel;
-(void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2 ;
-(void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2 ;
-(void)setTooLongLabel:(UILabel *)arg1 ;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(void)setComposingBubble:(UIImageView *)arg1 ;
-(double)cellHeightForWidth:(double)arg1 ;
-(void)setDateLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)awakeFromNib;
-(void)setMessageText:(ATTTTAttributedLabel *)arg1 ;
-(UILabel *)dateLabel;
-(ATTTTAttributedLabel *)messageText;
-(void)setup;
-(int)cellType;
-(void)setCellType:(int)arg1 ;
@end

