/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FNFPlayerAudioEngine.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FNFAudioQueue : NSObject <FNFPlayerAudioEngine> {

	OpaqueAudioQueueRef _audioQueue;
	/*^block*/id _putDataCallback;
	/*^block*/id _errorCallback;
	AudioStreamBasicDescription _asbd;
	unsigned _sampleFrameSize;
	AQBufferParameters _bufferParams;
	AudioTimeStamp _zeroTimestamp;
	OpaqueAudioQueueTimelineRef _timeline;
	unsigned long long _state;
	BOOL _hasNoMoreFramesToEnqueue;
	AQBufferState* _audioQueueBuffer[3];
	int _activeBufferIndex;
	unsigned long long _framesEnqueued;
	unsigned long long _buffersReturned;
	unsigned long long _enqueueDataCalls;
	NSObject*<OS_dispatch_queue> _internalQueue;
	float _pendingVolume;
	float _pendingVolumeRampTime;
	BOOL _deferAudioLevelSetup;
	/*^block*/id _audioLevelCallback;
	AudioQueueLevelMeterState* _levels;
	unsigned _levelSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(AQBufferParameters)_calculateBufferSizeAndPacketCountWithAsbd:(AudioStreamBasicDescription)arg1 frameSize:(unsigned)arg2 ;
-(void)setVolume:(float)arg1 rampTime:(float)arg2 ;
-(void)setAudioStreamBasicDescription:(AudioStreamBasicDescription)arg1 extraParameters:(id)arg2 putDataCallback:(/*^block*/id)arg3 errorCallback:(/*^block*/id)arg4 sampleFrameSize:(unsigned)arg5 ;
-(void)playWithStartTime:(SCD_Struct_FB25)arg1 ;
-(void)stopLoadingData;
-(void)resumeEnqueuingData;
-(void)enableLevelMeteringWithCallback:(/*^block*/id)arg1 ;
-(void)sendCurrentAudioLevelToCallback;
-(void)removeLevelMetering;
-(BOOL)_createAudioQueue;
-(void)_readDataIntoBuffer;
-(void)_stopAudio;
-(void)_removeAudioQueue;
-(void)audioQueueIsRunningCallback:(OpaqueAudioQueueRef)arg1 ;
-(void)audioQueueErrorCallback:(OpaqueAudioQueueRef)arg1 ;
-(void)audioQueueOutputCallback:(OpaqueAudioQueueRef)arg1 inBuffer:(AudioQueueBuffer*)arg2 ;
-(int)_queueState;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)reset;
-(void)stop;
-(void)pause;
-(int)_startQueue;
-(SCD_Struct_FB25)getCurrentTime;
-(void)prepareToPlay;
@end
