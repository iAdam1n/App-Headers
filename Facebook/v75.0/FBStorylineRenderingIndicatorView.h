/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, CAShapeLayer, UILabel, NSString;

@interface FBStorylineRenderingIndicatorView : UIView {

	UIView* _renderingPreviewCoverView;
	UIView* _progressBarView;
	CAShapeLayer* _barLayer;
	UILabel* _renderingHintTextLabel;
	NSString* _hintText;
	double _progress;
	CGRect _playerViewFrame;

}

@property (nonatomic,copy) NSString * hintText;                   //@synthesize hintText=_hintText - In the implementation block
@property (assign,nonatomic) double progress;                     //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) CGRect playerViewFrame;              //@synthesize playerViewFrame=_playerViewFrame - In the implementation block
-(CGRect)playerViewFrame;
-(void)setPlayerViewFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)show;
-(void)setProgress:(double)arg1 ;
-(void)dismiss;
-(double)progress;
-(void)setHintText:(NSString *)arg1 ;
-(NSString *)hintText;
@end
