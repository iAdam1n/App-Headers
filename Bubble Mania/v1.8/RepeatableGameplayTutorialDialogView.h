/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/TutorialDialogView.h>
#import <BubbleMania/S8ScalingViewDelegate.h>
#import <BubbleMania/DialogDelegate.h>

@class UIView, UILabel, S8Label, S8ImageView, S8SlicedImageView, UIButton, S8Button, NSString;

@interface RepeatableGameplayTutorialDialogView : TutorialDialogView <S8ScalingViewDelegate, DialogDelegate> {

	UIView* _mainView;
	UIView* _labelView;
	UIView* _buttonView;
	UIView* _imageViewView;
	UIView* _buttonImageViewView;
	UIView* _nameChangeView;
	UIView* _below25View;
	UILabel* _text1;
	UILabel* _text2;
	UILabel* _text3;
	UILabel* _text4;
	UILabel* _text5;
	UILabel* _text6;
	S8Label* _crounCountLabel;
	UIView* _crownImageView;
	S8Label* _gemCostLabel;
	S8ImageView* _imageViewImage;
	S8ImageView* _imageViewAndButtonImage;
	S8SlicedImageView* _inGameImage;
	UIButton* _awesomeButton;
	UIButton* _changeButton;
	UIView* _changeButtonView;
	S8Button* _closeButton;

}

@property (nonatomic,retain) UIView * mainView;                                  //@synthesize mainView=_mainView - In the implementation block
@property (nonatomic,retain) UIView * labelView;                                 //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,retain) UIView * buttonView;                                //@synthesize buttonView=_buttonView - In the implementation block
@property (nonatomic,retain) UIView * imageViewView;                             //@synthesize imageViewView=_imageViewView - In the implementation block
@property (nonatomic,retain) UIView * buttonImageViewView;                       //@synthesize buttonImageViewView=_buttonImageViewView - In the implementation block
@property (nonatomic,retain) UIView * nameChangeView;                            //@synthesize nameChangeView=_nameChangeView - In the implementation block
@property (nonatomic,retain) UIView * below25View;                               //@synthesize below25View=_below25View - In the implementation block
@property (nonatomic,retain) UILabel * text1;                                    //@synthesize text1=_text1 - In the implementation block
@property (nonatomic,retain) UILabel * text2;                                    //@synthesize text2=_text2 - In the implementation block
@property (nonatomic,retain) UILabel * text3;                                    //@synthesize text3=_text3 - In the implementation block
@property (nonatomic,retain) UILabel * text4;                                    //@synthesize text4=_text4 - In the implementation block
@property (nonatomic,retain) UILabel * text5;                                    //@synthesize text5=_text5 - In the implementation block
@property (nonatomic,retain) UILabel * text6;                                    //@synthesize text6=_text6 - In the implementation block
@property (nonatomic,retain) S8Label * crounCountLabel;                          //@synthesize crounCountLabel=_crounCountLabel - In the implementation block
@property (nonatomic,retain) UIView * crownImageView;                            //@synthesize crownImageView=_crownImageView - In the implementation block
@property (nonatomic,retain) S8Label * gemCostLabel;                             //@synthesize gemCostLabel=_gemCostLabel - In the implementation block
@property (nonatomic,retain) S8ImageView * imageViewImage;                       //@synthesize imageViewImage=_imageViewImage - In the implementation block
@property (nonatomic,retain) S8ImageView * imageViewAndButtonImage;              //@synthesize imageViewAndButtonImage=_imageViewAndButtonImage - In the implementation block
@property (nonatomic,retain) S8SlicedImageView * inGameImage;                    //@synthesize inGameImage=_inGameImage - In the implementation block
@property (nonatomic,retain) UIButton * awesomeButton;                           //@synthesize awesomeButton=_awesomeButton - In the implementation block
@property (nonatomic,retain) UIButton * changeButton;                            //@synthesize changeButton=_changeButton - In the implementation block
@property (nonatomic,retain) UIView * changeButtonView;                          //@synthesize changeButtonView=_changeButtonView - In the implementation block
@property (nonatomic,retain) S8Button * closeButton;                             //@synthesize closeButton=_closeButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupBelowLevel25;
-(void)dialogDidClose:(id)arg1 ;
-(void)dialogWasAccepted:(id)arg1 ;
-(UIView *)mainView;
-(void)setMainView:(UIView *)arg1 ;
-(UIView *)imageViewView;
-(UIView *)buttonImageViewView;
-(UIView *)nameChangeView;
-(UIView *)below25View;
-(UIView *)crownImageView;
-(UILabel *)text6;
-(S8SlicedImageView *)inGameImage;
-(UILabel *)text5;
-(S8Label *)gemCostLabel;
-(UILabel *)text2;
-(UILabel *)text1;
-(UILabel *)text4;
-(S8ImageView *)imageViewAndButtonImage;
-(UILabel *)text3;
-(S8ImageView *)imageViewImage;
-(void)startCrownFlyingAnimation;
-(S8Label *)crounCountLabel;
-(UIButton *)awesomeButton;
-(UIView *)changeButtonView;
-(UIButton *)changeButton;
-(void)dialogClosed;
-(void)changeButtonPressed;
-(void)setupWithNumberOfGems:(long long)arg1 ;
-(void)setupWithTutorialStep:(id)arg1 ;
-(void)setImageViewView:(UIView *)arg1 ;
-(void)setButtonImageViewView:(UIView *)arg1 ;
-(void)setNameChangeView:(UIView *)arg1 ;
-(void)setBelow25View:(UIView *)arg1 ;
-(void)setText1:(UILabel *)arg1 ;
-(void)setText2:(UILabel *)arg1 ;
-(void)setText3:(UILabel *)arg1 ;
-(void)setText4:(UILabel *)arg1 ;
-(void)setText5:(UILabel *)arg1 ;
-(void)setText6:(UILabel *)arg1 ;
-(void)setCrounCountLabel:(S8Label *)arg1 ;
-(void)setCrownImageView:(UIView *)arg1 ;
-(void)setGemCostLabel:(S8Label *)arg1 ;
-(void)setImageViewImage:(S8ImageView *)arg1 ;
-(void)setImageViewAndButtonImage:(S8ImageView *)arg1 ;
-(void)setInGameImage:(S8SlicedImageView *)arg1 ;
-(void)setAwesomeButton:(UIButton *)arg1 ;
-(void)setChangeButton:(UIButton *)arg1 ;
-(void)setChangeButtonView:(UIView *)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(UIView *)buttonView;
-(void)setButtonView:(UIView *)arg1 ;
-(S8Button *)closeButton;
-(UIView *)labelView;
-(void)setCloseButton:(S8Button *)arg1 ;
-(void)setLabelView:(UIView *)arg1 ;
@end

