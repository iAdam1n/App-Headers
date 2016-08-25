/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DailyDelegate <NSObject>
@required
-(void)setAchievement:(int)arg1 percent:(double)arg2 count:(int)arg3;
-(id)getAchievement:(int)arg1;
-(void)achievementToDisplay:(int)arg1;
-(void)beginHidingDimView;
-(void)finishHidingDimView;
-(void)showDimBelowView:(id)arg1;
-(void)setReturnToDailyChallenges:(BOOL)arg1;
-(BOOL)hasUsedWatchApp;
-(void)hideCrownView;
-(BOOL)winGameIsVisible;
-(void)removeCrownView;
-(void)removeCrownDimView:(/*^block*/id)arg1;
-(BOOL)startRequestingDailyDeal:(id)arg1;
-(BOOL)areSoundsEnabled;
-(id)getiAdView;
-(id)getBannerAd;
-(id)bannerAdViewForDailyView:(id)arg1;
-(void)dismissAds;
-(void)startedDealWithArchive:(id)arg1;
-(void)leaderBoardButtonPressedFromDailyDeals;
-(void)dailyViewDidHide:(BOOL)arg1;
-(void)finishedDailyDealProgress;
-(BOOL)startDailyDealProgress;
-(unsigned char)gameOver;
-(id)crownView;
-(BOOL)returnToDailyChallenges;
-(BOOL)isDailyChallengeEqualTo:(id)arg1;
-(BOOL)isWinGameAnimating;

@end

