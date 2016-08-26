/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/DriveStar.h>

@class GameLoopTimerSelector;

@interface SelfRefreshDriveStar : DriveStar {

	GameLoopTimerSelector* timerSelector;
	int refreshFrequency;
	BOOL hidingAnimationStarted;

}

@property (assign,nonatomic) int refreshFrequency; 
@property (assign,nonatomic) BOOL hidingAnimationStarted; 
-(id)initWithModel:(id)arg1 refreshFrequency:(int)arg2 ;
-(void)setRefreshFrequency:(int)arg1 ;
-(void)selfRefresh;
-(void)clearTimerSelector;
-(void)initTimerSelector;
-(int)refreshFrequency;
-(void)selfRefreshHideAnimation:(id)arg1 refreshFrequency:(float)arg2 ;
-(void)animatedHideDidStart;
-(void)selfRefreshShowAnimation:(id)arg1 refreshFrequency:(float)arg2 ;
-(void)animatedUnhideDidStart;
-(void)selfRefreshHideAnimation:(id)arg1 ;
-(void)selfRefreshShowAnimation:(id)arg1 ;
-(BOOL)hidingAnimationStarted;
-(void)setHidingAnimationStarted:(BOOL)arg1 ;
-(void)dealloc;
-(void)clear;
-(id)initWithModel:(id)arg1 ;
@end
