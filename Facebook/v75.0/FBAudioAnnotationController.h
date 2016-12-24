/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMediaPlayerDelegate.h>
#import <Facebook/FBAudioSessionManagerClient.h>
#import <Facebook/FBSystemAudioSessionManagerListener.h>
#import <Facebook/FBExpandableAnnotationController.h>
#import <Facebook/FBFocusableBlockController.h>
#import <Facebook/FBPreloadableBlockController.h>

@class FBAudioAnnotationNode, FBRichStoryAudioAnnotation, FBMediaPlayer, FBRichStoryBlockDisplayContext, NSAttributedString, NSTimer, NSString;

@interface FBAudioAnnotationController : NSObject <FBMediaPlayerDelegate, FBAudioSessionManagerClient, FBSystemAudioSessionManagerListener, FBExpandableAnnotationController, FBFocusableBlockController, FBPreloadableBlockController> {

	FBAudioAnnotationNode* _audioAnnotationNode;
	FBRichStoryAudioAnnotation* _audioAnnotation;
	FBMediaPlayer* _mediaPlayer;
	FBRichStoryBlockDisplayContext* _displayContext;
	NSAttributedString* _displayString;
	BOOL _wasMuted;
	BOOL _wasUsingHeadphones;
	NSTimer* _mediaPlayerResetTimer;
	BOOL _audioPlaying;
	BOOL _shouldOverrideMuteSwitch;

}

@property (nonatomic,readonly) unsigned long long playMode; 
@property (assign,getter=isAudioPlaying,nonatomic) BOOL audioPlaying;                  //@synthesize audioPlaying=_audioPlaying - In the implementation block
@property (assign,nonatomic) BOOL shouldOverrideMuteSwitch;                            //@synthesize shouldOverrideMuteSwitch=_shouldOverrideMuteSwitch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long audioDirection; 
@property (nonatomic,readonly) unsigned long long outputCoordinationMode; 
@property (nonatomic,readonly) unsigned long long outputOptions; 
@property (nonatomic,readonly) unsigned long long inputOptions; 
@property (nonatomic,readonly) unsigned long long clientPriority; 
@property (nonatomic,readonly) unsigned long long audioSessionMode; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(void)audioSessionManagerUpdatedAudioSession:(id)arg1 ;
-(void)audioSessionManagerNotedRouteChange:(id)arg1 ;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)audioDirection;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(id)richStoryRenderable;
-(void)didEnterPreloadViewport;
-(void)didGainInteractiveFocus;
-(void)didLoseInteractiveFocus;
-(CGRect)contentFrameForFramesetter:(id)arg1 ;
-(void)setShouldOverrideMuteSwitch:(BOOL)arg1 ;
-(BOOL)shouldOverrideMuteSwitch;
-(void)_prepareForInterruption;
-(void)_resumeFromInteruption;
-(id)initWithAnnotation:(id)arg1 displayString:(id)arg2 displayContext:(id)arg3 ;
-(void)_tappedAudioNode;
-(void)_stopMediaPlayerResetTimer;
-(unsigned long long)playMode;
-(void)setAudioPlaying:(BOOL)arg1 ;
-(void)setVolume:(float)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startMediaPlayerResetTimer;
-(BOOL)isAudioPlaying;
-(void)_mediaPlayerResetTimerDidFire:(id)arg1 ;
-(void)_didToggleMuteSwitch;
-(void)_didUnplugHeadphones;
-(void)mediaPlayerDidPlayToEnd:(id)arg1 ;
-(void)willExpand;
-(void)willCollapse;
-(void)dealloc;
-(void)cleanup;
-(void)beginInterruption;
-(void)_pause;
-(void)_play;
@end
