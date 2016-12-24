/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBProfilePicturePickerInterstitialViewDelegate;
@class UIButton, UIView, UIImageView, UILabel;

@interface FBProfilePicturePickerInterstitialView : UIView {

	UIButton* _takePhotosButton;
	UIButton* _choosePhotosButton;
	UIView* _upsellImageView;
	UIImageView* _buttonPanelView;
	UILabel* _titleLabel;
	id<FBProfilePicturePickerInterstitialViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBProfilePicturePickerInterstitialViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 session:(id)arg3 ;
-(void)didTouchTakePhotosButton:(id)arg1 ;
-(void)didTouchChoosePhotosButton:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBProfilePicturePickerInterstitialViewDelegate>)arg1 ;
-(id<FBProfilePicturePickerInterstitialViewDelegate>)delegate;
@end
