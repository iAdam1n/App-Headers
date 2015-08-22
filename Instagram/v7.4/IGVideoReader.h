/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput;

@interface IGVideoReader : NSObject {

	AVAsset* _asset;
	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _assetReaderVideoOutput;
	AVAssetReaderTrackOutput* _assetReaderAudioOutput;

}

@property (nonatomic,retain) AVAsset * asset;                                                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVAssetReader * assetReader;                                    //@synthesize assetReader=_assetReader - In the implementation block
@property (nonatomic,retain) AVAssetReaderTrackOutput * assetReaderVideoOutput;              //@synthesize assetReaderVideoOutput=_assetReaderVideoOutput - In the implementation block
@property (nonatomic,retain) AVAssetReaderTrackOutput * assetReaderAudioOutput;              //@synthesize assetReaderAudioOutput=_assetReaderAudioOutput - In the implementation block
-(AVAssetReaderTrackOutput *)assetReaderVideoOutput;
-(AVAssetReaderTrackOutput *)assetReaderAudioOutput;
-(opaqueCMSampleBufferRef)copyNextVideoSampleBuffer;
-(opaqueCMSampleBufferRef)copyNextAudioSampleBuffer;
-(void)setAssetReaderVideoOutput:(AVAssetReaderTrackOutput *)arg1 ;
-(void)setAssetReaderAudioOutput:(AVAssetReaderTrackOutput *)arg1 ;
-(void)dealloc;
-(id)initWithAsset:(id)arg1 ;
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(void)setAssetReader:(AVAssetReader *)arg1 ;
-(AVAssetReader *)assetReader;
-(void)seekToTime:(SCD_Struct_IG45)arg1 ;
-(void)prepare;
@end
