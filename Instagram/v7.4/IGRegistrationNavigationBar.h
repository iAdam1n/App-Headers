/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel, UIActivityIndicatorView;

@interface IGRegistrationNavigationBar : UIView {

	UIButton* _leftButton;
	UIButton* _rightButton;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIButton * leftButton;                          //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) UIButton * rightButton;                         //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
-(void)setIsVerifying:(BOOL)arg1 ;
-(void)addRightButton;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
-(void)setLeftButton:(UIButton *)arg1 ;
-(void)setRightButton:(UIButton *)arg1 ;
@end

