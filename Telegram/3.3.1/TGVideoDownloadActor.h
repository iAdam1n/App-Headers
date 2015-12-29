//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASActor.h"

#import "ASWatcher.h"

@class ASHandle, NSData, NSDictionary, NSMutableData, NSOutputStream, NSString, TGNetworkWorkerGuard, TGVideoMediaAttachment;

@interface TGVideoDownloadActor : ASActor <ASWatcher>
{
    struct map<int, TGVideoPartData, std::less<int>, std::allocator<std::pair<const int, TGVideoPartData>>> _downloadingParts;
    vector_e44c44be _explicitDownloadParts;
    NSData *_encryptionKey;
    NSData *_encryptionIv;
    NSMutableData *_runningEncryptionIv;
    int _finalSize;
    id _worker1Token;
    id _worker2Token;
    TGNetworkWorkerGuard *_worker1;
    TGNetworkWorkerGuard *_worker2;
    int _nextWorker;
    _Bool _reportedProgress;
    int _datacenterId;
    int _videoFileLength;
    int _downloadedFileSize;
    int _lastReportedProgress;
    int _takenTimeSamples;
    float _progress;
    ASHandle *_actionHandle;
    NSString *_storeFilePath;
    NSString *_tempStoreFilePath;
    NSString *_thumbnailFilePath;
    NSOutputStream *_fileStream;
    long long _videoId;
    long long _accessHash;
    TGVideoMediaAttachment *_videoAttachment;
    double _averageDownloadSpeed;
    NSDictionary *_additionalOptions;
}

+ (id)localPathForVideoUrl:(id)arg1;
+ (_Bool)isVideoDownloaded:(id)arg1 url:(id)arg2;
+ (id)rewrittenUrlForLocalPath:(id)arg1;
+ (void)rewriteLocalFilePath:(id)arg1 remoteUrl:(id)arg2;
+ (id)genericPath;
@property(retain, nonatomic) NSDictionary *additionalOptions; // @synthesize additionalOptions=_additionalOptions;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) int takenTimeSamples; // @synthesize takenTimeSamples=_takenTimeSamples;
@property(nonatomic) double averageDownloadSpeed; // @synthesize averageDownloadSpeed=_averageDownloadSpeed;
@property(nonatomic) int lastReportedProgress; // @synthesize lastReportedProgress=_lastReportedProgress;
@property(nonatomic) _Bool reportedProgress; // @synthesize reportedProgress=_reportedProgress;
@property(nonatomic) int downloadedFileSize; // @synthesize downloadedFileSize=_downloadedFileSize;
@property(retain, nonatomic) TGVideoMediaAttachment *videoAttachment; // @synthesize videoAttachment=_videoAttachment;
@property(nonatomic) int videoFileLength; // @synthesize videoFileLength=_videoFileLength;
@property(nonatomic) int datacenterId; // @synthesize datacenterId=_datacenterId;
@property(nonatomic) long long accessHash; // @synthesize accessHash=_accessHash;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSOutputStream *fileStream; // @synthesize fileStream=_fileStream;
@property(retain, nonatomic) NSString *thumbnailFilePath; // @synthesize thumbnailFilePath=_thumbnailFilePath;
@property(retain, nonatomic) NSString *tempStoreFilePath; // @synthesize tempStoreFilePath=_tempStoreFilePath;
@property(retain, nonatomic) NSString *storeFilePath; // @synthesize storeFilePath=_storeFilePath;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)actorMessageReceived:(id)arg1 messageType:(id)arg2 message:(id)arg3;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)watcherJoined:(id)arg1 options:(id)arg2 waitingInActorQueue:(_Bool)arg3;
- (void)cancel;
- (void)cancelRequests;
- (void)videoPartDownloadFailed:(int)arg1 length:(int)arg2;
- (void)filePartDownloadFailed:(id)arg1 offset:(int)arg2 length:(int)arg3;
- (void)videoPartDownloadSuccess:(int)arg1 length:(int)arg2 data:(id)arg3;
- (void)filePartDownloadSuccess:(id)arg1 offset:(int)arg2 length:(int)arg3 data:(id)arg4;
- (void)reportProgress:(_Bool)arg1;
- (void)filePartDownloadProgress:(id)arg1 offset:(int)arg2 length:(int)arg3 packetLength:(int)arg4 progress:(float)arg5;
- (void)videoPartDownloadProgress:(int)arg1 packetLength:(int)arg2 progress:(float)arg3;
- (void)downloadFileParts;
- (void)assignAdditionalWorker:(id)arg1;
- (void)downloadFilePartsWithWorker:(id)arg1;
- (void)printParts;
- (void)recordTimeSample:(int)arg1 startTime:(double)arg2;
- (int)preferredPartSize;
- (void)execute:(id)arg1;
- (void)prepare:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
