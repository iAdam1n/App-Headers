/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIControl.h>

@class SLKLineLayer;

@interface SLKModalButton : UIControl {

	BOOL _shouldAnimateHighlight;
	BOOL _animatingStyle;
	BOOL _animatingHighlight;
	double _linesWidth;
	unsigned long long _style;
	SLKLineLayer* _leftLine;
	SLKLineLayer* _rightLine;

}

@property (assign,getter=isAnimatingStyle,nonatomic) BOOL animatingStyle;                      //@synthesize animatingStyle=_animatingStyle - In the implementation block
@property (assign,getter=isAnimatingHighlight,nonatomic) BOOL animatingHighlight;              //@synthesize animatingHighlight=_animatingHighlight - In the implementation block
@property (nonatomic,retain) SLKLineLayer * leftLine;                                          //@synthesize leftLine=_leftLine - In the implementation block
@property (nonatomic,retain) SLKLineLayer * rightLine;                                         //@synthesize rightLine=_rightLine - In the implementation block
@property (assign,nonatomic) double linesWidth;                                                //@synthesize linesWidth=_linesWidth - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateHighlight;                                      //@synthesize shouldAnimateHighlight=_shouldAnimateHighlight - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                         //@synthesize style=_style - In the implementation block
-(void)setShouldAnimateHighlight:(BOOL)arg1 ;
-(void)setLinesWidth:(double)arg1 ;
-(SLKLineLayer *)leftLine;
-(SLKLineLayer *)rightLine;
-(BOOL)shouldAnimateHighlight;
-(void)setAnimatingHighlight:(BOOL)arg1 ;
-(double)linesWidth;
-(BOOL)isAnimatingStyle;
-(void)setAnimatingStyle:(BOOL)arg1 ;
-(BOOL)isAnimatingHighlight;
-(void)setLeftLine:(SLKLineLayer *)arg1 ;
-(void)setRightLine:(SLKLineLayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setStyle:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)commonInit;
@end

