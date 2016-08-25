/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, GameLoopTimerSelector, QuestAlertView;

@interface QuestAlertManager : NSObject {

	BOOL showingAlert;
	NSMutableArray* pendingQuestsToShow;
	GameLoopTimerSelector* timerSelector;
	QuestAlertView* questAlertView;

}

@property (nonatomic,retain) NSMutableArray * pendingQuestsToShow; 
@property (assign,nonatomic) BOOL showingAlert; 
@property (nonatomic,retain) GameLoopTimerSelector * timerSelector; 
@property (nonatomic,retain) QuestAlertView * questAlertView; 
+(id)instance;
-(NSMutableArray *)pendingQuestsToShow;
-(void)addQuest:(id)arg1 ;
-(GameLoopTimerSelector *)timerSelector;
-(void)setTimerSelector:(GameLoopTimerSelector *)arg1 ;
-(BOOL)displayDialog:(id)arg1 ;
-(void)setPendingQuestsToShow:(NSMutableArray *)arg1 ;
-(void)handleQuestCompleted:(id)arg1 ;
-(void)showNextAlertView;
-(QuestAlertView *)questAlertView;
-(void)removeQuestAlertViewFromSuperview;
-(void)setShowingAlert:(BOOL)arg1 ;
-(void)setQuestAlertView:(QuestAlertView *)arg1 ;
-(void)showNextAlertViewAfterDelay;
-(void)slideOutVertical:(id)arg1 delay:(float)arg2 duration:(float)arg3 delegate:(id)arg4 ;
-(BOOL)showingAlert;
-(void)dealloc;
-(id)init;
@end

