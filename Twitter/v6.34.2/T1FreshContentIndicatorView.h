/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@protocol T1FreshContentIndicatorViewDelegate;
@class UILabel, UIImageView, UITapGestureRecognizer, NSString, UIColor;

@interface T1FreshContentIndicatorView : UIView {

	UILabel* _label;
	BOOL _showing;
	UIImageView* _arrowImageView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _alive;
	double _autoHideInterval;
	id<T1FreshContentIndicatorViewDelegate> _delegate;
	long long _animationDirection;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIImageView * arrowImageView; 
@property (assign,nonatomic) double autoHideInterval;                                              //@synthesize autoHideInterval=_autoHideInterval - In the implementation block
@property (assign,nonatomic,__weak) id<T1FreshContentIndicatorViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long animationDirection;                                         //@synthesize animationDirection=_animationDirection - In the implementation block
@property (assign,nonatomic) BOOL alive;                                                           //@synthesize alive=_alive - In the implementation block
-(void)setAlive:(BOOL)arg1 ;
-(double)autoHideInterval;
-(void)_startAutoHideTimer;
-(void)setAnimationDirection:(long long)arg1 ;
-(void)setAutoHideInterval:(double)arg1 ;
-(long long)animationDirection;
-(BOOL)alive;
-(void)_handleTap:(id)arg1 ;
-(void)show:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<T1FreshContentIndicatorViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<T1FreshContentIndicatorViewDelegate>)delegate;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIColor *)textColor;
-(long long)textAlignment;
-(void)setArrowImageView:(UIImageView *)arg1 ;
-(UIImageView *)arrowImageView;
-(void)hide:(BOOL)arg1 ;
@end
