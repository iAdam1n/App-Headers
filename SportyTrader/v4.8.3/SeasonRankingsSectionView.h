/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel;

@interface SeasonRankingsSectionView : UIView {

	UILabel* _pointsLabel;
	UILabel* _playedLabel;
	UILabel* _wonLabel;
	UILabel* _drawsLabel;
	UILabel* _lostLabel;
	UILabel* _goalsLabel;
	UILabel* _goalDifferenceLabel;

}

@property (nonatomic,retain) UILabel * pointsLabel;                      //@synthesize pointsLabel=_pointsLabel - In the implementation block
@property (nonatomic,retain) UILabel * playedLabel;                      //@synthesize playedLabel=_playedLabel - In the implementation block
@property (nonatomic,retain) UILabel * wonLabel;                         //@synthesize wonLabel=_wonLabel - In the implementation block
@property (nonatomic,retain) UILabel * drawsLabel;                       //@synthesize drawsLabel=_drawsLabel - In the implementation block
@property (nonatomic,retain) UILabel * lostLabel;                        //@synthesize lostLabel=_lostLabel - In the implementation block
@property (nonatomic,retain) UILabel * goalsLabel;                       //@synthesize goalsLabel=_goalsLabel - In the implementation block
@property (nonatomic,retain) UILabel * goalDifferenceLabel;              //@synthesize goalDifferenceLabel=_goalDifferenceLabel - In the implementation block
-(UILabel *)drawsLabel;
-(UILabel *)pointsLabel;
-(UILabel *)playedLabel;
-(void)setPointsLabel:(UILabel *)arg1 ;
-(void)setPlayedLabel:(UILabel *)arg1 ;
-(void)setDrawsLabel:(UILabel *)arg1 ;
-(UILabel *)wonLabel;
-(void)setWonLabel:(UILabel *)arg1 ;
-(UILabel *)lostLabel;
-(void)setLostLabel:(UILabel *)arg1 ;
-(UILabel *)goalsLabel;
-(void)setGoalsLabel:(UILabel *)arg1 ;
-(UILabel *)goalDifferenceLabel;
-(void)setGoalDifferenceLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
@end

