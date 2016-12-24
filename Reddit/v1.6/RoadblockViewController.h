/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/BaseViewController.h>
#import <Reddit/PopupViewControllerProtocol.h>

@class UIImageView, UILabel, UIButton, CALayer, NSString;

@interface RoadblockViewController : BaseViewController <PopupViewControllerProtocol> {

	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _textLabel;
	UIButton* _closeButton;
	UIButton* _doneButton;
	CALayer* _lineLayer;

}

@property (nonatomic,retain) UIImageView * iconImageView;                //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                        //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                     //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                      //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) CALayer * lineLayer;                        //@synthesize lineLayer=_lineLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredPopupHeight; 
-(void)configureViewAppearance;
-(double)preferredPopupHeight;
-(void)configureWithTitle:(id)arg1 icon:(id)arg2 text:(id)arg3 ;
-(void)didTapDone:(id)arg1 ;
-(void)setLineLayer:(CALayer *)arg1 ;
-(void)viewWillLayoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)textLabel;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(void)setTextLabel:(UILabel *)arg1 ;
-(CALayer *)lineLayer;
-(UIButton *)closeButton;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
@end
