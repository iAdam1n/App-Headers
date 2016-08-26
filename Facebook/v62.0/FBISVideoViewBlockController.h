/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBExpandableBlockController.h>
#import <Facebook/FBCanvasAudioManagerListener.h>
#import <Facebook/FBVideoPlaybackEventListener.h>

@class FBUserSession, FBInstantShoppingDisplayContext, FBCanvasVideoViewNode, FBVideoOverlayPluginView, FBVideoViewManager, FBVideoPlaybackController, FBISVideoViewBlock, NSString;

@interface FBISVideoViewBlockController : FBExpandableBlockController <FBCanvasAudioManagerListener, FBVideoPlaybackEventListener> {

	FBUserSession* _session;
	FBInstantShoppingDisplayContext* _displayContext;
	FBCanvasVideoViewNode* _videoViewNode;
	FBVideoOverlayPluginView* _videoControls;
	FBVideoViewManager* _videoViewManager;
	FBVideoPlaybackController* _videoController;

}

@property (nonatomic,retain) FBVideoPlaybackController * videoController;              //@synthesize videoController=_videoController - In the implementation block
@property (nonatomic,retain) FBISVideoViewBlock * storyBlock; 
@property (nonatomic,retain) FBVideoViewManager * videoViewManager;                    //@synthesize videoViewManager=_videoViewManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)collapsedBlockRenderableLayoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(void)didGainInteractiveFocus;
-(void)didLoseInteractiveFocus;
-(CGRect)contentFrameForFramesetter:(id)arg1 ;
-(FBVideoViewManager *)videoViewManager;
-(void)setVideoViewManager:(FBVideoViewManager *)arg1 ;
-(BOOL)blockCanRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(void)_fireFullScreenIntentWithGoingToFullScreen:(BOOL)arg1 ;
-(void)willExpandWithAnimationConfiguration:(SCD_Struct_FB92)arg1 ;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB92)arg1 ;
-(BOOL)wantsRotation;
-(void)canvasAudioManager:(id)arg1 didChangeMuteState:(BOOL)arg2 ;
-(id)blockRenderable;
-(void)cleanup;
-(FBVideoPlaybackController *)videoController;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
@end
