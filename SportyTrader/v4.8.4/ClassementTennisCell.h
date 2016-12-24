/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FavoriteButton, UILabel, UIImageView;

@interface ClassementTennisCell : UITableViewCell {

	FavoriteButton* favoriteButton;
	UILabel* positionLabel;
	UILabel* nomLabel;
	UILabel* pointsLabel;
	UIImageView* progressionImageView;
	UILabel* progressionLabel;

}

@property (nonatomic,retain) FavoriteButton * favoriteButton; 
@property (nonatomic,retain) UILabel * positionLabel; 
@property (nonatomic,retain) UILabel * nomLabel; 
@property (nonatomic,retain) UILabel * pointsLabel; 
@property (nonatomic,retain) UIImageView * progressionImageView; 
@property (nonatomic,retain) UILabel * progressionLabel; 
-(FavoriteButton *)favoriteButton;
-(void)setFavoriteButton:(FavoriteButton *)arg1 ;
-(UILabel *)pointsLabel;
-(void)setPointsLabel:(UILabel *)arg1 ;
-(UILabel *)nomLabel;
-(void)setNomLabel:(UILabel *)arg1 ;
-(UILabel *)positionLabel;
-(UIImageView *)progressionImageView;
-(UILabel *)progressionLabel;
-(void)setProgressionLabel:(UILabel *)arg1 ;
-(void)setPositionLabel:(UILabel *)arg1 ;
-(void)setProgressionImageView:(UIImageView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
