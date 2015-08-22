/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, T1NotchContainerView, T1InlinePromptContentView, NSParagraphStyle, TFNTwitterPrompt, UIButton;

@interface T1InlineActionPromptView : UIView {

	UILabel* _label;
	T1NotchContainerView* _notchedView;
	T1InlinePromptContentView* _contentView;
	NSParagraphStyle* _paragraphStyle;
	BOOL _collapsed;
	TFNTwitterPrompt* _prompt;

}

@property (assign,nonatomic) double notchPosition; 
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;              //@synthesize collapsed=_collapsed - In the implementation block
@property (nonatomic,retain) TFNTwitterPrompt * prompt;                      //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton; 
+(BOOL)acceptsPrompt:(id)arg1 ;
+(CGSize)sizeThatFits:(CGSize)arg1 prompt:(id)arg2 ;
-(double)notchPosition;
-(void)setNotchPosition:(double)arg1 ;
-(void)resetAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(TFNTwitterPrompt *)prompt;
-(void)setPrompt:(TFNTwitterPrompt *)arg1 ;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(UIButton *)dismissButton;
-(void)_updateContent;
@end
