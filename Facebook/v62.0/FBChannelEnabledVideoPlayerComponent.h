/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBVideoPlaybackLoggingDataProviderInitializer;
@class NSArray, FBVideoPlayerComponent, FBMemFeedStory, FBMemVideo, FBUserSession, FBFeedToolbox, NSString;

@interface FBChannelEnabledVideoPlayerComponent : CKCompositeComponent {

	SEL _didTapPlayAction;
	/*^block*/id _onDismissCompletionBlock;
	/*^block*/id _onVideoStartedPlaying;
	SEL _openChannelAction;
	NSArray* _trackingCodes;
	FBVideoPlayerComponent* _videoPlayerComponent;
	BOOL _allowWatchMoreEndScreenCTA;
	FBMemFeedStory* _parent;
	id<FBVideoPlaybackLoggingDataProviderInitializer> _loggingProviderInitializer;
	FBMemVideo* _video;
	FBUserSession* _session;
	unsigned long long _videoPlayerOptions;
	FBFeedToolbox* _toolbox;
	NSString* _playerOrigin;
	NSString* _playerSubOrigin;

}

@property (nonatomic,readonly) id<FBVideoPlaybackLoggingDataProviderInitializer> loggingProviderInitializer;              //@synthesize loggingProviderInitializer=_loggingProviderInitializer - In the implementation block
@property (nonatomic,readonly) FBMemVideo * video;                                                                        //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) unsigned long long videoPlayerOptions;                                                     //@synthesize videoPlayerOptions=_videoPlayerOptions - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                                                   //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) BOOL allowWatchMoreEndScreenCTA;                                                           //@synthesize allowWatchMoreEndScreenCTA=_allowWatchMoreEndScreenCTA - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerOrigin;                                                              //@synthesize playerOrigin=_playerOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerSubOrigin;                                                           //@synthesize playerSubOrigin=_playerSubOrigin - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * parent;                                                                   //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) FBVideoPlayerComponent * videoPlayerComponent;                                             //@synthesize videoPlayerComponent=_videoPlayerComponent - In the implementation block
+(id)newWithVideo:(id)arg1 parent:(id)arg2 videoPlayerOptions:(unsigned long long)arg3 channelComponentConfig:(const FBChannelEnabledVideoPlayerComponentConfig*)arg4 size:(const CKComponentSize*)arg5 playerOrigin:(id)arg6 playerSubOrigin:(id)arg7 toolbox:(id)arg8 ;
-(FBFeedToolbox *)toolbox;
-(void)enterChannelWithExistingChannel:(id)arg1 ;
-(void)enterChannelWithStoryConfigs:(id)arg1 ;
-(FBVideoPlayerComponent *)videoPlayerComponent;
-(unsigned long long)videoPlayerOptions;
-(void)enterChannelWithStoryConfigs:(id)arg1 andExistingChannel:(id)arg2 ;
-(id)_channelsViewController:(id)arg1 displayController:(id)arg2 channel:(id)arg3 storyConfigs:(id)arg4 ;
-(id)_channelToOpen;
-(void)_enterChannel:(id)arg1 ;
-(void)_enterFullScreen:(id)arg1 ;
-(void)_startPlaying;
-(id<FBVideoPlaybackLoggingDataProviderInitializer>)loggingProviderInitializer;
-(BOOL)allowWatchMoreEndScreenCTA;
-(NSString *)playerOrigin;
-(NSString *)playerSubOrigin;
-(FBUserSession *)session;
-(FBMemFeedStory *)parent;
-(FBMemVideo *)video;
@end
