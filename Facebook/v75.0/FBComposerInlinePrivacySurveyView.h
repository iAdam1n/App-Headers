/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBComposerInlinePrivacySurveyViewDelegate;
@class FBRichTextView, UIButton, NSArray, NSString, FBComposerPrivacySetting;

@interface FBComposerInlinePrivacySurveyView : UIView {

	FBRichTextView* _titleLabel;
	FBRichTextView* _callToActionLabel;
	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	UIButton* _moreOptionsButton;
	UIButton* _skipButton;
	UIButton* _confirmationButton;
	BOOL _isShowingConfirmationView;
	NSArray* _textLabels;
	NSArray* _surveyViewButtons;
	NSArray* _confirmationViewButtons;
	id<FBComposerInlinePrivacySurveyViewDelegate> _delegate;
	NSString* _titleText;
	NSString* _callToActionText;
	FBComposerPrivacySetting* _primaryOptionPrivacySetting;
	FBComposerPrivacySetting* _secondaryOptionPrivacySetting;

}

@property (assign,nonatomic,__weak) id<FBComposerInlinePrivacySurveyViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                         //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * callToActionText;                                                  //@synthesize callToActionText=_callToActionText - In the implementation block
@property (nonatomic,copy) FBComposerPrivacySetting * primaryOptionPrivacySetting;                       //@synthesize primaryOptionPrivacySetting=_primaryOptionPrivacySetting - In the implementation block
@property (nonatomic,copy) FBComposerPrivacySetting * secondaryOptionPrivacySetting;                     //@synthesize secondaryOptionPrivacySetting=_secondaryOptionPrivacySetting - In the implementation block
-(NSString *)callToActionText;
-(void)showConfirmationView;
-(void)setCallToActionText:(NSString *)arg1 ;
-(void)setPrimaryOptionPrivacySetting:(FBComposerPrivacySetting *)arg1 ;
-(void)setSecondaryOptionPrivacySetting:(FBComposerPrivacySetting *)arg1 ;
-(FBComposerPrivacySetting *)primaryOptionPrivacySetting;
-(CGSize)sizeThatFits:(CGSize)arg1 forConfirmationView:(BOOL)arg2 ;
-(void)_userDidTapActionButton:(id)arg1 ;
-(CGSize)_sizeForLabel:(id)arg1 maxSize:(CGSize)arg2 ;
-(CGSize)_sizeForButton:(id)arg1 maxSize:(CGSize)arg2 ;
-(void)_formatLabel:(id)arg1 verticalOffset:(double)arg2 ;
-(void)_formatButton:(id)arg1 verticalOffset:(double)arg2 ;
-(FBComposerPrivacySetting *)secondaryOptionPrivacySetting;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBComposerInlinePrivacySurveyViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBComposerInlinePrivacySurveyViewDelegate>)delegate;
-(BOOL)accessibilityViewIsModal;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(id)_createActionButton;
@end

