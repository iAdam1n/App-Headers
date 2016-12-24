/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, BaseButton, BaseProgressView;

@interface ProgressContentView : UIView {

	double _progressPercentage;
	UILabel* _mainLabel;
	UIImageView* _imageView;
	BaseButton* _retryButton;
	BaseButton* _cancelButton;
	BaseProgressView* _progressView;

}

@property (nonatomic,retain) UILabel * mainLabel;                          //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) BaseButton * retryButton;                     //@synthesize retryButton=_retryButton - In the implementation block
@property (nonatomic,retain) BaseButton * cancelButton;                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) BaseProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) double progressPercentage;                    //@synthesize progressPercentage=_progressPercentage - In the implementation block
-(BaseButton *)retryButton;
-(double)progressPercentage;
-(void)setRetryButton:(BaseButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(UIImageView *)imageView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCancelButton:(BaseButton *)arg1 ;
-(BaseButton *)cancelButton;
-(void)setImageView:(UIImageView *)arg1 ;
-(BaseProgressView *)progressView;
-(void)setProgressView:(BaseProgressView *)arg1 ;
-(void)setMainLabel:(UILabel *)arg1 ;
-(UILabel *)mainLabel;
-(void)setProgressPercentage:(double)arg1 ;
@end
