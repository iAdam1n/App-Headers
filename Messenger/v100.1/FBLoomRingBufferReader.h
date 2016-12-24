/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBLoomRingBufferReaderDelegate, FBLoomRingBufferReaderDataSource;
#import <Messenger/Messenger-Structs.h>
@class FBLoomFileLogWriter, FBLoomTraceManager;

@interface FBLoomRingBufferReader : NSObject {

	BOOL _isRecordingATrace;
	BOOL _enabled;
	long long _currentTraceID;
	LockFreeRingBuffer<facebook::dextr::FBLoomLogEntry, std::atomic>* _ringBuffer;
	shared_ptr<facebook::FBBlockingQueue<folly::LockFreeRingBuffer<facebook::dextr::FBLoomLogEntry, std::atomic>::Cursor> >* _wakeupQueue;
	FBLoomFileLogWriter* _logWriter;
	FBLoomTraceManager* _manager;
	id<FBLoomRingBufferReaderDelegate> _delegate;
	id<FBLoomRingBufferReaderDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<FBLoomRingBufferReaderDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBLoomRingBufferReaderDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)initWithRingBuffer:(LockFreeRingBuffer<facebook::dextr::FBLoomLogEntry, std::atomic>*)arg1 wakeupQueue:(shared_ptr<facebook::FBBlockingQueue<folly::LockFreeRingBuffer<facebook::dextr::FBLoomLogEntry, std::atomic>::Cursor> >*)arg2 traceManager:(id)arg3 ;
-(void)beginReadingRingBuffer;
-(void)setDataSource:(id<FBLoomRingBufferReaderDataSource>)arg1 ;
-(void)setDelegate:(id<FBLoomRingBufferReaderDelegate>)arg1 ;
-(id<FBLoomRingBufferReaderDataSource>)dataSource;
-(id<FBLoomRingBufferReaderDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)run:(id)arg1 ;
@end
