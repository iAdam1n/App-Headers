/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBVideoPluginView.h>

@class FBUserSession, FBFacecastAudioAnimationView, UILabel, FBVideoPlaybackController, NSString;

@interface FBVideoPlayerAudioOnlyViewPlugin : UIView <FBVideoPluginView> {

	FBUserSession* _session;
	double _duration;
	FBFacecastAudioAnimationView* _audioAnimationView;
	UILabel* _audioBroadcastLabel;
	unsigned long long _style;
	FBVideoPlaybackController* _videoController;
	CGRect _videoFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect videoFrame;                                               //@synthesize videoFrame=_videoFrame - In the implementation block
@property (assign,nonatomic,__weak) FBVideoPlaybackController * videoController;              //@synthesize videoController=_videoController - In the implementation block
@property (nonatomic,readonly) unsigned long long visibilityOptions; 
-(void)videoPlaybackControllerDidMute:(id)arg1 ;
-(void)videoPlaybackControllerDidUnmute:(id)arg1 ;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidCancelPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(FBVideoPlaybackController *)videoController;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(unsigned long long)visibilityOptions;
-(id)initWithFrame:(CGRect)arg1 duration:(double)arg2 session:(id)arg3 ;
-(void)_showSubviews;
-(void)_hideSubviews;
-(void)_stopAnimationIfNeeded;
-(void)_startAnimationIfNeeded;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidate;
-(void)configure;
@end
