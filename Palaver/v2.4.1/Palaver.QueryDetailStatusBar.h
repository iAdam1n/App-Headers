/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:21:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6DE74A4E-11EF-47B8-8E27-4C42F9CB282C/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Palaver/Palaver-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface Palaver.QueryDetailStatusBar : UIView {

	 state;
	 statusImageView;
	 statusLabel;
	 actionLabel;

}

@property (assign,nonatomic) long long state; 
@property (assign,__weak,nonatomic) UIImageView * statusImageView; 
@property (assign,__weak,nonatomic) UILabel * statusLabel; 
@property (assign,__weak,nonatomic) UILabel * actionLabel; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(UILabel *)actionLabel;
-(void)setActionLabel:(UILabel *)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UIImageView *)statusImageView;
-(void)setStatusImageView:(UIImageView *)arg1 ;
@end
