/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBVideoPlayerComponent, FBFeedToolbox, FBMemVideo, FBMemFeedStory, NSString, NSArray, FBLivestreamVideoPlayerComponentState;

@interface FBLivestreamVideoPlayerComponent : CKCompositeComponent {

	BOOL _isContainerTrackingDisabled;
	FBVideoPlayerComponent* _videoPlayerComponent;
	FBFeedToolbox* _toolbox;
	FBMemVideo* _video;
	FBMemFeedStory* _story;
	NSString* _playerOrigin;
	NSString* _playerSubOrigin;
	NSArray* _trackingCodes;
	FBLivestreamVideoPlayerComponentState* _componentState;
	unsigned long long _videoPlayerOptions;
	FBLivestreamVideoPlayerComponentFullscreenSwipeableConfig _fullscreenSwipeableConfig;
	FBLivestreamVideoPlayerComponentActions _actions;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                                                          //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBMemVideo * video;                                                                               //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * story;                                                                           //@synthesize story=_story - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerOrigin;                                                                     //@synthesize playerOrigin=_playerOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerSubOrigin;                                                                  //@synthesize playerSubOrigin=_playerSubOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                                                     //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) FBLivestreamVideoPlayerComponentActions actions;                                                  //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) FBLivestreamVideoPlayerComponentState * componentState;                                           //@synthesize componentState=_componentState - In the implementation block
@property (assign,nonatomic) BOOL isContainerTrackingDisabled;                                                                   //@synthesize isContainerTrackingDisabled=_isContainerTrackingDisabled - In the implementation block
@property (nonatomic,readonly) FBLivestreamVideoPlayerComponentFullscreenSwipeableConfig fullscreenSwipeableConfig;              //@synthesize fullscreenSwipeableConfig=_fullscreenSwipeableConfig - In the implementation block
@property (nonatomic,readonly) unsigned long long videoPlayerOptions;                                                            //@synthesize videoPlayerOptions=_videoPlayerOptions - In the implementation block
@property (nonatomic,readonly) FBVideoPlayerComponent * videoPlayerComponent;                                                    //@synthesize videoPlayerComponent=_videoPlayerComponent - In the implementation block
@property (nonatomic,readonly) unsigned long long transitionState; 
+(id)newWithVideo:(id)arg1 story:(id)arg2 videoPlayerOptions:(unsigned long long)arg3 style:(const FBLivestreamVideoPlayerComponentStyle*)arg4 size:(const CKComponentSize*)arg5 actions:(const FBLivestreamVideoPlayerComponentActions*)arg6 playerOrigin:(id)arg7 playerSubOrigin:(id)arg8 loggingProviderInitializer:(id)arg9 fullscreenSwipeableConfig:(const FBLivestreamVideoPlayerComponentFullscreenSwipeableConfig*)arg10 toolbox:(id)arg11 ;
+(void)setShowFullScreenButton:(BOOL)arg1 ;
-(FBMemFeedStory *)story;
-(FBFeedToolbox *)toolbox;
-(NSArray *)trackingCodes;
-(FBVideoPlayerComponent *)videoPlayerComponent;
-(unsigned long long)videoPlayerOptions;
-(NSString *)playerOrigin;
-(NSString *)playerSubOrigin;
-(FBLivestreamVideoPlayerComponentState *)componentState;
-(BOOL)isContainerTrackingDisabled;
-(void)setIsContainerTrackingDisabled:(BOOL)arg1 ;
-(FBLivestreamVideoPlayerComponentFullscreenSwipeableConfig)fullscreenSwipeableConfig;
-(FBLivestreamVideoPlayerComponentActions)actions;
-(unsigned long long)transitionState;
-(FBMemVideo *)video;
@end
