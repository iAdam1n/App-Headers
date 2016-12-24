/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPCallStateMachineModelView.h>

@protocol SKPOutboundFullscreenCallVideoViewDelegate, SKPPreviewVideoView, SKPPreviewVideo;
@class UIView, NSArray;

@interface SKPOutboundFullscreenCallVideoView : SKPCallStateMachineModelView {

	BOOL _showVideo;
	id<SKPOutboundFullscreenCallVideoViewDelegate> _delegate;
	UIView*<SKPPreviewVideoView> _videoView;
	NSArray* _dynamicConstraints;
	id<SKPPreviewVideo> _video;
	long long _activeCamera;

}

@property (nonatomic,retain) UIView*<SKPPreviewVideoView> videoView;                                      //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) NSArray * dynamicConstraints;                                                //@synthesize dynamicConstraints=_dynamicConstraints - In the implementation block
@property (nonatomic,retain) id<SKPPreviewVideo> video;                                                   //@synthesize video=_video - In the implementation block
@property (assign,nonatomic) long long activeCamera;                                                      //@synthesize activeCamera=_activeCamera - In the implementation block
@property (assign,nonatomic) BOOL showVideo;                                                              //@synthesize showVideo=_showVideo - In the implementation block
@property (assign,nonatomic,__weak) id<SKPOutboundFullscreenCallVideoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)observedCallStateMachineKeyPaths;
-(void)refreshDueToChangeInCallStateMachineProperty:(id)arg1 change:(id)arg2 ;
-(void)setActiveCamera:(long long)arg1 ;
-(long long)activeCamera;
-(void)updateVideoView;
-(void)updateRotationWithOrientation:(long long)arg1 ;
-(void)setShowVideo:(BOOL)arg1 ;
-(BOOL)showVideo;
-(BOOL)shouldShowFullscreenPreviewVideo;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SKPOutboundFullscreenCallVideoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id<SKPOutboundFullscreenCallVideoViewDelegate>)delegate;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)commonInit;
-(UIView*<SKPPreviewVideoView>)videoView;
-(void)setVideoView:(UIView*<SKPPreviewVideoView>)arg1 ;
-(void)setVideo:(id<SKPPreviewVideo>)arg1 ;
-(id<SKPPreviewVideo>)video;
-(NSArray *)dynamicConstraints;
-(void)setDynamicConstraints:(NSArray *)arg1 ;
@end
