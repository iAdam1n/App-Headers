/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/WatchRewardedAdDialogViewBase.h>

@class S8Label, UILabel, UIView, S8ImageView, UIImageView, NSArray, NSString;

@interface WatchRewardedAdDialogView : WatchRewardedAdDialogViewBase {

	BOOL _flowComplete;
	S8Label* _noMoreTodayLabel;
	UILabel* _lowerRewardQuantityLabel;
	UILabel* _upperRewardQuantityLabel;
	UIView* _headerWatchVideo;
	UIView* _headerFinishedVideos;
	UIView* _introView;
	S8ImageView* _watchAdImage;
	UIImageView* _starGlimmer;
	S8ImageView* _introRewardImage;
	S8Label* _introItemName;
	UIView* _watchAdNotImage;
	NSArray* _rewards;
	UIView* _rewardView;
	S8ImageView* _watchAdRewardedImage;
	S8ImageView* _tvImage;
	S8ImageView* _sunburst;
	S8ImageView* _sunburst2;
	NSArray* _stars;
	UIView* _watchToEarnTestView;
	UILabel* _watchToEarnTestLabel;

}

@property (nonatomic,retain) S8Label * noMoreTodayLabel;                              //@synthesize noMoreTodayLabel=_noMoreTodayLabel - In the implementation block
@property (nonatomic,retain) UILabel * lowerRewardQuantityLabel;                      //@synthesize lowerRewardQuantityLabel=_lowerRewardQuantityLabel - In the implementation block
@property (nonatomic,retain) UILabel * upperRewardQuantityLabel;                      //@synthesize upperRewardQuantityLabel=_upperRewardQuantityLabel - In the implementation block
@property (nonatomic,retain) UIView * headerWatchVideo;                               //@synthesize headerWatchVideo=_headerWatchVideo - In the implementation block
@property (nonatomic,retain) UIView * headerFinishedVideos;                           //@synthesize headerFinishedVideos=_headerFinishedVideos - In the implementation block
@property (nonatomic,retain) UIView * introView;                                      //@synthesize introView=_introView - In the implementation block
@property (nonatomic,retain) S8ImageView * watchAdImage;                              //@synthesize watchAdImage=_watchAdImage - In the implementation block
@property (nonatomic,retain) UIImageView * starGlimmer;                               //@synthesize starGlimmer=_starGlimmer - In the implementation block
@property (nonatomic,retain) S8ImageView * introRewardImage;                          //@synthesize introRewardImage=_introRewardImage - In the implementation block
@property (nonatomic,retain) S8Label * introItemName;                                 //@synthesize introItemName=_introItemName - In the implementation block
@property (nonatomic,retain) UIView * watchAdNotImage;                                //@synthesize watchAdNotImage=_watchAdNotImage - In the implementation block
@property (nonatomic,retain) NSArray * rewards;                                       //@synthesize rewards=_rewards - In the implementation block
@property (nonatomic,retain) UIView * rewardView;                                     //@synthesize rewardView=_rewardView - In the implementation block
@property (nonatomic,retain) S8ImageView * watchAdRewardedImage;                      //@synthesize watchAdRewardedImage=_watchAdRewardedImage - In the implementation block
@property (nonatomic,retain) S8ImageView * tvImage;                                   //@synthesize tvImage=_tvImage - In the implementation block
@property (nonatomic,retain) S8ImageView * sunburst;                                  //@synthesize sunburst=_sunburst - In the implementation block
@property (nonatomic,retain) S8ImageView * sunburst2;                                 //@synthesize sunburst2=_sunburst2 - In the implementation block
@property (nonatomic,retain) NSArray * stars;                                         //@synthesize stars=_stars - In the implementation block
@property (assign,nonatomic) id<WatchRewardedAdDialogDelegate> delegate; 
@property (assign,nonatomic) NSString * rewardUrl; 
@property (assign,nonatomic) BOOL flowComplete;                                       //@synthesize flowComplete=_flowComplete - In the implementation block
@property (nonatomic,retain) UIView * watchToEarnTestView;                            //@synthesize watchToEarnTestView=_watchToEarnTestView - In the implementation block
@property (nonatomic,retain) UILabel * watchToEarnTestLabel;                          //@synthesize watchToEarnTestLabel=_watchToEarnTestLabel - In the implementation block
-(NSArray *)rewards;
-(NSArray *)stars;
-(void)setStars:(NSArray *)arg1 ;
-(UIView *)introView;
-(void)setupForState:(int)arg1 ;
-(void)setRewards:(NSArray *)arg1 ;
-(UIView *)rewardView;
-(void)setRewardView:(UIView *)arg1 ;
-(id)rewardIconId:(int)arg1 ;
-(void)setIntroView:(UIView *)arg1 ;
-(void)animateFlyingGems;
-(id)initWithPlacement:(long long)arg1 delegate:(id)arg2 ;
-(void)setFlowComplete:(BOOL)arg1 ;
-(S8ImageView *)watchAdRewardedImage;
-(BOOL)flowComplete;
-(long long)updateQuantity:(long long)arg1 withItemId:(int)arg2 ;
-(UIView *)watchAdNotImage;
-(UILabel *)lowerRewardQuantityLabel;
-(UILabel *)upperRewardQuantityLabel;
-(S8Label *)noMoreTodayLabel;
-(S8Label *)introItemName;
-(UIView *)headerFinishedVideos;
-(UIView *)headerWatchVideo;
-(UIView *)watchToEarnTestView;
-(S8ImageView *)introRewardImage;
-(void)setupIntroAnimation;
-(UILabel *)watchToEarnTestLabel;
-(void)setupPrizeAnimation;
-(void)setupFailAnimation;
-(long long)updateEnergyRewardIfNeeded:(long long)arg1 ;
-(UIImageView *)starGlimmer;
-(S8ImageView *)watchAdImage;
-(S8ImageView *)tvImage;
-(S8ImageView *)sunburst;
-(S8ImageView *)sunburst2;
-(void)watchVideo;
-(BOOL)supportFlyingGem;
-(BOOL)canWatchMultipleVideos;
-(void)setNoMoreTodayLabel:(S8Label *)arg1 ;
-(void)setLowerRewardQuantityLabel:(UILabel *)arg1 ;
-(void)setUpperRewardQuantityLabel:(UILabel *)arg1 ;
-(void)setHeaderWatchVideo:(UIView *)arg1 ;
-(void)setHeaderFinishedVideos:(UIView *)arg1 ;
-(void)setWatchAdImage:(S8ImageView *)arg1 ;
-(void)setStarGlimmer:(UIImageView *)arg1 ;
-(void)setIntroRewardImage:(S8ImageView *)arg1 ;
-(void)setIntroItemName:(S8Label *)arg1 ;
-(void)setWatchAdNotImage:(UIView *)arg1 ;
-(void)setWatchAdRewardedImage:(S8ImageView *)arg1 ;
-(void)setTvImage:(S8ImageView *)arg1 ;
-(void)setSunburst:(S8ImageView *)arg1 ;
-(void)setSunburst2:(S8ImageView *)arg1 ;
-(void)setWatchToEarnTestView:(UIView *)arg1 ;
-(void)setWatchToEarnTestLabel:(UILabel *)arg1 ;
-(void)dealloc;
@end

