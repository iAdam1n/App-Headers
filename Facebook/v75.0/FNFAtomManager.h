/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFAtomManager
@required
-(opaqueCMFormatDescriptionRef)formatDesc;
-(AudioStreamBasicDescription*)asbd;
-(id)audioStreamExtraParameters;
-(FNFFrameMetadata*)currentFrameMetadataForTrack:(long long)arg1;
-(const char*)currentFrameDataForTrack:(long long)arg1;
-(void)advanceFrameForTrack:(long long)arg1;
-(FNFSeekStatus*)seekToPosition:(SCD_Struct_FB100)arg1;
-(SCD_Struct_FB100*)videoTrackDuration;
-(unsigned long long)timescale;
-(void)createNewDataBlockDistributors;
-(BOOL)shouldResetAssetToBeginning;
-(BOOL)containsAudio;
-(BOOL)trackHasMoreFrames:(long long)arg1 isFullyDownloaded:(BOOL)arg2;
-(id)dataBlockDistributorForTrack:(long long)arg1;
-(void)parseAtomForTrack:(long long)arg1;
-(SCD_Struct_FB100*)timeLoadedForOffset:(unsigned long long)arg1 track:(long long)arg2;
-(SCD_Struct_FB100*)nextAbsoluteAudioTime;
-(unsigned long long)offsetForTimeInSeconds:(float)arg1 track:(long long)arg2;
-(SCD_Struct_FB100*)currentVideoPts;
-(BOOL)offsetIsAtLeastLargestOffset:(unsigned long long)arg1 track:(long long)arg2;
-(unsigned long long)currentOffsetForTrack:(long long)arg1;
-(unsigned long long)moovAtomSize;
-(BOOL)parsedHeaders;
-(BOOL)parsedHeaderForTrack:(long long)arg1;
-(void)setDelegate:(id)arg1;
-(SCD_Struct_FB100*)duration;

@end
