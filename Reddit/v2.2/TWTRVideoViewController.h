/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Reddit/TWTRVideoPlayerScribeDelegate.h>
#import <Reddit/TWTRVideoCTAViewDelegate.h>
#import <Reddit/TWTRMediaContainerPresentable.h>

@class TWTRTweet, TWTRVideoPlaybackConfiguration, UIImage, TWTRVideoPlayerView, TWTRVideoControlsView, TWTRVideoControlsViewSynchronizer, UIView, UIGestureRecognizer, NSLayoutConstraint, NSString;

@interface TWTRVideoViewController : UIViewController <UIGestureRecognizerDelegate, TWTRVideoPlayerScribeDelegate, TWTRVideoCTAViewDelegate, TWTRMediaContainerPresentable> {

	TWTRTweet* _tweet;
	TWTRVideoPlaybackConfiguration* _playbackConfiguration;
	UIImage* _thumbnailImage;
	TWTRVideoPlayerView* _videoPlayerView;
	TWTRVideoControlsView* _videoControlsView;
	TWTRVideoControlsViewSynchronizer* _synchronizer;
	UIView* _bottomBarContainer;
	UIView* _mediaContainer;
	UIGestureRecognizer* _backgroundTapGestureRecognizer;
	UIGestureRecognizer* _videoTapGestureRecognizer;
	NSLayoutConstraint* _CTATopConstraint;
	NSLayoutConstraint* _CTABottomConstraint;
	UIView* _CTAView;

}

@property (nonatomic,readonly) TWTRTweet * tweet;                                                   //@synthesize tweet=_tweet - In the implementation block
@property (nonatomic,readonly) TWTRVideoPlaybackConfiguration * playbackConfiguration;              //@synthesize playbackConfiguration=_playbackConfiguration - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnailImage;                                            //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,readonly) TWTRVideoPlayerView * videoPlayerView;                               //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
@property (nonatomic,readonly) TWTRVideoControlsView * videoControlsView;                           //@synthesize videoControlsView=_videoControlsView - In the implementation block
@property (nonatomic,readonly) TWTRVideoControlsViewSynchronizer * synchronizer;                    //@synthesize synchronizer=_synchronizer - In the implementation block
@property (nonatomic,readonly) UIView * bottomBarContainer;                                         //@synthesize bottomBarContainer=_bottomBarContainer - In the implementation block
@property (nonatomic,readonly) UIView * mediaContainer;                                             //@synthesize mediaContainer=_mediaContainer - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * backgroundTapGestureRecognizer;                //@synthesize backgroundTapGestureRecognizer=_backgroundTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * videoTapGestureRecognizer;                     //@synthesize videoTapGestureRecognizer=_videoTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * CTATopConstraint;                               //@synthesize CTATopConstraint=_CTATopConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * CTABottomConstraint;                            //@synthesize CTABottomConstraint=_CTABottomConstraint - In the implementation block
@property (nonatomic,readonly) UIView * CTAView;                                                    //@synthesize CTAView=_CTAView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TWTRTweet *)tweet;
-(id)transitionImage;
-(CGRect)transitionImageTargetFrame;
-(void)transitionDidComplete;
-(void)willShowInMediaContainer;
-(void)didDismissInMediaContainer;
-(void)prepareVideoSynchronizer;
-(void)prepareMediaContainer;
-(void)prepareBottomBar;
-(void)prepareCallToActionView;
-(TWTRVideoPlaybackConfiguration *)playbackConfiguration;
-(void)addVideoControlsToBottomBar:(id)arg1 ;
-(id)makeCTAViewWithConfiguration:(id)arg1 ;
-(void)handleBackgroundTap;
-(void)handleVideoTap;
-(UIView *)mediaContainer;
-(TWTRVideoControlsView *)videoControlsView;
-(void)setChromeVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)bottomBarContainer;
-(UIView *)CTAView;
-(NSLayoutConstraint *)CTATopConstraint;
-(NSLayoutConstraint *)CTABottomConstraint;
-(double)aspectRatioForMediaContainer;
-(UIGestureRecognizer *)backgroundTapGestureRecognizer;
-(BOOL)backgroundGestureRecognizerShouldBegin:(id)arg1 ;
-(UIGestureRecognizer *)videoTapGestureRecognizer;
-(BOOL)videoGestureRecognizerShouldBegin:(id)arg1 ;
-(CGRect)mediaContainerTargetFrame;
-(void)videoCTAView:(id)arg1 willDeeplinkToTargetURL:(id)arg2 ;
-(id)initWithTweet:(id)arg1 playbackConfiguration:(id)arg2 previewImage:(id)arg3 ;
-(TWTRVideoControlsViewSynchronizer *)synchronizer;
-(void)prepareSubviews;
-(void)videoPlayer:(id)arg1 didPlayPercentOfMedia:(unsigned long long)arg2 playbackConfiguration:(id)arg3 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)viewDidLoad;
-(void)installGestureRecognizers;
-(void)transitionWillBegin;
-(UIImage *)thumbnailImage;
-(BOOL)isChromeVisible;
-(TWTRVideoPlayerView *)videoPlayerView;
@end
