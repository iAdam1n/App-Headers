/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBMagicStoriesVideoPlayerTracker, FBMemVideo, FBVideoPlayerComponent, FBFeedToolbox;

@interface FBMagicStoriesVideoComponent : CKCompositeComponent {

	FBMagicStoriesVideoPlayerTracker* _playerTracker;
	FBMemVideo* _video;
	FBVideoPlayerComponent* _videoComponent;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,readonly) FBMagicStoriesVideoPlayerTracker * playerTracker;              //@synthesize playerTracker=_playerTracker - In the implementation block
@property (nonatomic,readonly) FBMemVideo * video;                                            //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) FBVideoPlayerComponent * videoComponent;                       //@synthesize videoComponent=_videoComponent - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                       //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithVideo:(id)arg1 videoPlayerTracker:(id)arg2 toolbox:(id)arg3 ;
-(FBFeedToolbox *)toolbox;
-(void)enterFullscreen;
-(FBVideoPlayerComponent *)videoComponent;
-(void)_tappedVideoPlayer:(id)arg1 ;
-(FBMagicStoriesVideoPlayerTracker *)playerTracker;
-(FBMemVideo *)video;
@end
