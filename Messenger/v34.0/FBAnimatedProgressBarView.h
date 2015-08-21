/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBAnimatedProgressBarViewDelegate;
@class CAShapeLayer, FBProgressAnimator;

@interface FBAnimatedProgressBarView : UIView {

	CAShapeLayer* _barLayer;
	FBProgressAnimator* _progressAnimator;
	id<FBAnimatedProgressBarViewDelegate> _delegate;

}

@property (assign,nonatomic) double progress; 
@property (assign,nonatomic,__weak) id<FBAnimatedProgressBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_setDisplayedProgress:(double)arg1 ;
-(void)setProgress:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBAnimatedProgressBarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBAnimatedProgressBarViewDelegate>)delegate;
-(void)reset;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(void)setProgressColor:(id)arg1 ;
@end

