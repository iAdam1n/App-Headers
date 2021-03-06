/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@protocol SKPMyInfoTableViewHeaderDelegate;
@class NSString, UIImageView, UIButton, SKPAttributedLabel, UITapGestureRecognizer;

@interface SKPMyInfoTableViewHeader : UIView {

	BOOL _shouldExpandMoodMessageView;
	id<SKPMyInfoTableViewHeaderDelegate> _delegate;
	NSString* _moodMessage;
	UIImageView* _bubbleImageView;
	UIButton* _changeAvatarButton;
	SKPAttributedLabel* _attributedLabel;
	UITapGestureRecognizer* _changeMoodMessageTapGestureRecognizer;

}

@property (nonatomic,retain) UIImageView * bubbleImageView;                                               //@synthesize bubbleImageView=_bubbleImageView - In the implementation block
@property (nonatomic,retain) UIButton * changeAvatarButton;                                               //@synthesize changeAvatarButton=_changeAvatarButton - In the implementation block
@property (nonatomic,retain) SKPAttributedLabel * attributedLabel;                                        //@synthesize attributedLabel=_attributedLabel - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * changeMoodMessageTapGestureRecognizer;              //@synthesize changeMoodMessageTapGestureRecognizer=_changeMoodMessageTapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<SKPMyInfoTableViewHeaderDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * moodMessage;                                                      //@synthesize moodMessage=_moodMessage - In the implementation block
@property (assign,nonatomic) BOOL shouldExpandMoodMessageView;                                            //@synthesize shouldExpandMoodMessageView=_shouldExpandMoodMessageView - In the implementation block
-(void)setupAppearance;
-(NSString *)moodMessage;
-(void)setMoodMessage:(NSString *)arg1 ;
-(void)setupMoodBubble;
-(void)setupMoodMessageView;
-(UIButton *)changeAvatarButton;
-(void)setChangeAvatarButton:(UIButton *)arg1 ;
-(void)changeAvatarButtonDidPress:(id)arg1 ;
-(void)setBubbleImageView:(UIImageView *)arg1 ;
-(UIImageView *)bubbleImageView;
-(id)resizableMoodOverlayImage;
-(void)setAttributedLabel:(SKPAttributedLabel *)arg1 ;
-(SKPAttributedLabel *)attributedLabel;
-(BOOL)shouldExpandMoodMessageView;
-(CGPathRef)moodBubblePath;
-(void)setChangeMoodMessageTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)changeMoodMessageTapGestureRecognizer;
-(void)setupChangeAvatarButton;
-(void)setShouldExpandMoodMessageView:(BOOL)arg1 ;
-(void)changeMoodMessage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SKPMyInfoTableViewHeaderDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SKPMyInfoTableViewHeaderDelegate>)delegate;
@end

