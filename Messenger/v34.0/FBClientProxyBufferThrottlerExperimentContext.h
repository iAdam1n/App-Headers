/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBClientProxyBufferThrottlerExperimentContext : FBExperimentContext {

	BOOL _stallOnlyWhenLoaded;
	BOOL _stallOnlyWhenPlayerLikelyToStallToo;
	BOOL _useResourceLoader;
	BOOL _allowPrepare;
	BOOL _hlsSupported;
	BOOL _shouldCancelDownloadsDirectly;
	BOOL _shouldCancelAssetLoading;
	BOOL _cancelNetworkOnDirectCancel;
	BOOL _truncateCacheOnContinuation;
	BOOL _passthruPrefetchCancel;
	BOOL _alignLengthToBlockBoundaryOnThrottling;
	int _throttlerType;
	double _ratio;
	double _fileSizeAtomCompensationBuffer;
	long long _bytesAtomCompensationBuffer;
	double _vbrTimeCompensationBuffer;
	double _maxVbrTimeCompensationBuffer;
	double _singleFetchMultiplier;
	long long _stallPredictionThreshold;
	long long _secondsFetchedBeforePlaying;
	long long _secondsFetchedBeforePlayingCell;
	long long _aggressiveCancellationMaxState;
	unsigned long long _closeTimeout;
	long long _minSingleNetworkFetchByteSize;

}

@property (nonatomic,readonly) double ratio;                                             //@synthesize ratio=_ratio - In the implementation block
@property (nonatomic,readonly) double fileSizeAtomCompensationBuffer;                    //@synthesize fileSizeAtomCompensationBuffer=_fileSizeAtomCompensationBuffer - In the implementation block
@property (nonatomic,readonly) long long bytesAtomCompensationBuffer;                    //@synthesize bytesAtomCompensationBuffer=_bytesAtomCompensationBuffer - In the implementation block
@property (nonatomic,readonly) double vbrTimeCompensationBuffer;                         //@synthesize vbrTimeCompensationBuffer=_vbrTimeCompensationBuffer - In the implementation block
@property (nonatomic,readonly) double maxVbrTimeCompensationBuffer;                      //@synthesize maxVbrTimeCompensationBuffer=_maxVbrTimeCompensationBuffer - In the implementation block
@property (nonatomic,readonly) double singleFetchMultiplier;                             //@synthesize singleFetchMultiplier=_singleFetchMultiplier - In the implementation block
@property (nonatomic,readonly) int throttlerType;                                        //@synthesize throttlerType=_throttlerType - In the implementation block
@property (nonatomic,readonly) long long stallPredictionThreshold;                       //@synthesize stallPredictionThreshold=_stallPredictionThreshold - In the implementation block
@property (nonatomic,readonly) long long secondsFetchedBeforePlaying;                    //@synthesize secondsFetchedBeforePlaying=_secondsFetchedBeforePlaying - In the implementation block
@property (nonatomic,readonly) long long secondsFetchedBeforePlayingCell;                //@synthesize secondsFetchedBeforePlayingCell=_secondsFetchedBeforePlayingCell - In the implementation block
@property (nonatomic,readonly) BOOL stallOnlyWhenLoaded;                                 //@synthesize stallOnlyWhenLoaded=_stallOnlyWhenLoaded - In the implementation block
@property (nonatomic,readonly) BOOL stallOnlyWhenPlayerLikelyToStallToo;                 //@synthesize stallOnlyWhenPlayerLikelyToStallToo=_stallOnlyWhenPlayerLikelyToStallToo - In the implementation block
@property (nonatomic,readonly) BOOL useResourceLoader;                                   //@synthesize useResourceLoader=_useResourceLoader - In the implementation block
@property (nonatomic,readonly) BOOL allowPrepare;                                        //@synthesize allowPrepare=_allowPrepare - In the implementation block
@property (nonatomic,readonly) BOOL hlsSupported;                                        //@synthesize hlsSupported=_hlsSupported - In the implementation block
@property (nonatomic,readonly) long long aggressiveCancellationMaxState;                 //@synthesize aggressiveCancellationMaxState=_aggressiveCancellationMaxState - In the implementation block
@property (nonatomic,readonly) BOOL shouldCancelDownloadsDirectly;                       //@synthesize shouldCancelDownloadsDirectly=_shouldCancelDownloadsDirectly - In the implementation block
@property (nonatomic,readonly) BOOL shouldCancelAssetLoading;                            //@synthesize shouldCancelAssetLoading=_shouldCancelAssetLoading - In the implementation block
@property (nonatomic,readonly) BOOL cancelNetworkOnDirectCancel;                         //@synthesize cancelNetworkOnDirectCancel=_cancelNetworkOnDirectCancel - In the implementation block
@property (nonatomic,readonly) unsigned long long closeTimeout;                          //@synthesize closeTimeout=_closeTimeout - In the implementation block
@property (nonatomic,readonly) BOOL truncateCacheOnContinuation;                         //@synthesize truncateCacheOnContinuation=_truncateCacheOnContinuation - In the implementation block
@property (nonatomic,readonly) BOOL passthruPrefetchCancel;                              //@synthesize passthruPrefetchCancel=_passthruPrefetchCancel - In the implementation block
@property (nonatomic,readonly) BOOL alignLengthToBlockBoundaryOnThrottling;              //@synthesize alignLengthToBlockBoundaryOnThrottling=_alignLengthToBlockBoundaryOnThrottling - In the implementation block
@property (nonatomic,readonly) long long minSingleNetworkFetchByteSize;                  //@synthesize minSingleNetworkFetchByteSize=_minSingleNetworkFetchByteSize - In the implementation block
+(id)experimentName;
+(id)parameterConfigurations;
+(BOOL)allowUserInterfaceIdiom:(long long)arg1 ;
-(double)fileSizeAtomCompensationBuffer;
-(long long)bytesAtomCompensationBuffer;
-(double)vbrTimeCompensationBuffer;
-(double)maxVbrTimeCompensationBuffer;
-(double)singleFetchMultiplier;
-(int)throttlerType;
-(long long)stallPredictionThreshold;
-(long long)secondsFetchedBeforePlaying;
-(long long)secondsFetchedBeforePlayingCell;
-(BOOL)stallOnlyWhenLoaded;
-(BOOL)stallOnlyWhenPlayerLikelyToStallToo;
-(BOOL)useResourceLoader;
-(BOOL)allowPrepare;
-(BOOL)hlsSupported;
-(long long)aggressiveCancellationMaxState;
-(BOOL)shouldCancelDownloadsDirectly;
-(BOOL)shouldCancelAssetLoading;
-(BOOL)cancelNetworkOnDirectCancel;
-(unsigned long long)closeTimeout;
-(BOOL)truncateCacheOnContinuation;
-(BOOL)passthruPrefetchCancel;
-(BOOL)alignLengthToBlockBoundaryOnThrottling;
-(long long)minSingleNetworkFetchByteSize;
-(double)ratio;
@end
