/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Gumtree/ATMessageCenterCell.h>

@class UILabel, ATNetworkImageView, ATFileMessage, UIImage, UIView, UIImageView, NSString;

@interface ATFileMessageCell : UITableViewCell <ATMessageCenterCell> {

	UILabel* dateLabel;
	ATNetworkImageView* userIcon;
	BOOL showDateLabel;
	ATFileMessage* fileMessage;
	UIImage* currentImage;
	CGSize cachedThumbnailSize;
	UIView* imageContainer;
	UIView* _chatBubbleContainer;
	UIImageView* _messageBubbleImage;

}

@property (nonatomic,retain) UILabel * dateLabel; 
@property (nonatomic,retain) ATNetworkImageView * userIcon; 
@property (nonatomic,retain) UIView * imageContainer; 
@property (nonatomic,retain) UIView * chatBubbleContainer;                               //@synthesize chatBubbleContainer=_chatBubbleContainer - In the implementation block
@property (nonatomic,retain) UIImageView * messageBubbleImage;                           //@synthesize messageBubbleImage=_messageBubbleImage - In the implementation block
@property (assign,getter=shouldShowDateLabel,nonatomic) BOOL showDateLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(BOOL)shouldShowDateLabel;
-(void)setShowDateLabel:(BOOL)arg1 ;
-(UIView *)chatBubbleContainer;
-(UIView *)imageContainer;
-(void)configureWithFileMessage:(id)arg1 ;
-(ATNetworkImageView *)userIcon;
-(void)setUserIcon:(ATNetworkImageView *)arg1 ;
-(void)setImageContainer:(UIView *)arg1 ;
-(void)setChatBubbleContainer:(UIView *)arg1 ;
-(UIImageView *)messageBubbleImage;
-(void)setMessageBubbleImage:(UIImageView *)arg1 ;
-(void)setCurrentImage:(id)arg1 ;
-(double)cellHeightForWidth:(double)arg1 ;
-(void)setDateLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)reuseIdentifier;
-(UILabel *)dateLabel;
@end

