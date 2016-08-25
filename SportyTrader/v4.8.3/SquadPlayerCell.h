/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, NSLayoutConstraint;

@interface SquadPlayerCell : UITableViewCell {

	UIImageView* _portraitImageView;
	UILabel* _playerNameLabel;
	UIImageView* _flagImageView;
	UILabel* _nationalityLabel;
	UIView* _maillotContainerView;
	UIImageView* _maillotImageView;
	UILabel* _numeroLabel;
	UIImageView* _arrowImageView;
	NSLayoutConstraint* _flagImageViewWidth;

}

@property (nonatomic,retain) NSLayoutConstraint * flagImageViewWidth;              //@synthesize flagImageViewWidth=_flagImageViewWidth - In the implementation block
@property (nonatomic,retain) UIImageView * portraitImageView;                      //@synthesize portraitImageView=_portraitImageView - In the implementation block
@property (nonatomic,retain) UILabel * playerNameLabel;                            //@synthesize playerNameLabel=_playerNameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * flagImageView;                          //@synthesize flagImageView=_flagImageView - In the implementation block
@property (nonatomic,retain) UILabel * nationalityLabel;                           //@synthesize nationalityLabel=_nationalityLabel - In the implementation block
@property (nonatomic,retain) UIView * maillotContainerView;                        //@synthesize maillotContainerView=_maillotContainerView - In the implementation block
@property (nonatomic,retain) UIImageView * maillotImageView;                       //@synthesize maillotImageView=_maillotImageView - In the implementation block
@property (nonatomic,retain) UILabel * numeroLabel;                                //@synthesize numeroLabel=_numeroLabel - In the implementation block
@property (nonatomic,retain) UIImageView * arrowImageView;                         //@synthesize arrowImageView=_arrowImageView - In the implementation block
-(UILabel *)playerNameLabel;
-(UIImageView *)portraitImageView;
-(void)setPortraitImageView:(UIImageView *)arg1 ;
-(void)setPlayerNameLabel:(UILabel *)arg1 ;
-(UIImageView *)maillotImageView;
-(UILabel *)numeroLabel;
-(void)setMaillotImageView:(UIImageView *)arg1 ;
-(void)setNumeroLabel:(UILabel *)arg1 ;
-(UIImageView *)flagImageView;
-(void)showFlagImage:(id)arg1 ;
-(NSLayoutConstraint *)flagImageViewWidth;
-(void)setPortraitImageWithParameters:(id)arg1 ;
-(void)setFlagImageWithParameters:(id)arg1 ;
-(void)setMaillotImageWithParameters:(id)arg1 ;
-(void)setFlagImageView:(UIImageView *)arg1 ;
-(UILabel *)nationalityLabel;
-(void)setNationalityLabel:(UILabel *)arg1 ;
-(UIView *)maillotContainerView;
-(void)setMaillotContainerView:(UIView *)arg1 ;
-(void)setFlagImageViewWidth:(NSLayoutConstraint *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)awakeFromNib;
-(UIImageView *)arrowImageView;
-(void)setArrowImageView:(UIImageView *)arg1 ;
@end

