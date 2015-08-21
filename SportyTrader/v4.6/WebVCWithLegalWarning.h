/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:22 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)dismiss:(id)arg1 ;
-(UIButton *)acceptButton;
-(void)setAcceptButton:(UIButton *)arg1 ;
@end

