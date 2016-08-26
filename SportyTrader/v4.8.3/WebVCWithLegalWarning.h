/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/AbstractWebViewController.h>

@class UIView, UIToolbar, UILabel, UIButton;

@interface WebVCWithLegalWarning : AbstractWebViewController {

	UIView* warningView;
	UIToolbar* warningToolbar;
	UILabel* topWarningLabel;
	UILabel* middleWarningLabel;
	UILabel* bottonWarningLabel;
	UIButton* conditionsButton;
	UIButton* acceptButton;
	UILabel* urlLabel;
	BOOL shouldComeBackToWarning;

}

@property (nonatomic,retain) UIView * warningView; 
@property (nonatomic,retain) UIToolbar * warningToolbar; 
@property (nonatomic,retain) UILabel * topWarningLabel; 
@property (nonatomic,retain) UILabel * middleWarningLabel; 
@property (nonatomic,retain) UILabel * bottonWarningLabel; 
@property (nonatomic,retain) UIButton * conditionsButton; 
@property (nonatomic,retain) UIButton * acceptButton; 
@property (nonatomic,retain) UILabel * urlLabel; 
-(id)flurryTag;
-(UILabel *)topWarningLabel;
-(UILabel *)middleWarningLabel;
-(UILabel *)bottonWarningLabel;
-(UIButton *)conditionsButton;
-(UILabel *)urlLabel;
-(void)displayConditions:(id)arg1 ;
-(void)acceptConditions:(id)arg1 ;
-(UIView *)warningView;
-(void)setWarningView:(UIView *)arg1 ;
-(UIToolbar *)warningToolbar;
-(void)setWarningToolbar:(UIToolbar *)arg1 ;
-(void)setTopWarningLabel:(UILabel *)arg1 ;
-(void)setMiddleWarningLabel:(UILabel *)arg1 ;
-(void)setBottonWarningLabel:(UILabel *)arg1 ;
-(void)setConditionsButton:(UIButton *)arg1 ;
-(void)setUrlLabel:(UILabel *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)dismiss:(id)arg1 ;
-(UIButton *)acceptButton;
-(void)setAcceptButton:(UIButton *)arg1 ;
@end
