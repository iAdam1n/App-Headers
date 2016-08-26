/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoPlaybackEventListener.h>
#import <Facebook/FBComponentScrollEventListener.h>

@class FBVideoChannelPlaylistScrollBlockingEventListenerAnnouncer, FBVideoPlaybackController, UIScrollView, NSTimer, FBUserSession, NSString;

@interface FBVideoChannelPlaylistScrollBlockingController : NSObject <FBVideoPlaybackEventListener, FBComponentScrollEventListener> {

	FBVideoChannelPlaylistScrollBlockingEventListenerAnnouncer* _announcer;
	FBVideoPlaybackController* _blockingForVideoController;
	double _nextPositionToBlockTo;
	UIScrollView* _scrollView;
	double _skipInterval;
	unsigned long long _state;
	double _startedDraggingAt;
	double _remainingTimeToBlock;
	NSTimer* _scrollBlockingTimer;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(BOOL)_canAutoPlay:(id)arg1 item:(id)arg2 ;
-(void)_didFinishBlocking;
-(BOOL)_scrollViewOffsetAllowed;
-(double)_contentOffsetToTopVideoForScrollViewState:(FBScrollViewState)arg1 ;
-(void)_updateProgressBar:(id)arg1 ;
-(void)setScrollView:(id)arg1 skipInterval:(double)arg2 ;
-(void)updateActiveContainer:(id)arg1 playlistController:(id)arg2 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewWillBeginDragging:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)stop;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(BOOL)isBlocking;
@end
