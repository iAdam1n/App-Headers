//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGImageDataSource : NSObject
{
}

+ (void)enqueueImageProcessingBlock:(CDUnknownBlockType)arg1;
+ (void)enumerateDataSources:(CDUnknownBlockType)arg1;
+ (void)registerDataSource:(id)arg1;
+ (id)_dataSourceList;
- (void)cancelTaskById:(id)arg1;
- (id)loadAttributeSyncForUri:(id)arg1 attribute:(id)arg2;
- (id)loadDataAsyncWithUri:(id)arg1 progress:(CDUnknownBlockType)arg2 partialCompletion:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)loadDataSyncWithUri:(id)arg1 canWait:(_Bool)arg2 acceptPartialData:(_Bool)arg3 asyncTaskId:(id *)arg4 progress:(CDUnknownBlockType)arg5 partialCompletion:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (_Bool)canHandleAttributeUri:(id)arg1;
- (_Bool)canHandleUri:(id)arg1;

@end

