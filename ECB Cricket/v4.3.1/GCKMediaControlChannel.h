/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ECBCricketApp/GCKCastChannel.h>
#import <ECBCricketApp/GCKRequestTrackerDelegate.h>

@protocol GCKMediaControlChannelDelegate;
@class GCKRequestTracker, NSMutableArray, GCKMediaStatus;

@interface GCKMediaControlChannel : GCKCastChannel <GCKRequestTrackerDelegate> {

	long long _requestID;
	double _streamPositionUpdatedTimeIntervalSince1970;
	long long _internalStatusRequestID;
	GCKRequestTracker* _loadRequestTracker;
	GCKRequestTracker* _pauseRequestTracker;
	GCKRequestTracker* _playRequestTracker;
	GCKRequestTracker* _stopRequestTracker;
	GCKRequestTracker* _statusRequestTracker;
	GCKRequestTracker* _volumeRequestTracker;
	GCKRequestTracker* _muteRequestTracker;
	GCKRequestTracker* _seekRequestTracker;
	GCKRequestTracker* _trackStyleRequestTracker;
	GCKRequestTracker* _activeTracksRequestTracker;
	NSMutableArray* _requestTrackers;
	GCKMediaStatus* _mediaStatus;
	id<GCKMediaControlChannelDelegate> _delegate;

}

@property (nonatomic,retain) GCKMediaStatus * mediaStatus;                                    //@synthesize mediaStatus=_mediaStatus - In the implementation block
@property (assign,nonatomic,__weak) id<GCKMediaControlChannelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)createErrorWithCode:(long long)arg1 JSONObject:(id)arg2 ;
-(GCKMediaStatus *)mediaStatus;
-(long long)seekToTimeInterval:(double)arg1 ;
-(double)approximateStreamPosition;
-(long long)loadMedia:(id)arg1 autoplay:(BOOL)arg2 playPosition:(double)arg3 ;
-(void)didConnect;
-(void)didDisconnect;
-(void)didReceiveTextMessage:(id)arg1 ;
-(id)initWithNamespace:(id)arg1 ;
-(long long)loadMedia:(id)arg1 autoplay:(BOOL)arg2 playPosition:(double)arg3 activeTrackIDs:(id)arg4 customData:(id)arg5 ;
-(void)notifyMediaLoadFailedWithError:(id)arg1 ;
-(long long)pauseWithCustomData:(id)arg1 ;
-(long long)stopWithCustomData:(id)arg1 ;
-(long long)playWithCustomData:(id)arg1 ;
-(long long)seekToTimeInterval:(double)arg1 resumeState:(long long)arg2 customData:(id)arg3 ;
-(long long)setStreamVolume:(float)arg1 customData:(id)arg2 ;
-(long long)setStreamMuted:(BOOL)arg1 customData:(id)arg2 ;
-(void)processMediaStatus:(id)arg1 requestID:(long long)arg2 ;
-(void)notifyMediaLoadCompletedWithSessionID:(long long)arg1 ;
-(void)notifyRequestDidCompleteWithID:(long long)arg1 ;
-(void)notifyStatusUpdated;
-(void)notifyMetadataUpdated;
-(void)notifyDidReplaceRequestWithID:(long long)arg1 ;
-(void)notifyDidCancelRequestWithID:(long long)arg1 ;
-(long long)loadMedia:(id)arg1 ;
-(long long)loadMedia:(id)arg1 autoplay:(BOOL)arg2 ;
-(long long)loadMedia:(id)arg1 autoplay:(BOOL)arg2 playPosition:(double)arg3 customData:(id)arg4 ;
-(long long)loadMedia:(id)arg1 autoplay:(BOOL)arg2 playPosition:(double)arg3 activeTrackIDs:(id)arg4 ;
-(long long)seekToTimeInterval:(double)arg1 resumeState:(long long)arg2 ;
-(long long)setStreamVolume:(float)arg1 ;
-(long long)setStreamMuted:(BOOL)arg1 ;
-(BOOL)cancelRequestWithID:(long long)arg1 ;
-(void)setMediaStatus:(GCKMediaStatus *)arg1 ;
-(long long)setTextTrackStyle:(id)arg1 ;
-(id)mediaSessionID;
-(long long)setActiveTrackIDs:(id)arg1 ;
-(void)notifyRequestDidFailWithID:(long long)arg1 error:(id)arg2 ;
-(void)requestTracker:(id)arg1 didTimeOut:(long long)arg2 ;
-(void)requestTracker:(id)arg1 didReplace:(long long)arg2 ;
-(void)requestTracker:(id)arg1 didCancel:(long long)arg2 ;
-(long long)play;
-(void)dealloc;
-(void)setDelegate:(id<GCKMediaControlChannelDelegate>)arg1 ;
-(id)init;
-(id<GCKMediaControlChannelDelegate>)delegate;
-(long long)stop;
-(long long)pause;
-(long long)requestStatus;
@end
