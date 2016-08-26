/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoPlaylistPlayerDataSource.h>
#import <Facebook/FBVideoPlaylistPlayerDelegate.h>

@protocol FBVideoChannelPlaylistPlaybackControllerDelegate, FBVideoFromViewDelegate, FBFullScreenVideoViewControlling, FBVideoPlaylistPlayer;
@class FBVideoPlayerComponentStatefulView, UIViewController, FBVideoChannelPlaylistController, FBVideoChannelFeedToolbox, CKComponentHostingView, NSString;

@interface FBVideoChannelPlaylistPlaybackController : NSObject <FBVideoPlaylistPlayerDataSource, FBVideoPlaylistPlayerDelegate> {

	id<FBVideoChannelPlaylistPlaybackControllerDelegate> _delegate;
	FBVideoPlayerComponentStatefulView* _entryStatefulView;
	id<FBVideoFromViewDelegate> _fromViewDelegate;
	UIViewController*<FBFullScreenVideoViewControlling> _fullScreenVideoViewController;
	SCD_Struct_FB139 _fullscreenConfig;
	FBVideoChannelPlaylistController* _playlistController;
	id<FBVideoPlaylistPlayer> _playlistPlayer;
	unsigned long long _state;
	FBVideoChannelFeedToolbox* _toolbox;
	SCD_Struct_FB140 _watchAndScrollConfig;
	CKComponentHostingView* _hostingViewForStatefulViewCreation;
	/*^block*/id _didDismissBlock;
	/*^block*/id _configureVideoFullscreenControllerBlock;
	FBVideoPlayerComponentStatefulView* _playingStatefulView;

}

@property (nonatomic,readonly) FBVideoPlayerComponentStatefulView * playingStatefulView;              //@synthesize playingStatefulView=_playingStatefulView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)playlistPlayer:(id)arg1 statefulViewForVideoID:(id)arg2 forAutoAdvance:(BOOL)arg3 ;
-(id)playlistPlayer:(id)arg1 videoCreationStoryForVideoID:(id)arg2 ;
-(id)playlistPlayer:(id)arg1 trackingCodesForVideoID:(id)arg2 ;
-(FBVideoPlayerComponentStatefulView *)playingStatefulView;
-(id)playlistPlayer:(id)arg1 videoAfterVideoID:(id)arg2 requireAutoPlay:(BOOL)arg3 ;
-(id)playlistPlayer:(id)arg1 videoBeforeVideoID:(id)arg2 ;
-(void)playlistPlayer:(id)arg1 didStartPlayingStatefulView:(id)arg2 ;
-(void)playlistPlayerDidFinishCurrentPlaylistItem:(id)arg1 ;
-(BOOL)playlistPlayerShouldShowUpNext:(id)arg1 ;
-(id)initWithPlaylistController:(id)arg1 entryStatefulView:(id)arg2 playlistPlaybackControllerDelegate:(id)arg3 fromViewDelegate:(id)arg4 didDismissBlock:(/*^block*/id)arg5 configureVideoFullscreenControllerBlock:(/*^block*/id)arg6 toolbox:(id)arg7 ;
-(BOOL)prepareFullScreenWithConfig:(SCD_Struct_FB139)arg1 ;
-(id)fullscreenPlaylistPlaybackViewController;
-(id)playingIndexPath;
-(void)exitWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_enterFullscreenPreparedState;
-(BOOL)_enterFullscreenState;
-(BOOL)_enterWatchAndScrollStateWithDidTapBlock:(/*^block*/id)arg1 ;
-(void)_enterIdleState;
-(BOOL)_canAutoPlayPlaylistItemAtRow:(long long)arg1 ;
-(id)_autoplayVideoIndexPathAfter:(id)arg1 ;
-(id)_getStatefulViewFromDataSourceAt:(unsigned long long)arg1 ;
-(BOOL)enterFullScreen;
-(BOOL)enterWatchAndScrollWithConfig:(SCD_Struct_FB140)arg1 didTapWNSBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(BOOL)isDismissable;
@end
