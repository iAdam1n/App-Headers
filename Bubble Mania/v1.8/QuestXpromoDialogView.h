/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/XibDialogView.h>
#import <BubbleMania/HTTPConnectionDelegate.h>

@class UILabel, S8ImageView, UIButton, UIView, UIImageView, NSString, Quest, NSTimer;

@interface QuestXpromoDialogView : XibDialogView <HTTPConnectionDelegate> {

	UILabel* questDialogLabel;
	UILabel* taskDialogLabel;
	S8ImageView* hostImageView;
	S8ImageView* xpromoAppIconImageView;
	UIButton* questActionButton;
	UIView* questRewardView;
	UILabel* questRewardLabel;
	UIImageView* questRewardIcon;
	S8ImageView* questContainerImage;
	UIImageView* timerImage;
	UILabel* timerLabel;
	BOOL expired;
	NSString* questAction;
	NSString* appHandler;
	NSString* engagementUrl;
	Quest* quest;
	NSTimer* expirationTimer;
	NSString* statViewName;
	UILabel* _quantityLabel;
	UILabel* _actionLabel;
	UIView* _directGemRewardView;
	UIView* _keyRewardView;
	UILabel* _titleLabel;
	UILabel* _freeGemsLabel;
	long long _index;

}

@property (nonatomic,retain) UILabel * quantityLabel;                           //@synthesize quantityLabel=_quantityLabel - In the implementation block
@property (nonatomic,retain) UILabel * actionLabel;                             //@synthesize actionLabel=_actionLabel - In the implementation block
@property (nonatomic,retain) UIView * directGemRewardView;                      //@synthesize directGemRewardView=_directGemRewardView - In the implementation block
@property (nonatomic,retain) UIView * keyRewardView;                            //@synthesize keyRewardView=_keyRewardView - In the implementation block
@property (nonatomic,retain) UILabel * questDialogLabel; 
@property (nonatomic,retain) UILabel * taskDialogLabel; 
@property (nonatomic,retain) S8ImageView * hostImageView; 
@property (nonatomic,retain) S8ImageView * xpromoAppIconImageView; 
@property (nonatomic,retain) UIButton * questActionButton; 
@property (nonatomic,retain) NSString * questAction; 
@property (nonatomic,retain) NSString * appHandler; 
@property (nonatomic,retain) NSString * engagementUrl; 
@property (nonatomic,retain) Quest * quest; 
@property (nonatomic,retain) NSTimer * expirationTimer; 
@property (assign,nonatomic) BOOL expired; 
@property (nonatomic,retain) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * freeGemsLabel;                           //@synthesize freeGemsLabel=_freeGemsLabel - In the implementation block
@property (assign,nonatomic) long long index;                                   //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSString * statViewName; 
+(id)viewWithQuest:(id)arg1 statViewName:(id)arg2 ;
+(id)viewWithQuest:(id)arg1 ;
+(BOOL)showingQuestXpromoDialogView;
-(void)connection:(id)arg1 getResponse:(id)arg2 ;
-(void)dismissed:(id)arg1 ;
-(id)initWithQuest:(id)arg1 ;
-(Quest *)quest;
-(void)playTapSound;
-(void)accepted:(id)arg1 ;
-(id)timerFromSeconds:(int)arg1 ;
-(NSString *)appHandler;
-(void)setAppHandler:(NSString *)arg1 ;
-(NSString *)engagementUrl;
-(void)setEngagementUrl:(NSString *)arg1 ;
-(void)setQuest:(Quest *)arg1 ;
-(id)initWithQuest:(id)arg1 index:(long long)arg2 statViewName:(id)arg3 ;
-(void)setStatViewName:(NSString *)arg1 ;
-(void)setupWithQuest:(id)arg1 ;
-(id)initWithQuest:(id)arg1 statViewName:(id)arg2 ;
-(UIView *)directGemRewardView;
-(UIView *)keyRewardView;
-(void)updateExpirationTime;
-(void)setExpirationTimer:(NSTimer *)arg1 ;
-(UILabel *)quantityLabel;
-(UILabel *)freeGemsLabel;
-(void)setQuestAction:(NSString *)arg1 ;
-(UIButton *)questActionButton;
-(NSString *)questAction;
-(void)logXPQuestFunnelStep:(long long)arg1 action:(id)arg2 ;
-(id)logXPQuestViewName;
-(NSString *)statViewName;
-(void)acceptWithNoVisualDisplay;
-(id)initWithQuest:(id)arg1 index:(long long)arg2 ;
-(void)playMainButtonSound;
-(UILabel *)questDialogLabel;
-(void)setQuestDialogLabel:(UILabel *)arg1 ;
-(UILabel *)taskDialogLabel;
-(void)setTaskDialogLabel:(UILabel *)arg1 ;
-(S8ImageView *)hostImageView;
-(void)setHostImageView:(S8ImageView *)arg1 ;
-(S8ImageView *)xpromoAppIconImageView;
-(void)setXpromoAppIconImageView:(S8ImageView *)arg1 ;
-(void)setQuestActionButton:(UIButton *)arg1 ;
-(void)setQuantityLabel:(UILabel *)arg1 ;
-(void)setDirectGemRewardView:(UIView *)arg1 ;
-(void)setKeyRewardView:(UIView *)arg1 ;
-(void)setFreeGemsLabel:(UILabel *)arg1 ;
-(void)show;
-(void)dealloc;
-(UILabel *)titleLabel;
-(long long)index;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(UILabel *)actionLabel;
-(void)setActionLabel:(UILabel *)arg1 ;
-(BOOL)expired;
-(void)setExpired:(BOOL)arg1 ;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(NSTimer *)expirationTimer;
@end

