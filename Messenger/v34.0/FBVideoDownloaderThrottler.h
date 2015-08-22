/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBVideoDownloaderThrottlerDelegate, FBClientProxyThrottlingDelegate;
#import <Messenger/Messenger-Structs.h>
@class NSURL, FBClientProxyLogger, NSString;

@interface FBVideoDownloaderThrottler : NSObject {

	NSURL* _URL;
	FBClientProxyLogger* _logger;
	NSString* _videoID;
	NSString* _dataKey;
	id<FBVideoDownloaderThrottlerDelegate> _downloaderDelegate;
	int _throttlerType;
	unsigned long long _resumeBufferTimeThreshold;
	unsigned long long _pauseBufferTimeThreshold;
	unsigned long long _minResumeOffset;
	double _videoThrottlingMinAtomPrSize;
	unsigned long long _videoThrottlingMinAtomByteSize;
	double _vbrTimeCompensationAdjustment;
	double _maxVbrTimeCompensationBuffer;
	double _singleFetchMultiplier;
	double _requestStartTime;
	double _requestStopTime;
	double _videoTimeAfterStop;
	double _lastVideoTimeLeft;
	double _stallPredictionThreshold;
	double _secondsFetchedBeforePlaying;
	unsigned long long _videoThrottlingMinThrottlingSize;
	BOOL _stallOnlyWhenLoaded;
	BOOL _stallOnlyWhenPlayerLikelyToStallToo;
	BOOL _alignLengthToBlockBoundaryOnThrottling;
	long long _aggressiveCancellationMaxState;
	unsigned long long _operationMode;
	id<FBClientProxyThrottlingDelegate> _clientProxyThrottlingDelegate;

}

@property (assign,nonatomic,__weak) id<FBClientProxyThrottlingDelegate> clientProxyThrottlingDelegate;              //@synthesize clientProxyThrottlingDelegate=_clientProxyThrottlingDelegate - In the implementation block
@property (getter=isRangeRequestType,nonatomic,readonly) BOOL rangeRequestType; 
@property (getter=isPauseResumeType,nonatomic,readonly) BOOL pauseResumeType; 
-(unsigned long long)_calculateAtomSize:(unsigned long long)arg1 ;
-(unsigned long long)_calculateMinInitialFetchSizeWithAtomSize:(unsigned long long)arg1 byteRate:(double)arg2 ;
-(BOOL)_stallRecoveryAndAvoidanceWithPlayerOffset:(unsigned long long)arg1 currentNetworkOffset:(unsigned long long)arg2 minInitialFetchSize:(unsigned long long)arg3 playerData:(SCD_Struct_FB498)arg4 stallRecoveryOrPrevention:(/*^block*/id)arg5 ;
-(void)_markDownloadStoppedOrNoResumedWithVideoTimeLeft:(double)arg1 stallPredictionActive:(BOOL)arg2 ;
-(unsigned long long)_alignLengthToBlockBoundary:(unsigned long long)arg1 ;
-(void)_markDownloadStarted;
-(BOOL)_stallPredictionActiveWithNetworkOffset:(unsigned long long)arg1 currentPlayerOffset:(unsigned long long)arg2 byteRate:(double)arg3 ;
-(BOOL)_calculateIfWeAreLikelyToStallWithOffset:(unsigned long long)arg1 videoTimeLeft:(double)arg2 ;
-(id)initWithURL:(id)arg1 logger:(id)arg2 videoID:(id)arg3 downloaderDelegate:(id)arg4 experimentManager:(id)arg5 dataKey:(id)arg6 ;
-(BOOL)isRangeRequestType;
-(BOOL)isPauseResumeType;
-(void)setClientProxyThrottlingDelegate:(id<FBClientProxyThrottlingDelegate>)arg1 ;
-(void)playingCancelled;
-(void)throttleUsingPauseResumeWithOffset:(unsigned long long)arg1 ;
-(unsigned long long)calculateThrottlingRangeRequestWithOffset:(unsigned long long)arg1 ;
-(id<FBClientProxyThrottlingDelegate>)clientProxyThrottlingDelegate;
-(void)playing;
@end
