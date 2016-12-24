/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MOPUBPlayerViewControllerDelegate <NSObject>
@optional
-(id)viewControllerForPresentingModalView;
-(void)playerDidProgressToTime:(double)arg1;
-(void)willEnterFullscreen:(id)arg1;
-(void)playerPlaybackDidStart:(id)arg1;
-(void)playerViewController:(id)arg1 didTapReplayButton:(id)arg2;
-(void)playerViewController:(id)arg1 willShowReplayView:(id)arg2;
-(void)playerViewController:(id)arg1 didStall:(id)arg2;
-(void)playerViewController:(id)arg1 didRecoverFromStall:(id)arg2;
-(void)playerPlaybackWillStart:(id)arg1;

@end
