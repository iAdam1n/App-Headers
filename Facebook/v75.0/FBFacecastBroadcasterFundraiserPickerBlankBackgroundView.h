/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBFacecastBroadcasterFundraiserPickerBlankBackgroundViewDelegate;
@class UIImageView, UILabel, UIButton;

@interface FBFacecastBroadcasterFundraiserPickerBlankBackgroundView : UIView {

	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UIButton* _createFundraiserButton;
	id<FBFacecastBroadcasterFundraiserPickerBlankBackgroundViewDelegate> _delegate;

}
-(void)_didTapCreateFundraiserButton:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end
