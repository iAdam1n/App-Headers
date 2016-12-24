/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/AVAsynchronousKeyValueLoading.h>
#import <Messenger/FNFAVAsset.h>
#import <Messenger/FNFAVPlayerItem.h>
#import <Messenger/FNFAssetForPlayer.h>

@protocol AVAsynchronousKeyValueLoadingFNFAVAssetFNFAVPlayerItemFNFAssetForPlayerFNFInfoForLoopableAsset;
@class NSArray, FBKVOController, NSObject, NSString, AVAudioMix;

@interface FNFLoopingAsset : NSObject <AVAsynchronousKeyValueLoading, FNFAVAsset, FNFAVPlayerItem, FNFAssetForPlayer> {

	SCD_Struct_FB25 _playbackTime;
	SCD_Struct_FB25 _duration;
	NSArray* _loadedTimeRanges;
	BOOL _usingBackup;
	FBKVOController* _observation;
	int _loopCount;
	NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset> _originalAsset;
	NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset> _backupAsset;
	SCD_Struct_FB25 _videoRealDuration;

}

@property (nonatomic,retain) NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset> originalAsset;              //@synthesize originalAsset=_originalAsset - In the implementation block
@property (nonatomic,retain) NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset> backupAsset;                //@synthesize backupAsset=_backupAsset - In the implementation block
@property (nonatomic,readonly) int loopCount;                                                                                                                                  //@synthesize loopCount=_loopCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB25 videoRealDuration;                                                                                                              //@synthesize videoRealDuration=_videoRealDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,copy,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@property (nonatomic,readonly) SCD_Struct_FB25 maxBufferTime; 
@property (nonatomic,readonly) SCD_Struct_FB25 minBufferTime; 
-(id)initWithAssetBlock:(/*^block*/id)arg1 ;
-(opaqueCMFormatDescriptionRef)formatDesc;
-(AudioStreamBasicDescription)asbd;
-(id)audioStreamExtraParameters;
-(void)addErrorToLog:(id)arg1 shouldStopPlayback:(BOOL)arg2 ;
-(BOOL)trackHasMoreFrames:(long long)arg1 ;
-(FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1 ;
-(const char*)currentFrameDataForTrack:(long long)arg1 ;
-(void)advanceFrameForTrack:(long long)arg1 ;
-(void)updatePlaybackTime:(SCD_Struct_FB25)arg1 ;
-(BOOL)shouldPauseForStallingWithNextCheckCallback:(/*^block*/id)arg1 ;
-(BOOL)shouldRestartAfterStalling;
-(BOOL)shouldBufferVideoAsSoonAsPossible;
-(BOOL)seekToPosition:(SCD_Struct_FB25)arg1 ;
-(BOOL)resetAssetToBeginningIfNeeded;
-(void)playbackPauseRequested;
-(SCD_Struct_FB25)timeAfterSeek;
-(id)debugDetails;
-(BOOL)decompressedFramebuffer;
-(SCD_Struct_FB25)maxBufferTime;
-(SCD_Struct_FB25)minBufferTime;
-(void)requestTimeLoadedUpdate;
-(void)_loadedTimeRangeChanged:(id)arg1 ;
-(BOOL)containsTrack:(long long)arg1 ;
-(void)setBackupAsset:(NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset>)arg1 ;
-(NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset>)backupAsset;
-(void)afterLoadingOriginalAsset:(/*^block*/id)arg1 keys:(id)arg2 ;
-(id)_activeAsset;
-(void)_loopAssetIfLastFrameForTrack:(long long)arg1 ;
-(FNFFrameMetadata)_calculateOffset:(FNFFrameMetadata)arg1 ;
-(id)orignalAsset;
-(BOOL)usingBackUp;
-(SCD_Struct_FB25)videoRealDuration;
-(void)dealloc;
-(SCD_Struct_FB25)duration;
-(SCD_Struct_FB25)currentTime;
-(id)asset;
-(long long)status;
-(int)loopCount;
-(NSArray *)loadedTimeRanges;
-(void)setOriginalAsset:(NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset>)arg1 ;
-(NSObject*<AVAsynchronousKeyValueLoading>*<FNFAVAsset>*<FNFAVPlayerItem>*<FNFAssetForPlayer>*<FNFInfoForLoopableAsset>)originalAsset;
-(id)resourceLoader;
-(id)accessLog;
-(SCD_Struct_FB25)videoDuration;
-(void)setAudioMix:(AVAudioMix *)arg1 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isPlaybackLikelyToKeepUp;
-(BOOL)isPlaybackBufferFull;
-(void)playbackStarted;
-(void)addOutput:(id)arg1 ;
-(CGAffineTransform)preferredTransform;
-(AVAudioMix *)audioMix;
-(void)cancelLoading;
@end
