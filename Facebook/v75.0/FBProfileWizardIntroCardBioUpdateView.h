/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBProfileWizardView.h>

@protocol FBProfileWizardIntroCardBioUpdateViewDelegate;
@class UITextView, UIButton, UIView;

@interface FBProfileWizardIntroCardBioUpdateView : FBProfileWizardView {

	double _headerViewHeight;
	UITextView* _bioView;
	UIButton* _addIntroCardBioButton;
	UIView* _topLineView;
	BOOL _appearanceHasAnimated;
	id<FBProfileWizardIntroCardBioUpdateViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBProfileWizardIntroCardBioUpdateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithWizardModel:(id)arg1 wizardConfiguration:(id)arg2 currentStepIndex:(unsigned long long)arg3 person:(id)arg4 session:(id)arg5 scenePath:(id)arg6 analyticsUUID:(id)arg7 ;
-(void)animatingAppearance;
-(void)animatingDisppearance;
-(void)_didTapAddIntroCardBio;
-(void)_animatingContentViewAppearance;
-(double)_headerViewHeightWithWidth:(double)arg1 ;
-(void)_animatingTitleAndSubtitleViewDisappearance;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBProfileWizardIntroCardBioUpdateViewDelegate>)arg1 ;
-(id<FBProfileWizardIntroCardBioUpdateViewDelegate>)delegate;
@end
