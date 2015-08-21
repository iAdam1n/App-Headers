/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Twitter/T1CricketScoreCardDelegate.h>

@class UILabel, NSString;

@interface T1CricketCompletedScoreCardView : UIView <T1CricketScoreCardDelegate> {

	UILabel* _winnerLabel;
	UILabel* _leftScoreLabel;
	UILabel* _rightScoreLabel;

}

@property (nonatomic,retain) UILabel * winnerLabel;                  //@synthesize winnerLabel=_winnerLabel - In the implementation block
@property (nonatomic,retain) UILabel * leftScoreLabel;               //@synthesize leftScoreLabel=_leftScoreLabel - In the implementation block
@property (nonatomic,retain) UILabel * rightScoreLabel;              //@synthesize rightScoreLabel=_rightScoreLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cricketScoreCardView:(id)arg1 updateEvent:(id)arg2 ;
-(id)_createScoreLabelWithAlignement:(long long)arg1 ;
-(UILabel *)winnerLabel;
-(UILabel *)leftScoreLabel;
-(UILabel *)rightScoreLabel;
-(void)setWinnerLabel:(UILabel *)arg1 ;
-(void)setLeftScoreLabel:(UILabel *)arg1 ;
-(void)setRightScoreLabel:(UILabel *)arg1 ;
-(id)init;
-(void)layoutSubviews;
@end

