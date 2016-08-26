/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/MKALView.h>

@protocol SKPPresentationFlowViewDelegate;
@class MKDefaultButton, UILabel, UIView, MKButton;

@interface SKPPresentationFlowView : MKALView {

	BOOL _shouldHaveIconicOKButton;
	id<SKPPresentationFlowViewDelegate> _delegate;
	MKDefaultButton* _closeButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _contentView;
	MKButton* _okButton;
	MKButton* _notNowButton;
	long long _backgroundStyle;
	long long _dismissMode;

}

@property (nonatomic,retain) MKDefaultButton * closeButton;                                    //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) MKButton * okButton;                                              //@synthesize okButton=_okButton - In the implementation block
@property (nonatomic,retain) MKButton * notNowButton;                                          //@synthesize notNowButton=_notNowButton - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                        //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) long long dismissMode;                                            //@synthesize dismissMode=_dismissMode - In the implementation block
@property (assign,nonatomic) BOOL shouldHaveIconicOKButton;                                    //@synthesize shouldHaveIconicOKButton=_shouldHaveIconicOKButton - In the implementation block
@property (assign,nonatomic,__weak) id<SKPPresentationFlowViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)viewConstraints;
-(id)initWithBackgroundStyle:(long long)arg1 dismissMode:(long long)arg2 iconicOKButton:(BOOL)arg3 ;
-(void)setNotNowButton:(MKButton *)arg1 ;
-(MKButton *)notNowButton;
-(long long)dismissMode;
-(BOOL)shouldHaveIconicOKButton;
-(void)addConstraintsForCloseButtonAtTopLeft;
-(void)addConstraintsForTitleAtTopCenter;
-(void)addConstraintsForExplanationBelowTitle;
-(void)addConstraintsForContentViewInCenter;
-(void)addConstraintsForOkButtonAtBottom;
-(void)addConstraintsForNotNowButtonAtBottom;
-(void)setDismissMode:(long long)arg1 ;
-(void)setShouldHaveIconicOKButton:(BOOL)arg1 ;
-(void)setDelegate:(id<SKPPresentationFlowViewDelegate>)arg1 ;
-(id<SKPPresentationFlowViewDelegate>)delegate;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(MKButton *)okButton;
-(void)setOkButton:(MKButton *)arg1 ;
-(MKDefaultButton *)closeButton;
-(void)setCloseButton:(MKDefaultButton *)arg1 ;
-(id)stylesheet;
@end
