/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:22 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FavoriteButton, UIImageView, UILabel;

@interface ResultatsCompetitionsTennisCell : UITableViewCell {

	FavoriteButton* favoriteButton;
	UIImageView* championnatImageView;
	UILabel* nomChampionnatLabel;
	UILabel* nbMatchsLabel;
	UILabel* nbMatchsLiveLabel;

}

@property (nonatomic,retain) FavoriteButton * favoriteButton; 
@property (nonatomic,retain) UIImageView * championnatImageView; 
@property (nonatomic,retain) UILabel * nomChampionnatLabel; 
@property (nonatomic,retain) UILabel * nbMatchsLabel; 
@property (nonatomic,retain) UILabel * nbMatchsLiveLabel; 
-(FavoriteButton *)favoriteButton;
-(void)setFavoriteButton:(FavoriteButton *)arg1 ;
-(UILabel *)nbMatchsLiveLabel;
-(void)setPaysLogo:(id)arg1 forSport:(int)arg2 ;
-(UIImageView *)championnatImageView;
-(void)setChampionnatImageView:(UIImageView *)arg1 ;
-(UILabel *)nomChampionnatLabel;
-(void)setNomChampionnatLabel:(UILabel *)arg1 ;
-(UILabel *)nbMatchsLabel;
-(void)setNbMatchsLabel:(UILabel *)arg1 ;
-(void)setNbMatchsLiveLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

