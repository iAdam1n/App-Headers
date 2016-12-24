/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBGradientView, UILabel, FBCircularProgressView, POPBasicAnimation, UIView, UIImageView, UIImage, UITapGestureRecognizer;

@interface FBVideoChannelCountdownView : UIView {

	FBGradientView* _background;
	UILabel* _nextVideoLabel;
	FBCircularProgressView* _progressView;
	POPBasicAnimation* _progressAnimation;
	UIView* _controlContainer;
	UIImageView* _playPauseImageView;
	UIImage* _pauseImage;
	UIImage* _playImage;
	UITapGestureRecognizer* _gestureRecognizer;

}
-(void)_addProgressAnimationWithDuration:(double)arg1 ;
-(void)setTimeRemaining:(double)arg1 totalTime:(double)arg2 ;
-(void)addTapTarget:(id)arg1 action:(SEL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)resume;
-(void)pause;
@end
