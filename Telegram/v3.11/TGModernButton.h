/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor, UIImageView, UIView, UIImage;

@interface TGModernButton : UIButton {

	BOOL _animateHighlight;
	UIColor* _titleColor;
	UIImageView* _highlightImageView;
	UIView* _highlightBackgroundView;
	BOOL _modernHighlight;
	BOOL _stretchHighlightImage;
	UIImage* _highlightImage;
	UIColor* _highlightBackgroundColor;
	/*^block*/id _highlitedChanged;
	UIEdgeInsets _backgroundSelectionInsets;
	UIEdgeInsets _extendedEdgeInsets;

}

@property (assign,nonatomic) BOOL modernHighlight;                                //@synthesize modernHighlight=_modernHighlight - In the implementation block
@property (nonatomic,retain) UIImage * highlightImage;                            //@synthesize highlightImage=_highlightImage - In the implementation block
@property (assign,nonatomic) BOOL stretchHighlightImage;                          //@synthesize stretchHighlightImage=_stretchHighlightImage - In the implementation block
@property (nonatomic,retain) UIColor * highlightBackgroundColor;                  //@synthesize highlightBackgroundColor=_highlightBackgroundColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundSelectionInsets;              //@synthesize backgroundSelectionInsets=_backgroundSelectionInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets extendedEdgeInsets;                     //@synthesize extendedEdgeInsets=_extendedEdgeInsets - In the implementation block
@property (nonatomic,copy) id highlitedChanged;                                   //@synthesize highlitedChanged=_highlitedChanged - In the implementation block
-(void)setExtendedEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setModernHighlight:(BOOL)arg1 ;
-(UIEdgeInsets)extendedEdgeInsets;
-(BOOL)modernHighlight;
-(void)setStretchHighlightImage:(BOOL)arg1 ;
-(void)setHighlitedChanged:(id)arg1 ;
-(void)_setHighligtedAnimated:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlightBackgroundColor:(UIColor *)arg1 ;
-(BOOL)stretchHighlightImage;
-(UIColor *)highlightBackgroundColor;
-(UIEdgeInsets)backgroundSelectionInsets;
-(void)setBackgroundSelectionInsets:(UIEdgeInsets)arg1 ;
-(id)highlitedChanged;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleColor:(id)arg1 ;
-(void)setHighlightImage:(UIImage *)arg1 ;
-(UIImage *)highlightImage;
@end
