/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:20 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FavoriteButton, UILabel, UIImageView, NSLayoutConstraint;

@interface ResultatsMatchsTennisCell : UITableViewCell {

	FavoriteButton* favoriteButton;
	UILabel* hourLabel;
	UILabel* stateLabel;
	UILabel* joueur1Label;
	UILabel* joueur2Label;
	UIImageView* service1ImageView;
	UIImageView* service2ImageView;
	UILabel* score1Label;
	UILabel* score2Label;
	UIImageView* videoImageView;
	NSLayoutConstraint* _stateLabelHeightConstraint;
	NSLayoutConstraint* _videoImageViewWidthConstraint;

}

@property (nonatomic,retain) FavoriteButton * favoriteButton; 
@property (nonatomic,retain) UILabel * hourLabel; 
@property (nonatomic,retain) UILabel * stateLabel; 
@property (nonatomic,retain) UILabel * joueur1Label; 
@property (nonatomic,retain) UILabel * joueur2Label; 
@property (nonatomic,retain) UIImageView * service1ImageView; 
@property (nonatomic,retain) UIImageView * service2ImageView; 
@property (nonatomic,retain) UILabel * score1Label; 
@property (nonatomic,retain) UILabel * score2Label; 
@property (nonatomic,retain) UIImageView * videoImageView; 
@property (nonatomic,retain) NSLayoutConstraint * stateLabelHeightConstraint;                 //@synthesize stateLabelHeightConstraint=_stateLabelHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoImageViewWidthConstraint;              //@synthesize videoImageViewWidthConstraint=_videoImageViewWidthConstraint - In the implementation block
-(UILabel *)stateLabel;
-(void)setStateLabel:(UILabel *)arg1 ;
-(UILabel *)score1Label;
-(void)setScore1Label:(UILabel *)arg1 ;
-(UILabel *)score2Label;
-(void)setScore2Label:(UILabel *)arg1 ;
-(NSLayoutConstraint *)videoImageViewWidthConstraint;
-(void)updateLayoutWithVideoLogo:(BOOL)arg1 ;
-(FavoriteButton *)favoriteButton;
-(void)setFavoriteButton:(FavoriteButton *)arg1 ;
-(UILabel *)hourLabel;
-(void)setHourLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)stateLabelHeightConstraint;
-(void)setStateLabelHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setVideoImageViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)joueur1Label;
-(void)setJoueur1Label:(UILabel *)arg1 ;
-(UILabel *)joueur2Label;
-(void)setJoueur2Label:(UILabel *)arg1 ;
-(UIImageView *)service1ImageView;
-(void)setService1ImageView:(UIImageView *)arg1 ;
-(UIImageView *)service2ImageView;
-(void)setService2ImageView:(UIImageView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)videoImageView;
-(void)setVideoImageView:(UIImageView *)arg1 ;
@end

