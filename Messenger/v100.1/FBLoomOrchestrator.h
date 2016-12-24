/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBLoomFileLogPermissionSource.h>
#import <Messenger/FBLoomFileManagerDelegate.h>
#import <Messenger/FBLoomUploadManagerDelegate.h>
#import <Messenger/FBLoomNetworkingSource.h>

@protocol FBNetworkDispatch;
@class FBLoomFileManager, FBLoomTraceManager, FBLoomRingBufferWriter, FBLoomRingBufferReader, FBLoomUploadManager, FBLoomConfigurationManager;

@interface FBLoomOrchestrator : NSObject <FBLoomFileLogPermissionSource, FBLoomFileManagerDelegate, FBLoomUploadManagerDelegate, FBLoomNetworkingSource> {

	mutex _mutex;
	BOOL _hasValidUser;
	BOOL _isEmployee;
	id<FBNetworkDispatch> _networkDispatch;
	FBLoomFileManager* _fileManager;
	FBLoomTraceManager* _traceManager;
	FBLoomRingBufferWriter* _ringBufferWriter;
	FBLoomRingBufferReader* _ringBufferReader;
	FBLoomUploadManager* _uploadManager;
	FBLoomConfigurationManager* _configManager;

}
+(id)sharedInstance;
-(void)addTraceProvider:(id)arg1 ;
-(void)userSessionDidUpdateWithValidUser:(BOOL)arg1 isEmployee:(BOOL)arg2 networkDispatcher:(id)arg3 ;
-(void)removeTraceProvider:(id)arg1 ;
-(void)addNetworkProviderFromSingleton;
-(void)activateAllTracingIfInCTScan;
-(void)addTraceController:(id)arg1 ;
-(void)activateAllTracingPermanently;
-(BOOL)loomFileLogWriterHasPermissionToWriteUserInfoToDisk:(id)arg1 ;
-(void)loomFileManagerDidTrimTraceFiles:(id)arg1 ;
-(void)loomFileLogWriter:(id)arg1 didWriteTraceFileAtPath:(id)arg2 ;
-(void)manager:(id)arg1 withTraceFile:(id)arg2 didSuccessfullyUpload:(id)arg3 ;
-(void)manager:(id)arg1 withTraceFile:(id)arg2 didFail:(id)arg3 ;
-(id)networkDispatchForSender:(id)arg1 ;
-(BOOL)hasPermissionToUploadUserInfoForSender:(id)arg1 ;
-(BOOL)hasPermissionToDownloadUserConfiguration:(id)arg1 ;
-(BOOL)bypassBandwidthThrottlingForSender:(id)arg1 ;
-(id)init;
@end
