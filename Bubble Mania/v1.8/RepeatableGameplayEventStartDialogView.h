/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/XibDialogView.h>

@class S8Label, S8ImageView, NSTimer, UIView, S8Button;

@interface RepeatableGameplayEventStartDialogView : XibDialogView {

	int _motdId;
	int _tutorialId;
	int _progressBonusForReplayEvent;
	S8Label* _week1TitleLabel;
	S8Label* _week2TitleLabel;
	S8Label* _daysLeftLabel;
	S8Label* _upperTextLabelWeek1;
	S8Label* _upperTextLabelWeek2;
	S8Label* _lowerTextLabel;
	S8ImageView* _rewardsImageView;
	NSTimer* _timer;
	UIView* _week1View;
	UIView* _week2View;
	S8Button* _startButton;
	S8ImageView* _bannerImageView;

}

@property (nonatomic,retain) S8Label * week1TitleLabel;                    //@synthesize week1TitleLabel=_week1TitleLabel - In the implementation block
@property (nonatomic,retain) S8Label * week2TitleLabel;                    //@synthesize week2TitleLabel=_week2TitleLabel - In the implementation block
@property (nonatomic,retain) S8Label * daysLeftLabel;                      //@synthesize daysLeftLabel=_daysLeftLabel - In the implementation block
@property (nonatomic,retain) S8Label * upperTextLabelWeek1;                //@synthesize upperTextLabelWeek1=_upperTextLabelWeek1 - In the implementation block
@property (nonatomic,retain) S8Label * upperTextLabelWeek2;                //@synthesize upperTextLabelWeek2=_upperTextLabelWeek2 - In the implementation block
@property (nonatomic,retain) S8Label * lowerTextLabel;                     //@synthesize lowerTextLabel=_lowerTextLabel - In the implementation block
@property (nonatomic,retain) S8ImageView * rewardsImageView;               //@synthesize rewardsImageView=_rewardsImageView - In the implementation block
@property (assign,nonatomic) int motdId;                                   //@synthesize motdId=_motdId - In the implementation block
@property (assign,nonatomic) int tutorialId;                               //@synthesize tutorialId=_tutorialId - In the implementation block
@property (assign,nonatomic) int progressBonusForReplayEvent;              //@synthesize progressBonusForReplayEvent=_progressBonusForReplayEvent - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                              //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) UIView * week1View;                           //@synthesize week1View=_week1View - In the implementation block
@property (nonatomic,retain) UIView * week2View;                           //@synthesize week2View=_week2View - In the implementation block
@property (nonatomic,retain) S8Button * startButton;                       //@synthesize startButton=_startButton - In the implementation block
@property (nonatomic,retain) S8ImageView * bannerImageView;                //@synthesize bannerImageView=_bannerImageView - In the implementation block
+(void)tryToStartTutorial;
-(int)tutorialId;
-(int)motdId;
-(id)initWithTutorial:(int)arg1 motd:(int)arg2 progressBonus:(int)arg3 ;
-(void)dismissed:(id)arg1 ;
-(void)setTutorialId:(int)arg1 ;
-(void)setMotdId:(int)arg1 ;
-(S8Label *)daysLeftLabel;
-(void)updateCountDown;
-(id)HMSTimeWithTimeLeft:(int)arg1 ;
-(void)setDaysLeftLabel:(S8Label *)arg1 ;
-(void)setProgressBonusForReplayEvent:(int)arg1 ;
-(UIView *)week1View;
-(UIView *)week2View;
-(S8Label *)week1TitleLabel;
-(S8ImageView *)rewardsImageView;
-(S8Label *)upperTextLabelWeek1;
-(S8Label *)lowerTextLabel;
-(S8Label *)week2TitleLabel;
-(S8Label *)upperTextLabelWeek2;
-(void)startButtonClicked:(id)arg1 ;
-(void)setWeek1TitleLabel:(S8Label *)arg1 ;
-(void)setWeek2TitleLabel:(S8Label *)arg1 ;
-(void)setUpperTextLabelWeek1:(S8Label *)arg1 ;
-(void)setUpperTextLabelWeek2:(S8Label *)arg1 ;
-(void)setLowerTextLabel:(S8Label *)arg1 ;
-(void)setRewardsImageView:(S8ImageView *)arg1 ;
-(int)progressBonusForReplayEvent;
-(void)setWeek1View:(UIView *)arg1 ;
-(void)setWeek2View:(UIView *)arg1 ;
-(void)dealloc;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(S8ImageView *)bannerImageView;
-(void)setBannerImageView:(S8ImageView *)arg1 ;
-(void)setStartButton:(S8Button *)arg1 ;
-(S8Button *)startButton;
@end
