//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASWatcher.h"

@class ASHandle, NSMutableData, NSString, SMetaDisposable, TGDataItem, TGOggOpusWriter;

@interface TGOpusAudioRecorder : NSObject <ASWatcher>
{
    TGDataItem *_tempFileItem;
    TGOggOpusWriter *_oggWriter;
    NSMutableData *_audioBuffer;
    NSString *_liveUploadPath;
    SMetaDisposable *_currentAudioSession;
    int _recorderId;
    ASHandle *_actionHandle;
}

+ (id)processingQueue;
@property(nonatomic) int recorderId; // @synthesize recorderId=_recorderId;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (double)currentDuration;
- (id)stopRecording:(double *)arg1 liveData:(id *)arg2;
- (void)_processBuffer:(const struct AudioBuffer *)arg1;
- (void)record;
- (void)_endAudioSession;
- (void)_beginAudioSession;
- (void)cleanup;
- (void)dealloc;
- (id)initWithFileEncryption:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
