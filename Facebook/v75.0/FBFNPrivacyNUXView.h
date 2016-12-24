/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, FBRichTextView, FBFNNUXShareWithButton;

@interface FBFNPrivacyNUXView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _privacyInfoView;
	FBRichTextView* _descriptionTextView;
	FBFNNUXShareWithButton* _shareWithButton;

}

@property (nonatomic,readonly) FBFNNUXShareWithButton * shareWithButton;              //@synthesize shareWithButton=_shareWithButton - In the implementation block
@property (nonatomic,readonly) FBRichTextView * descriptionTextView;                  //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
-(FBRichTextView *)descriptionTextView;
-(void)_configureAppearance:(id)arg1 ;
-(FBFNNUXShareWithButton *)shareWithButton;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithAppearance:(id)arg1 ;
@end
