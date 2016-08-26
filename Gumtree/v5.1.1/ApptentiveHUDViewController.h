/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UIImageView, UIView, UIWindow, NSTimer, UIGestureRecognizer;

@interface ApptentiveHUDViewController : UIViewController {

	double _interval;
	double _animationDuration;
	UILabel* _textLabel;
	UIImageView* _imageView;
	UIView* _HUDView;
	UIWindow* _hostWindow;
	UIWindow* _shadowWindow;
	NSTimer* _hideTimer;
	UIGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) UIView * HUDView;                                        //@synthesize HUDView=_HUDView - In the implementation block
@property (nonatomic,retain) UIWindow * hostWindow;                                   //@synthesize hostWindow=_hostWindow - In the implementation block
@property (nonatomic,retain) UIWindow * shadowWindow;                                 //@synthesize shadowWindow=_shadowWindow - In the implementation block
@property (nonatomic,retain) NSTimer * hideTimer;                                     //@synthesize hideTimer=_hideTimer - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) double animationDuration;                                //@synthesize animationDuration=_animationDuration - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                     //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
-(void)setHideTimer:(NSTimer *)arg1 ;
-(NSTimer *)hideTimer;
-(void)setHUDView:(UIView *)arg1 ;
-(UIView *)HUDView;
-(void)showInAlertWindow;
-(UIWindow *)shadowWindow;
-(void)setShadowWindow:(UIWindow *)arg1 ;
-(void)setHostWindow:(UIWindow *)arg1 ;
-(UIWindow *)hostWindow;
-(void)setAnimationDuration:(double)arg1 ;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(UILabel *)textLabel;
-(UIImageView *)imageView;
-(double)animationDuration;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(void)hide:(id)arg1 ;
-(UIGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UIGestureRecognizer *)arg1 ;
@end
