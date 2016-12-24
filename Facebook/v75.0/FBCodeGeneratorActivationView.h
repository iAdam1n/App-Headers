/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBCodeGeneratorActivationViewDelegate;
@class UIButton, UIImageView, UILabel, UIActivityIndicatorView, UIView;

@interface FBCodeGeneratorActivationView : UIView {

	UIButton* _activateButton;
	UIImageView* _instructionsImageView;
	UILabel* _instructionsLabel;
	UIActivityIndicatorView* _activityIndicator;
	UIView* _spacerView1;
	UIView* _spacerView2;
	BOOL _haveConstraints;
	id<FBCodeGeneratorActivationViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCodeGeneratorActivationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_tappedActivate;
-(void)setActivating:(BOOL)arg1 ;
-(void)_updatePadConstraints;
-(void)_updatePhoneConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBCodeGeneratorActivationViewDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCodeGeneratorActivationViewDelegate>)delegate;
-(void)updateConstraints;
@end
