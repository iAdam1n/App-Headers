/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIControl.h>

@class SLKReaction, OLImageView, UILabel, SLKDependencies;

@interface SLKReactionButton : UIControl {

	BOOL _on;
	BOOL _addButton;
	BOOL _animating;
	BOOL _bounces;
	unsigned long long _internalCount;
	SLKReaction* _reaction;
	OLImageView* _imageView;
	UILabel* _textLabel;
	SLKDependencies* _dependencies;

}

@property (nonatomic,retain) OLImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,retain) SLKReaction * reaction;                             //@synthesize reaction=_reaction - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                                //@synthesize on=_on - In the implementation block
@property (assign,getter=isAddButton,nonatomic) BOOL addButton;                  //@synthesize addButton=_addButton - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                  //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) BOOL bounces;                                       //@synthesize bounces=_bounces - In the implementation block
@property (nonatomic,readonly) unsigned long long internalCount;                 //@synthesize internalCount=_internalCount - In the implementation block
@property (nonatomic,readonly) BOOL hasEmojiImage; 
+(double)buttonWidthForCount:(long long)arg1 ;
+(double)reactionEmojiWidthSize;
+(double)labelWidthForCountString:(id)arg1 ;
+(double)reactionCountFontSize;
+(double)reactionEmojiFontSize;
+(double)buttonWidthForCountString:(id)arg1 ;
+(double)labelWidthForCount:(long long)arg1 ;
+(id)addButton:(id)arg1 ;
-(id)initWithDependencies:(id)arg1 ;
-(void)setReaction:(SLKReaction *)arg1 ;
-(BOOL)isAddButton;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(SLKReaction *)reaction;
-(void)handleGestureRecognizer:(id)arg1 ;
-(void)updateContainerAppearance;
-(id)copyLabel:(id)arg1 ;
-(unsigned long long)internalCount;
-(void)animateBounceEffectForView:(id)arg1 ;
-(BOOL)hasEmojiImage;
-(SLKDependencies *)dependencies;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutIfNeeded;
-(void)sizeToFit;
-(CGSize)intrinsicContentSize;
-(void)setBounces:(BOOL)arg1 ;
-(BOOL)bounces;
-(double)width;
-(UILabel *)textLabel;
-(id)textColor;
-(double)height;
-(OLImageView *)imageView;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)commonInit;
-(void)bounce;
-(void)setImageView:(OLImageView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setAddButton:(BOOL)arg1 ;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end

