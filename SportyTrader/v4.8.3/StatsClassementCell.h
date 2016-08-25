/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface StatsClassementCell : UITableViewCell {

	UILabel* _rankLabel;
	UIImageView* _evolutionImageView;
	UILabel* _teamLabel;
	UILabel* _pointsLabel;
	UILabel* _playedLabel;
	UILabel* _winsLabel;
	UILabel* _drawsLabel;
	UILabel* _lossesLabel;
	UILabel* _differenceLabel;

}

@property (nonatomic,retain) UILabel * rankLabel;                           //@synthesize rankLabel=_rankLabel - In the implementation block
@property (nonatomic,retain) UIImageView * evolutionImageView;              //@synthesize evolutionImageView=_evolutionImageView - In the implementation block
@property (nonatomic,retain) UILabel * teamLabel;                           //@synthesize teamLabel=_teamLabel - In the implementation block
@property (nonatomic,retain) UILabel * pointsLabel;                         //@synthesize pointsLabel=_pointsLabel - In the implementation block
@property (nonatomic,retain) UILabel * playedLabel;                         //@synthesize playedLabel=_playedLabel - In the implementation block
@property (nonatomic,retain) UILabel * winsLabel;                           //@synthesize winsLabel=_winsLabel - In the implementation block
@property (nonatomic,retain) UILabel * drawsLabel;                          //@synthesize drawsLabel=_drawsLabel - In the implementation block
@property (nonatomic,retain) UILabel * lossesLabel;                         //@synthesize lossesLabel=_lossesLabel - In the implementation block
@property (nonatomic,retain) UILabel * differenceLabel;                     //@synthesize differenceLabel=_differenceLabel - In the implementation block
-(UILabel *)drawsLabel;
-(UILabel *)pointsLabel;
-(UILabel *)teamLabel;
-(UILabel *)rankLabel;
-(UILabel *)playedLabel;
-(UILabel *)winsLabel;
-(UILabel *)lossesLabel;
-(UILabel *)differenceLabel;
-(void)setRankLabel:(UILabel *)arg1 ;
-(UIImageView *)evolutionImageView;
-(void)setEvolutionImageView:(UIImageView *)arg1 ;
-(void)setTeamLabel:(UILabel *)arg1 ;
-(void)setPointsLabel:(UILabel *)arg1 ;
-(void)setPlayedLabel:(UILabel *)arg1 ;
-(void)setWinsLabel:(UILabel *)arg1 ;
-(void)setDrawsLabel:(UILabel *)arg1 ;
-(void)setLossesLabel:(UILabel *)arg1 ;
-(void)setDifferenceLabel:(UILabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)awakeFromNib;
@end

