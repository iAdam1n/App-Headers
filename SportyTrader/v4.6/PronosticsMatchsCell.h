/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:21 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FavoriteButton, UILabel, UIImageView, NSLayoutConstraint;

@interface PronosticsMatchsCell : UITableViewCell {

	FavoriteButton* favoriteButton;
	UILabel* dateLabel;
	UILabel* timeLabel;
	UILabel* equipe1Label;
	UILabel* equipe2Label;
	UIImageView* prono1ImageView;
	UIImageView* prono2ImageView;
	NSLayoutConstraint* _prono2ImageViewHeightConstraint;

}

@property (nonatomic,retain) FavoriteButton * favoriteButton; 
@property (nonatomic,retain) UILabel * dateLabel; 
@property (nonatomic,retain) UILabel * timeLabel; 
@property (nonatomic,retain) UILabel * equipe1Label; 
@property (nonatomic,retain) UILabel * equipe2Label; 
@property (nonatomic,retain) UIImageView * prono1ImageView; 
@property (nonatomic,retain) UIImageView * prono2ImageView; 
@property (nonatomic,retain) NSLayoutConstraint * prono2ImageViewHeightConstraint;              //@synthesize prono2ImageViewHeightConstraint=_prono2ImageViewHeightConstraint - In the implementation block
-(FavoriteButton *)favoriteButton;
-(void)setFavoriteButton:(FavoriteButton *)arg1 ;
-(UILabel *)equipe1Label;
-(UILabel *)equipe2Label;
-(UIImageView *)prono1ImageView;
-(UIImageView *)prono2ImageView;
-(NSLayoutConstraint *)prono2ImageViewHeightConstraint;
-(void)setEquipe1Label:(UILabel *)arg1 ;
-(void)setEquipe2Label:(UILabel *)arg1 ;
-(void)setProno1ImageView:(UIImageView *)arg1 ;
-(void)setProno2ImageView:(UIImageView *)arg1 ;
-(void)setProno2ImageViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDateLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)dateLabel;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
@end
