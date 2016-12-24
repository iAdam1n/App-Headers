/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNCrossProcessDiskReading.h>
#import <Messenger/MNCrossProcessDiskBatchReading.h>

@protocol OS_dispatch_queue;
@class MNFoundationFileSystemWrapper, FBLoggedInUserCryptoEngine, NSURL, NSFileManager, NSObject, NSString;

@interface MNCrossProcessDiskReader : NSObject <MNCrossProcessDiskReading, MNCrossProcessDiskBatchReading> {

	MNFoundationFileSystemWrapper* _fileSystemWrapper;
	FBLoggedInUserCryptoEngine* _cryptoEngine;
	NSURL* _directoryURLForDirectoryScanning;
	NSURL* _fileURLForSingleFileReading;
	NSFileManager* _fileManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)readBatchDataFromDisk;
-(id)initForDirectoryReadingWithFileManager:(id)arg1 fileSystemWrapper:(id)arg2 cryptoEngine:(id)arg3 directoryURL:(id)arg4 queue:(id)arg5 ;
-(id)initForSingleFileReadingWithFileManager:(id)arg1 fileSystemWrapper:(id)arg2 cryptoEngine:(id)arg3 fileURL:(id)arg4 queue:(id)arg5 ;
-(id)_initForSingleFileReadingWithFileManager:(id)arg1 fileSystemWrapper:(id)arg2 cryptoEngine:(id)arg3 singleFileURL:(id)arg4 directoryScanningURL:(id)arg5 queue:(id)arg6 ;
-(id)_readDataFromDiskAtURL:(id)arg1 ;
-(id)readDataFromDisk;
@end
