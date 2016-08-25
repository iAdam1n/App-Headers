/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/UnityAdsViewState.h>
#import <AngryBirdsRio/UnityAdsVideoControllerDelegate.h>

@class UnityAdsVideoViewController, NSString;

@interface UnityAdsViewStateVideoPlayer : UnityAdsViewState <UnityAdsVideoControllerDelegate> {

	BOOL _checkIfWatched;
	UnityAdsVideoViewController* _videoController;

}

@property (nonatomic,retain) UnityAdsVideoViewController * videoController;              //@synthesize videoController=_videoController - In the implementation block
@property (assign,nonatomic) BOOL checkIfWatched;                                        //@synthesize checkIfWatched=_checkIfWatched - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)getStateType;
-(void)videoPlayerReady;
-(void)videoPlayerStartedPlaying;
-(void)videoPlayerPlaybackEnded:(BOOL)arg1 ;
-(void)videoPlayerEncounteredError;
-(void)applyOptions:(id)arg1 ;
-(void)exitState:(id)arg1 ;
-(void)willBeShown;
-(void)wasShown;
-(void)setCheckIfWatched:(BOOL)arg1 ;
-(void)createVideoController:(id)arg1 ;
-(void)showPlayerAndPlaySelectedVideo;
-(void)dismissVideoController;
-(void)destroyVideoController;
-(BOOL)checkIfWatched;
-(BOOL)canViewSelectedCampaign;
-(void)startVideoPlayback:(BOOL)arg1 withDelegate:(id)arg2 ;
-(UnityAdsVideoViewController *)videoController;
-(void)setVideoController:(UnityAdsVideoViewController *)arg1 ;
-(void)enterState:(id)arg1 ;
@end

