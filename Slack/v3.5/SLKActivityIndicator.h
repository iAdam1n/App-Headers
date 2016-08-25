/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface SLKActivityIndicator : UIView {

	unsigned long long _style;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
-(void)configureView;
-(void)setStyle:(unsigned long long)arg1 color:(id)arg2 ;
-(id)imageForStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImageView *)imageView;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setImageView:(UIImageView *)arg1 ;
@end

