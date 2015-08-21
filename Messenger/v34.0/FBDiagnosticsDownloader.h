/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBDiagnosticsPowerLogsDownloadServiceDelegate.h>

@protocol FBDiagnosticsDownloaderDelegate;
@class FBDiagnosticsPowerLogsDownloadService, NSString;

@interface FBDiagnosticsDownloader : NSObject <FBDiagnosticsPowerLogsDownloadServiceDelegate> {

	FBDiagnosticsPowerLogsDownloadService* _downloadService;
	id<FBDiagnosticsDownloaderDelegate> _delegate;
	unsigned long long _requestedInterval;

}

@property (assign,nonatomic,__weak) id<FBDiagnosticsDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long requestedInterval;                             //@synthesize requestedInterval=_requestedInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequestedInterval:(unsigned long long)arg1 ;
-(void)_collectAndLogUnsentDiagnosticsDataFromSqlLogFiles:(id)arg1 ;
-(void)_collectAndReturnDiagnosticsDataFromSqlLogFiles:(id)arg1 ;
-(void)_collectDataFromSqlLogFiles:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)powerLogDownloadService:(id)arg1 didFinishWithSQLLogFiles:(id)arg2 compressedSQLFiles:(id)arg3 ;
-(void)powerLogDownloadService:(id)arg1 didFailWithError:(id)arg2 ;
-(unsigned long long)requestedInterval;
-(void)downloadDiagnosticsWithInterval:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBDiagnosticsDownloaderDelegate>)arg1 ;
-(id<FBDiagnosticsDownloaderDelegate>)delegate;
@end

