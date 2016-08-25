/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/WatchToEarnButtonViewBase.h>

@protocol WatchRewardedAdDialogDelegate;
@class S8Button;

@interface WatchToEarnIconView : WatchToEarnButtonViewBase {

	S8Button* _watchVideoAdsButton;
	id<WatchRewardedAdDialogDelegate> _delegate;

}

@property (nonatomic,retain) S8Button * watchVideoAdsButton;                          //@synthesize watchVideoAdsButton=_watchVideoAdsButton - In the implementation block
@property (assign,nonatomic) id<WatchRewardedAdDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setWatchVideoAdsButton:(S8Button *)arg1 ;
-(S8Button *)watchVideoAdsButton;
-(void)setupWithPlacement:(long long)arg1 ;
-(void)refreshIcon:(BOOL)arg1 ;
-(id)rewardIconId:(int)arg1 ;
-(void)startWiggleAnimationToRewardedVideoAdButton;
-(void)watchVideoAdsButtonClicked;
-(void)setupWithPlacement:(long long)arg1 delegate:(id)arg2 ;
-(void)setLogChannel;
-(void)setDelegate:(id<WatchRewardedAdDialogDelegate>)arg1 ;
-(id<WatchRewardedAdDialogDelegate>)delegate;
@end

