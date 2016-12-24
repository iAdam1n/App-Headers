/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class CBCloseButton, UIView, UILabel, CBUnderfinedProgressBar, UITapGestureRecognizer, UIViewController, NSString;

@interface CBLoadingView : UIView <UIGestureRecognizerDelegate> {

	CBCloseButton* _closeButton;
	UIView* _transparentView;
	UILabel* _label;
	CBUnderfinedProgressBar* _progressBar;
	UITapGestureRecognizer* _closeButtonTapRecognizer;
	UIViewController* _viewController;

}

@property (nonatomic,retain) CBCloseButton * closeButton;                                    //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIView * transparentView;                                       //@synthesize transparentView=_transparentView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CBUnderfinedProgressBar * progressBar;                          //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * closeButtonTapRecognizer;              //@synthesize closeButtonTapRecognizer=_closeButtonTapRecognizer - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)transparentView;
-(UITapGestureRecognizer *)closeButtonTapRecognizer;
-(void)handleCloseButtonTap:(id)arg1 ;
-(void)setTransparentView:(UIView *)arg1 ;
-(void)setCloseButtonTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(CBCloseButton *)closeButton;
-(void)setCloseButton:(CBCloseButton *)arg1 ;
-(CBUnderfinedProgressBar *)progressBar;
-(void)setProgressBar:(CBUnderfinedProgressBar *)arg1 ;
@end
