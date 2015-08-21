/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Twitter/T1CricketScoreCardDelegate.h>

@class UILabel, NSString;

@interface T1CricketInProgressScoreCardView : UIView <T1CricketScoreCardDelegate> {

	UILabel* _leftTeamLabel;
	UILabel* _leftMajorScoreLabel;
	UILabel* _leftMinorScoreLabel;
	UILabel* _rightTeamLabel;
	UILabel* _rightMajorScoreLabel;
	UILabel* _rightMinorScoreLabel;

}

@property (nonatomic,retain) UILabel * leftTeamLabel;                     //@synthesize leftTeamLabel=_leftTeamLabel - In the implementation block
@property (nonatomic,retain) UILabel * leftMajorScoreLabel;               //@synthesize leftMajorScoreLabel=_leftMajorScoreLabel - In the implementation block
@property (nonatomic,retain) UILabel * leftMinorScoreLabel;               //@synthesize leftMinorScoreLabel=_leftMinorScoreLabel - In the implementation block
@property (nonatomic,retain) UILabel * rightTeamLabel;                    //@synthesize rightTeamLabel=_rightTeamLabel - In the implementation block
@property (nonatomic,retain) UILabel * rightMajorScoreLabel;              //@synthesize rightMajorScoreLabel=_rightMajorScoreLabel - In the implementation block
@property (nonatomic,retain) UILabel * rightMinorScoreLabel;              //@synthesize rightMinorScoreLabel=_rightMinorScoreLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)leftTeamLabel;
-(UILabel *)leftMajorScoreLabel;
-(UILabel *)leftMinorScoreLabel;
-(UILabel *)rightTeamLabel;
-(UILabel *)rightMajorScoreLabel;
-(UILabel *)rightMinorScoreLabel;
-(void)cricketScoreCardView:(id)arg1 updateEvent:(id)arg2 ;
-(void)setLeftTeamLabel:(UILabel *)arg1 ;
-(void)setLeftMajorScoreLabel:(UILabel *)arg1 ;
-(void)setLeftMinorScoreLabel:(UILabel *)arg1 ;
-(void)setRightTeamLabel:(UILabel *)arg1 ;
-(void)setRightMajorScoreLabel:(UILabel *)arg1 ;
-(void)setRightMinorScoreLabel:(UILabel *)arg1 ;
-(id)init;
-(void)layoutSubviews;
@end

