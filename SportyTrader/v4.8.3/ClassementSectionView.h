/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@class FavoriteButton, UIImageView, UILabel;

@interface ClassementSectionView : UIView {

	FavoriteButton* favoriteButton;
	UIImageView* logoImageView;
	UILabel* championnatLabel;
	UILabel* pointsLabel;
	UILabel* playedLabel;
	UILabel* winsLabel;
	UILabel* lossesLabel;
	UILabel* differenceLabel;

}

@property (nonatomic,retain) FavoriteButton * favoriteButton; 
@property (nonatomic,retain) UIImageView * logoImageView; 
@property (nonatomic,retain) UILabel * championnatLabel; 
@property (nonatomic,retain) UILabel * pointsLabel; 
@property (nonatomic,retain) UILabel * playedLabel; 
@property (nonatomic,retain) UILabel * winsLabel; 
@property (nonatomic,retain) UILabel * lossesLabel; 
@property (nonatomic,retain) UILabel * differenceLabel; 
-(FavoriteButton *)favoriteButton;
-(void)setFavoriteButton:(FavoriteButton *)arg1 ;
-(UILabel *)pointsLabel;
-(UILabel *)playedLabel;
-(UILabel *)winsLabel;
-(UILabel *)lossesLabel;
-(UILabel *)differenceLabel;
-(void)setPaysLogo:(id)arg1 forSport:(int)arg2 ;
-(UILabel *)championnatLabel;
-(void)setPointsLabel:(UILabel *)arg1 ;
-(void)setPlayedLabel:(UILabel *)arg1 ;
-(void)setWinsLabel:(UILabel *)arg1 ;
-(void)setLossesLabel:(UILabel *)arg1 ;
-(void)setDifferenceLabel:(UILabel *)arg1 ;
-(UIImageView *)logoImageView;
-(void)setLogoImageView:(UIImageView *)arg1 ;
-(void)setChampionnatLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
@end
