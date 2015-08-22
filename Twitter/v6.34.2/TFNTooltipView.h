/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@protocol TFNTooltipViewDelegate;
@class NSString, UIColor, UIFont, UILabel, UITapGestureRecognizer, UIView;

@interface TFNTooltipView : UIView {

	BOOL _showInView;
	id<TFNTooltipViewDelegate> _delegate;
	NSString* _tooltipText;
	UIColor* _tooltipBackgroundColor;
	UIFont* _tooltipFont;
	unsigned long long _arrowDirection;
	double _maxWidth;
	double _arrowOffset;
	unsigned long long _animationType;
	UILabel* _tooltipLabel;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIView* _lastPresentedFromView;
	CGPoint _focusPoint;
	CGSize _arrowSize;
	CGRect _lastPresentedFromRect;

}

@property (assign,nonatomic,__weak) id<TFNTooltipViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * tooltipText;                                       //@synthesize tooltipText=_tooltipText - In the implementation block
@property (nonatomic,retain) UIColor * tooltipBackgroundColor;                           //@synthesize tooltipBackgroundColor=_tooltipBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * tooltipTextColor; 
@property (nonatomic,retain) UIFont * tooltipFont;                                       //@synthesize tooltipFont=_tooltipFont - In the implementation block
@property (assign,nonatomic) CGPoint focusPoint;                                         //@synthesize focusPoint=_focusPoint - In the implementation block
@property (assign,nonatomic) unsigned long long arrowDirection;                          //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (assign,nonatomic) double maxWidth;                                            //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) CGSize arrowSize;                                           //@synthesize arrowSize=_arrowSize - In the implementation block
@property (assign,nonatomic) double arrowOffset;                                         //@synthesize arrowOffset=_arrowOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long animationType;                         //@synthesize animationType=_animationType - In the implementation block
@property (nonatomic,readonly) CGSize estimatedSize; 
@property (nonatomic,retain) UILabel * tooltipLabel;                                     //@synthesize tooltipLabel=_tooltipLabel - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL showInView;                                            //@synthesize showInView=_showInView - In the implementation block
@property (nonatomic,retain) UIView * lastPresentedFromView;                             //@synthesize lastPresentedFromView=_lastPresentedFromView - In the implementation block
@property (assign,nonatomic) CGRect lastPresentedFromRect;                               //@synthesize lastPresentedFromRect=_lastPresentedFromRect - In the implementation block
+(/*^block*/id)_fadeAnimationForPresentation:(BOOL)arg1 delay:(double)arg2 ;
+(/*^block*/id)_popAnimationForPresentation:(BOOL)arg1 delay:(double)arg2 ;
+(id)_arrowCandidatesForRect:(CGRect)arg1 inBounds:(CGRect)arg2 ;
+(void)_tooltipPerfectFitWithFullSize:(CGSize)arg1 arrowDirection:(unsigned long long)arg2 viewBounds:(CGRect)arg3 fromRect:(CGRect)arg4 arrowPoint:(CGPoint*)arg5 arrowOffset:(double*)arg6 ;
-(NSString *)tooltipText;
-(void)setTooltipText:(NSString *)arg1 ;
-(void)setTooltipBackgroundColor:(UIColor *)arg1 ;
-(void)setTooltipTextColor:(UIColor *)arg1 ;
-(void)setTooltipFont:(UIFont *)arg1 ;
-(void)dismissTooltipWithAnimationType:(unsigned long long)arg1 ;
-(void)setLastPresentedFromRect:(CGRect)arg1 ;
-(void)presentTooltipFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirection:(unsigned long long)arg3 delay:(double)arg4 animationType:(unsigned long long)arg5 ;
-(void)positionForRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirection:(unsigned long long)arg3 ;
-(CGRect)lastPresentedFromRect;
-(UIView *)lastPresentedFromView;
-(void)setLastPresentedFromView:(UIView *)arg1 ;
-(void)setShowInView:(BOOL)arg1 ;
-(UILabel *)tooltipLabel;
-(void)_tooltipTapped:(id)arg1 ;
-(void)_recalculateTooltipTextAlignment;
-(void)setFocusPoint:(CGPoint)arg1 ;
-(void)showInView:(id)arg1 atPoint:(CGPoint)arg2 delay:(double)arg3 animationType:(unsigned long long)arg4 ;
-(void)_dismissFromSuperview;
-(CGSize)_tooltipTextSizeForText:(id)arg1 ;
-(void)_sizeTooltipBounds;
-(BOOL)showInView;
-(void)_positionTooltipRelativeToFocusPoint;
-(CGRect)_tooltipBodyRectForBounds:(CGRect)arg1 ;
-(CGPoint)_arrowPointForBounds:(CGRect)arg1 ;
-(CGPoint)_tooltipAnchorPoint;
-(CGPoint)_centerOfArrowBaseForBounds:(CGRect)arg1 ;
-(UIColor *)tooltipBackgroundColor;
-(void)_validateWidth;
-(double)_pixelOffsetForOffsetRatio:(double)arg1 inTooltipWithBounds:(CGRect)arg2 ;
-(void)setArrowSize:(CGSize)arg1 ;
-(UIColor *)tooltipTextColor;
-(void)positionAtPoint:(CGPoint)arg1 ;
-(CGSize)estimatedSize;
-(UIFont *)tooltipFont;
-(CGSize)arrowSize;
-(void)setTooltipLabel:(UILabel *)arg1 ;
-(void)_fontSizeChanged;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<TFNTooltipViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<TFNTooltipViewDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(unsigned long long)animationType;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(CGPoint)focusPoint;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
@end
