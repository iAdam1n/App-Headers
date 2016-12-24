/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFTimeLoadedDelegate;
#import <SolitaireFree/SolitaireFree-Structs.h>
@class NSArray;

@interface FNFBufferSizeDecider : NSObject {

	double _fetchBufferSizeInSeconds;
	double _fetchMultiplier;
	double _unstallMultiplier;
	double _unstallBufferSizeInSeconds;
	double _stallBufferSizeInSeconds;
	id<FNFTimeLoadedDelegate> _delegate;
	NSArray* _loadedTimeRanges;
	double _firstFetchSizeInSeconds;
	SCD_Struct_AS22 _playbackTime;
	SCD_Struct_AS22 _timeAfterSeek;

}

@property (assign,nonatomic,__weak) id<FNFTimeLoadedDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * loadedTimeRanges;                      //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
@property (assign,nonatomic) SCD_Struct_AS22 playbackTime;                           //@synthesize playbackTime=_playbackTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_AS22 timeAfterSeek;                          //@synthesize timeAfterSeek=_timeAfterSeek - In the implementation block
@property (nonatomic,readonly) double firstFetchSizeInSeconds;                       //@synthesize firstFetchSizeInSeconds=_firstFetchSizeInSeconds - In the implementation block
-(id)initWithFirstFetchSizeInSeconds:(double)arg1 fetchBufferSizeInSeconds:(double)arg2 fetchBufferMultiplier:(double)arg3 unstallBufferMultiplier:(double)arg4 unstallBufferSizeInSeconds:(double)arg5 stallBufferSizeInSeconds:(double)arg6 ;
-(double)firstFetchSizeInSeconds;
-(void)requestTimeLoadedUpdate;
-(BOOL)shouldStall;
-(BOOL)shouldUnstall;
-(SCD_Struct_AS22)timeAfterSeek;
-(void)resetPlaybackTimeAndTimeLoaded;
-(float)timeLoadedInSeconds;
-(BOOL)updateTimeLoadedWithLoadedVideoTime:(SCD_Struct_AS22)arg1 videoFullyDownloaded:(BOOL)arg2 loadedAudioTime:(SCD_Struct_AS22)arg3 audioFullyDownloaded:(BOOL)arg4 ;
-(BOOL)updateTimeLoadedWithLoadedVideoTime:(SCD_Struct_AS22)arg1 videoFullyDownloaded:(BOOL)arg2 ;
-(BOOL)shouldFetch;
-(float)timeToLoadInSeconds;
-(SCD_Struct_AS22)addFetchBufferToTime:(SCD_Struct_AS22)arg1 ;
-(BOOL)hasLoadedTime:(SCD_Struct_AS22)arg1 ;
-(void)setTimeAfterSeek:(SCD_Struct_AS22)arg1 ;
-(BOOL)_updateTimeLoaded:(SCD_Struct_AS22)arg1 fullyLoaded:(BOOL)arg2 ;
-(SCD_Struct_AS22)timeLoaded;
-(void)setDelegate:(id<FNFTimeLoadedDelegate>)arg1 ;
-(id)description;
-(id<FNFTimeLoadedDelegate>)delegate;
-(NSArray *)loadedTimeRanges;
-(SCD_Struct_AS22)playbackTime;
-(void)setPlaybackTime:(SCD_Struct_AS22)arg1 ;
@end
