/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFPlaylistLoaderDelegate, FNFTimerManager, OS_dispatch_queue, FNFTimer;
@class FNFAssetResourceLoader, NSObject, NSURL, NSData, FNFAssetResourceLoadingRequest, FNFDashPlaylistData, FNFAdaptiveBitrateSelector;

@interface FNFDashPlaylistLoader : NSObject {

	id<FNFPlaylistLoaderDelegate> _delegate;
	FNFAssetResourceLoader* _resourceLoader;
	id<FNFTimerManager> _timerMananger;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSURL* _mpdURL;
	NSData* _initialMpdData;
	FNFAssetResourceLoadingRequest* _currentResourceLoaderRequestForPlaylist;
	id<FNFTimer> _playlistRefreshTimer;
	FNFDashPlaylistData* _playlistData;
	int _consecutiveStaleUpdates;
	int _consecutiveStaleUpdatesThreshold;
	int _segmentsFromEndToStartUpdate;
	int _segmentsFromEndToStartPrefetch;
	int _unfetchedSegmentCap;
	int _unfetchedSegmentsAfterCap;
	unsigned _unfetchedSegmentsCapHitCount;
	BOOL _firstPlaylistFetch;
	FNFAdaptiveBitrateSelector* _abrSelector;
	BOOL _liveMidstreamSwitchEnabled;
	int _pushInitialSegmentCount;
	int _pushContinuousSegmentCount;
	BOOL _async;
	unsigned long long _publishFrameTimeMS;

}
-(id)initWithMpdUrl:(id)arg1 mpdData:(id)arg2 playlistData:(id)arg3 resourceLoader:(id)arg4 abrSelector:(id)arg5 segmentsFromEndToStartPrefetch:(int)arg6 segmentsFromEndToStartUpdate:(int)arg7 unfetchedSegmentCap:(int)arg8 unfetchedSegmentsAfterCap:(int)arg9 staleMpdUpdatesThreshold:(int)arg10 pushInitialSegmentCount:(int)arg11 pushContinuousSegmentCount:(int)arg12 ;
-(unsigned)unfetchedSegmentCapHitCount;
-(double)publishFrameTimeMS;
-(BOOL)isStreamDry;
-(void)handleInlinedManifest;
-(void)forcePlaylistUpdate;
-(void)_forTestingMakeSynchronous;
-(void)_cancelPlaylistTimer;
-(void)_handleMpdData:(id)arg1 ;
-(void)_updatePlaylist;
-(id)_baseMutableStringForPushParams:(id)arg1 ;
-(id)_addPushParamsForFirstRequest:(id)arg1 ;
-(id)_addPushParamsForContinuousRequests:(id)arg1 ;
-(void)_playlistLoadingRequestCallback:(id)arg1 error:(id)arg2 ;
-(void)_validateTrackListsForMpd:(id)arg1 ;
-(void)_markAvailableQualitiesForMpd:(id)arg1 ;
-(id)_selectFragmentedVideoTrackFromMpd:(id)arg1 ;
-(BOOL)_isValidEnoughToContinueWithVideoTrack:(id)arg1 type:(long long)arg2 ;
-(void)_markCbrSelectedQuality:(id)arg1 ;
-(void)_extractMetadataFromAudioTrack:(id)arg1 ;
-(id)_selectSegmentedVideoTrackFromMpd:(id)arg1 ;
-(void)_validateVideoTrack:(id)arg1 audioTrack:(id)arg2 ;
-(void)_addEntriesFromTrackMetadata:(id)arg1 track:(long long)arg2 ;
-(BOOL)live;
-(void)_forTestingOverrideTimerManager:(id)arg1 ;
-(void)_forTestingEnableLiveMidstreamSwitch;
-(unsigned)segmentsFromEndToStart;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)resume;
-(void)pause;
-(BOOL)isSegmented;
-(id)playlistData;
-(id)resourceLoader;
@end
