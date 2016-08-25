/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIWindow, UIView, UIColor;

@interface SLToastView : UIView {

	UIWindow* _window;
	UIView* _activityView;
	UIView* _toastView;
	UIColor* _toastColor;
	double _duration;

}

@property (nonatomic,retain) UIWindow * window;                  //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) UIView * activityView;              //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) UIView * toastView;                 //@synthesize toastView=_toastView - In the implementation block
@property (nonatomic,retain) UIColor * toastColor;               //@synthesize toastColor=_toastColor - In the implementation block
@property (assign,nonatomic) double duration;                    //@synthesize duration=_duration - In the implementation block
-(void)setToastColor:(UIColor *)arg1 ;
-(id)viewForMessage:(id)arg1 image:(id)arg2 ;
-(void)setToastView:(UIView *)arg1 ;
-(id)viewForMessage:(id)arg1 subview:(id)arg2 ;
-(UIView *)toastView;
-(void)hideAnyShowingToasts;
-(void)showToast;
-(void)hideToast:(id)arg1 ;
-(UIColor *)toastColor;
-(id)initWithMessage:(id)arg1 image:(id)arg2 ;
-(id)initWithMessage:(id)arg1 activityIndicatorView:(id)arg2 ;
-(void)showWithDuration:(double)arg1 ;
-(void)makeToastActivity;
-(void)hideToastActivity;
-(void)hide;
-(void)show;
-(UIWindow *)window;
-(double)duration;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)commonInit;
-(UIView *)activityView;
-(void)setActivityView:(UIView *)arg1 ;
@end

