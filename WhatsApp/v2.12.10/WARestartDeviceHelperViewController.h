/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString, UIView, UIImageView, NSLayoutConstraint, UILabel, UIButton;

@interface WARestartDeviceHelperViewController : UIViewController {

	NSString* _explanation;
	UIView* _contentView;
	UIView* _phoneImageContainer;
	UIImageView* _imageViewPhone;
	UIImageView* _imageViewRestartArrow;
	NSLayoutConstraint* _topMarginConstraint;
	UILabel* _labelTitle;
	UILabel* _labelDescription;
	UILabel* _labelActionDescription;
	UIButton* _buttonClose;

}

@property (nonatomic,copy) NSString * explanation;                                  //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                  //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * phoneImageContainer;                          //@synthesize phoneImageContainer=_phoneImageContainer - In the implementation block
@property (nonatomic,retain) UIImageView * imageViewPhone;                          //@synthesize imageViewPhone=_imageViewPhone - In the implementation block
@property (nonatomic,retain) UIImageView * imageViewRestartArrow;                   //@synthesize imageViewRestartArrow=_imageViewRestartArrow - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topMarginConstraint;              //@synthesize topMarginConstraint=_topMarginConstraint - In the implementation block
@property (nonatomic,retain) UILabel * labelTitle;                                  //@synthesize labelTitle=_labelTitle - In the implementation block
@property (nonatomic,retain) UILabel * labelDescription;                            //@synthesize labelDescription=_labelDescription - In the implementation block
@property (nonatomic,retain) UILabel * labelActionDescription;                      //@synthesize labelActionDescription=_labelActionDescription - In the implementation block
@property (nonatomic,retain) UIButton * buttonClose;                                //@synthesize buttonClose=_buttonClose - In the implementation block
+(id)controllerWithTitle:(id)arg1 explanation:(id)arg2 ;
-(void)closeAction:(id)arg1 ;
-(UIButton *)buttonClose;
-(UILabel *)labelTitle;
-(void)setButtonClose:(UIButton *)arg1 ;
-(void)setLabelTitle:(UILabel *)arg1 ;
-(UILabel *)labelDescription;
-(UILabel *)labelActionDescription;
-(void)configureRestartImages;
-(UIImageView *)imageViewPhone;
-(UIImageView *)imageViewRestartArrow;
-(UIView *)phoneImageContainer;
-(void)setPhoneImageContainer:(UIView *)arg1 ;
-(void)setImageViewPhone:(UIImageView *)arg1 ;
-(void)setImageViewRestartArrow:(UIImageView *)arg1 ;
-(void)setLabelDescription:(UILabel *)arg1 ;
-(void)setLabelActionDescription:(UILabel *)arg1 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(void)setTopMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topMarginConstraint;
-(NSString *)explanation;
-(void)setExplanation:(NSString *)arg1 ;
@end
