/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAVideoPreviewViewController.h>
#import <WhatsApp/WAMediaPlayerDelegate.h>
#import <WhatsApp/WAVideoScrubberDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <WhatsApp/WAImageToImageTransitioning.h>

@class WAMediaPlayer, WAVideoScrubber, UIView, AVMutableComposition, AVMutableVideoComposition, AVMutableCompositionTrack, AVURLAsset, AVAssetTrack, UIBarButtonItem, AVAssetImageGenerator, WABorderlessToolbar, NSString;

@interface WAVideoEditorController : WAVideoPreviewViewController <WAMediaPlayerDelegate, WAVideoScrubberDelegate, UIGestureRecognizerDelegate, WAImageToImageTransitioning> {

	WAMediaPlayer* _mediaPlayer;
	WAVideoScrubber* _videoScrubber;
	UIView* _videoScrubberContainerView;
	BOOL _videoScrubberHidden;
	AVMutableComposition* _composition;
	AVMutableVideoComposition* _videoComposition;
	AVMutableCompositionTrack* _videoCompositionTrack;
	AVURLAsset* _originalAsset;
	AVAssetTrack* _videoTrack;
	AVAssetTrack* _audioTrack;
	CGSize _videoPresentationSize;
	int _slowMotionFactor;
	BOOL _fullscreenMode;
	UIBarButtonItem* _playButtonItem;
	UIBarButtonItem* _pauseButtonItem;
	UIBarButtonItem* _spaceButtonItem;
	AVAssetImageGenerator* _lastImageGenerator;
	WABorderlessToolbar* _toolbar;
	SCD_Struct_WA3 _sourceTimeToSeekOnPlayerLoad;
	SCD_Struct_WA4 _compositionSlowMotionTimeRange;
	BOOL _waitingToReprocessVideo;
	BOOL _initialTranscodeStarted;
	UIView* _postSeekSnapshot;
	BOOL _isHidingKeyboard;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)captionBarStyle;
-(void)wa_fontSizeDidChange;
-(void)playButtonTapped:(id)arg1 ;
-(void)pauseButtonTapped:(id)arg1 ;
-(void)setVideoScrubberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)configureVideoScrubber;
-(void)loadOriginalAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)rebuildCompositionSeekingToSourceTime:(SCD_Struct_WA3)arg1 ;
-(void)layoutInterface;
-(void)setNavigationBarShadowHidden:(BOOL)arg1 ;
-(id)shadowViewInView:(id)arg1 ;
-(void)setFullscreenMode:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isOriginalAssetValid;
-(void)updateMediaPlayerPlaybackTimeRange;
-(void)reprocessVideoAfterDelay;
-(SCD_Struct_WA3)playerTimeFromSourceTime:(SCD_Struct_WA3)arg1 ;
-(void)cancelReprocessVideoAfterDelay;
-(void)reprocessVideo;
-(id)assetToTranscode;
-(void)sendVideo:(id)arg1 ;
-(void)updateSendButton;
-(void)setProgressViewHidden:(BOOL)arg1 ;
-(void)captionBarWillShowKeyboard:(id)arg1 ;
-(void)captionBarWillHideKeyboard:(id)arg1 ;
-(void)captionBarDidHideKeyboard:(id)arg1 ;
-(void)viewTapped:(id)arg1 ;
-(void)updateThumb;
-(void)updateBottomToolbar;
-(SCD_Struct_WA3)sourceTimeFromPlayerTime:(SCD_Struct_WA3)arg1 ;
-(void)mediaPlayerStatusDidChange:(id)arg1 ;
-(void)mediaPlayerDidChangeCurrentTime:(id)arg1 ;
-(void)mediaPlayerDidFinishLoading:(id)arg1 ;
-(void)mediaPlayerDidPlayToEndTime:(id)arg1 ;
-(void)mediaPlayerDidRequestPlaybackStart:(id)arg1 ;
-(void)mediaPlayerDidBeginScrubbing:(id)arg1 ;
-(void)mediaPlayerDidEndScrubbing:(id)arg1 ;
-(void)videoScrubberDidChangeTrimmedTimeRange:(id)arg1 ;
-(void)videoScrubberDidChangeSlowMotionTimeRange:(id)arg1 ;
-(void)videoScrubberDidBeginScrubbing:(id)arg1 pausePlayback:(BOOL)arg2 ;
-(void)videoScrubberDidChangeCurrentTime:(id)arg1 ;
-(void)videoScrubberDidEndScrubbing:(id)arg1 ;
-(void)videoScrubber:(id)arg1 videoFramesAtTimes:(id)arg2 size:(CGSize)arg3 tolerance:(SCD_Struct_WA3)arg4 block:(/*^block*/id)arg5 ;
-(CGSize)videoScrubberThumbnailAspectRatio:(id)arg1 ;
-(BOOL)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4 ;
-(void)prepareForTransitionWithContext:(id)arg1 ;
-(id)viewForTransitionAnimationWithContext:(id)arg1 ;
-(void)finishTransitionWithView:(id)arg1 context:(id)arg2 ;
-(void)setFullscreenMode:(BOOL)arg1 ;
-(BOOL)internalRequiresTranscoding;
-(SCD_Struct_WA4)timeRangeToExport;
-(id)videoCompositionForTranscode;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)rotatingFooterView;
@end
