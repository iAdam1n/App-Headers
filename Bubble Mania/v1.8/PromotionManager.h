/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/DialogDelegate.h>

@class XibDialogView, PromotionBarView, PromotionButtonView, NSMutableArray, NSString;

@interface PromotionManager : NSObject <DialogDelegate> {

	XibDialogView* currentlyShowingDialog;
	PromotionBarView* promotionBar;
	PromotionButtonView* storm8Button;
	NSMutableArray* cachedAdDialogs;

}

@property (nonatomic,retain) PromotionButtonView * storm8Button; 
@property (nonatomic,retain) XibDialogView * currentlyShowingDialog; 
@property (nonatomic,retain) PromotionBarView * promotionBar; 
@property (nonatomic,retain) NSMutableArray * cachedAdDialogs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(void)addStorm8Button:(id)arg1 ;
-(void)refreshStorm8Button;
-(PromotionButtonView *)storm8Button;
-(void)crossPromotedAppsUpdated:(id)arg1 ;
-(BOOL)showAdDialogs;
-(void)goToAppleAppId:(int)arg1 installUrl:(id)arg2 fallbackInstallUrl:(id)arg3 channelName:(id)arg4 viewName:(id)arg5 ;
-(void)dialogDidClose:(id)arg1 ;
-(id)adDialogs;
-(BOOL)showAdDialog:(id)arg1 ;
-(BOOL)showSurveyDialog:(id)arg1 ;
-(void)setCurrentlyShowingDialog:(XibDialogView *)arg1 ;
-(XibDialogView *)currentlyShowingDialog;
-(void)logXPAdOnLaunch:(id)arg1 ;
-(void)logXPAdOnBoard:(id)arg1 ;
-(void)setCachedAdDialogs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)cachedAdDialogs;
-(void)addStorm8Button:(id)arg1 x:(int)arg2 y:(int)arg3 ;
-(void)setStorm8Button:(PromotionButtonView *)arg1 ;
-(void)setPromotionBar:(PromotionBarView *)arg1 ;
-(PromotionBarView *)promotionBar;
-(void)addPromotionBar:(id)arg1 x:(int)arg2 y:(int)arg3 ;
-(BOOL)shouldShowPromotionBar;
-(void)trackXpromoImpressionType:(int)arg1 intValue:(int)arg2 ;
-(id)nextAvailableCrossPromotionItem;
-(BOOL)isValidCrossPromotionItem:(id)arg1 forFlow:(int)arg2 ;
-(BOOL)isSpecialRewardCrossPromotionQuest:(id)arg1 ;
-(int)promotionFlowStateForQuestId:(int)arg1 ;
-(int)flowStateForCrossPromotionQuest:(id)arg1 ;
-(id)promotionAdDialogViewFromBoard:(id)arg1 ;
-(void)dialogMayBeHidden;
-(BOOL)hasAdDialogs;
-(BOOL)isAlreadyShowingS8Button;
-(void)addStorm8Button:(id)arg1 y:(int)arg2 ;
-(void)showStorm8Button;
-(void)hideStorm8Button;
-(void)addPromotionBarUnder:(id)arg1 ;
-(void)addPromotionBar:(id)arg1 ;
-(void)addPromotionBarUpToMenu:(id)arg1 ;
-(BOOL)isPromotionBarShowing;
-(void)setPromotionBarVisible:(BOOL)arg1 ;
-(int)promotionBarHeight;
-(void)trackXpromoInstallQuestImpression:(id)arg1 ;
-(BOOL)hasValidCrossPromotionItemForFlow:(int)arg1 ;
-(void)updateCurrentPromotionState:(int)arg1 forPromotionItem:(id)arg2 ;
-(long long)rewardForQuest:(id)arg1 fromPromotionFlowState:(int)arg2 ;
-(void)dealloc;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

