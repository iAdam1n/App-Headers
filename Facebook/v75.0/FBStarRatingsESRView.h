/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UIView, UINavigationBar, UIImageView, UILabel, UIButton;

@interface FBStarRatingsESRView : UIImageView {

	UIView* _containerView;
	UINavigationBar* _navigationBar;
	UIImageView* _imageView;
	UILabel* _messageLabel;
	UIView* _longDividerBottom;
	UIButton* _cancelButton;
	UIView* _verticalDividerBetweenButtons;
	UIView* _horizontalDividerTop;
	UIView* _horizontalDividerBottom;
	double _margin;
	double _imageWidth;
	double _imageHeight;
	double _dividerHeight;
	double _buttonHeight;
	double _navigationBarHeight;
	UIButton* _okButton;

}

@property (nonatomic,retain) UIButton * okButton;                  //@synthesize okButton=_okButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
-(void)initializeLayoutParameters;
-(void)windowDidBecomeKey:(id)arg1 ;
-(void)windowDidResignKey:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)animateIn;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)cancelButton;
-(UIButton *)okButton;
-(void)setOkButton:(UIButton *)arg1 ;
@end
