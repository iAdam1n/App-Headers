//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGActor.h"

#import "ASWatcher.h"
#import "TGFileUploadActor.h"

@class ASHandle, NSData, NSInputStream, NSMutableArray, NSMutableData, NSString, TGNetworkWorkerGuard;

@interface TGFileUploadActor : TGActor <TGFileUploadActor, ASWatcher>
{
    struct vector<FilePart, std::allocator<FilePart>> _partsToUpload;
    _Bool _isEncrypted;
    NSData *_encryptionKey;
    NSData *_encryptionIv;
    NSMutableData *_encryptionRunningIv;
    long long _encryptionKeyFingerprint;
    NSData *_thumbnail;
    int _thumbnailWidth;
    int _thumbnailHeight;
    int _width;
    int _height;
    int _fileSize;
    _Bool _uploadInband;
    _Bool _useBigFileParts;
    struct CC_MD5state_st _md5;
    id _workerToken;
    TGNetworkWorkerGuard *_worker;
    int _partCount;
    ASHandle *_actionHandle;
    NSInputStream *_is;
    long long _fileId;
    NSString *_fileExtension;
    NSMutableArray *_cancelTokenList;
}

+ (id)genericPath;
@property(retain, nonatomic) NSMutableArray *cancelTokenList; // @synthesize cancelTokenList=_cancelTokenList;
@property(retain, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(nonatomic) int partCount; // @synthesize partCount=_partCount;
@property(nonatomic) long long fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) NSInputStream *is; // @synthesize is=_is;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)actorMessageReceived:(id)arg1 messageType:(id)arg2 message:(id)arg3;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)cancel;
- (void)filePartUploadFailed:(int)arg1;
- (void)filePartUploadSuccess:(int)arg1;
- (void)sendAnyPart;
- (void)beginWithWorker:(id)arg1;
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
