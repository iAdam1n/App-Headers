/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:21 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface ScorerCell : UITableViewCell {

	UILabel* orderLabel;
	UILabel* scorerNameLabel;
	UILabel* teamNameLabel;
	UILabel* scoresNumberLabel;

}

@property (nonatomic,retain) UILabel * orderLabel; 
@property (nonatomic,retain) UILabel * scorerNameLabel; 
@property (nonatomic,retain) UILabel * teamNameLabel; 
@property (nonatomic,retain) UILabel * scoresNumberLabel; 
-(UILabel *)orderLabel;
-(void)setOrderLabel:(UILabel *)arg1 ;
-(UILabel *)scorerNameLabel;
-(void)setScorerNameLabel:(UILabel *)arg1 ;
-(UILabel *)teamNameLabel;
-(void)setTeamNameLabel:(UILabel *)arg1 ;
-(UILabel *)scoresNumberLabel;
-(void)setScoresNumberLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

