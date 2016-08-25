/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/XibView.h>

@class UIView, UIButton, UILabel, S8ImageView, UIImageView, S8Button, QuestListDialogView, Quest;

@interface QuestListRowView : XibView {

	UIView* questViewContainer;
	UIView* regularQuestView;
	UIView* regularPlainQuestView;
	UIView* completedQuestView;
	UIView* completedPlainQuestView;
	UIView* crossPromoQuestView;
	UIButton* regularQuestBackground;
	UILabel* regularQuestName;
	S8ImageView* regularQuestIcon;
	UIImageView* regularProgressIcon;
	UIView* regularRewardView;
	UIImageView* regularRewardIcon;
	UILabel* regularRewardAmount;
	S8Button* regularQuestButton;
	UIImageView* progressContainer;
	UILabel* progressLabel;
	UIView* timerView;
	UILabel* timerLabel;
	UILabel* regularPlainQuestName;
	UILabel* regularPlainLongQuestName;
	S8ImageView* regularPlainQuestIcon;
	UIImageView* regularPlainProgressIcon;
	S8Button* regularPlainQuestButton;
	UIImageView* progressPlainContainer;
	UILabel* progressPlainLabel;
	UIButton* completedQuestBackground;
	UILabel* completedQuestName;
	S8ImageView* completedQuestIcon;
	UIView* completedRewardView;
	UIImageView* completedRewardIcon;
	UILabel* completedRewardAmount;
	UILabel* completedPlainQuestName;
	S8ImageView* completedPlainQuestIcon;
	UILabel* crossPromoQuestName;
	S8ImageView* crossPromoQuestIcon;
	S8Button* crossPromoQuestButton;
	QuestListDialogView* dialog;
	Quest* _quest;

}

@property (assign,nonatomic) QuestListDialogView * dialog; 
@property (nonatomic,retain) Quest * quest;                             //@synthesize quest=_quest - In the implementation block
+(id)cellIdentifier;
-(Quest *)quest;
-(void)setQuest:(Quest *)arg1 ;
-(void)setupCompletedPlainView;
-(void)setupCompletedView;
-(void)setupCrossPromoView;
-(void)setupRegularPlainView;
-(void)setupRegularView;
-(void)fadeOutProgressStamp:(id)arg1 ;
-(void)showProgressStamp:(id)arg1 ;
-(void)regularQuestButtonTapped:(id)arg1 ;
-(void)crossPromoQuestButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(QuestListDialogView *)dialog;
-(void)setDialog:(QuestListDialogView *)arg1 ;
@end

