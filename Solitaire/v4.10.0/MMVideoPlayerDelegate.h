/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MMVideoPlayerDelegate <NSObject>
@optional
-(void)mmVideoPlayerMovieDuration:(double)arg1;
-(void)mmVideoPlayerThumbnailViewAvailable:(id)arg1;
-(void)mmVideoPlayerThumbnailViewError:(id)arg1;
-(void)mmVideoPlayerTouch:(CGPoint)arg1;
-(id)mmVideoPlayerViewControllerForPresentingModalView;
-(void)mmVideoPlayerCurrentPlaybackTime:(double)arg1;
-(void)mmVideoPlayerDidRotateToInterfaceOrientation:(long long)arg1;
-(void)mmVideoPlayerAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(void)mmVideoPlayerControlTap;

@required
-(void)mmVideoPlayerError:(id)arg1;
-(void)mmVideoPlayerEvent:(long long)arg1;
-(void)mmVideoPlayerPlaybackFinished:(id)arg1;
-(void)mmVideoPlayerReady:(id)arg1;

@end
