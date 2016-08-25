/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, CompoJoueurButton;

@interface CompoJoueurView : UIView {

	UIImageView* maillotImageView;
	UIImageView* flecheImageView;
	UIImageView* cartonImageView;
	UILabel* numeroLabel;
	UILabel* nomLabel;
	CompoJoueurButton* _button;

}

@property (nonatomic,retain) UIImageView * maillotImageView; 
@property (nonatomic,retain) UIImageView * flecheImageView; 
@property (nonatomic,retain) UIImageView * cartonImageView; 
@property (nonatomic,retain) UILabel * numeroLabel; 
@property (nonatomic,retain) UILabel * nomLabel; 
@property (nonatomic,retain) CompoJoueurButton * button;                  //@synthesize button=_button - In the implementation block
-(UIImageView *)maillotImageView;
-(UILabel *)nomLabel;
-(UILabel *)numeroLabel;
-(UIImageView *)flecheImageView;
-(UIImageView *)cartonImageView;
-(void)setMaillotImageView:(UIImageView *)arg1 ;
-(void)setFlecheImageView:(UIImageView *)arg1 ;
-(void)setCartonImageView:(UIImageView *)arg1 ;
-(void)setNumeroLabel:(UILabel *)arg1 ;
-(void)setNomLabel:(UILabel *)arg1 ;
-(CompoJoueurButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setButton:(CompoJoueurButton *)arg1 ;
@end

