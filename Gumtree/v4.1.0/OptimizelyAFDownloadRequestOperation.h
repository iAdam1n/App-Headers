/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/OptimizelyAFHTTPRequestOperation.h>

@protocol OS_dispatch_queue;
@class NSError, NSString, NSObject;

@interface OptimizelyAFDownloadRequestOperation : OptimizelyAFHTTPRequestOperation {

	NSError* _fileError;
	id _responseObject;
	BOOL _shouldOverwrite;
	BOOL _shouldResume;
	BOOL _deleteTempFileOnCancel;
	NSString* _targetPath;
	long long _totalContentLength;
	long long _offsetContentLength;
	NSObject*<OS_dispatch_queue> _progressiveDownloadCallbackQueue;
	NSString* _tempPath;
	long long _totalBytesReadPerDownload;
	/*^block*/id _progressiveDownloadProgress;

}

@property (retain) NSString * targetPath;                                                                //@synthesize targetPath=_targetPath - In the implementation block
@property (assign) BOOL shouldOverwrite;                                                                 //@synthesize shouldOverwrite=_shouldOverwrite - In the implementation block
@property (readonly) BOOL shouldResume;                                                                  //@synthesize shouldResume=_shouldResume - In the implementation block
@property (getter=isDeletingTempFileOnCancel) BOOL deleteTempFileOnCancel;                               //@synthesize deleteTempFileOnCancel=_deleteTempFileOnCancel - In the implementation block
@property (assign) long long totalContentLength;                                                         //@synthesize totalContentLength=_totalContentLength - In the implementation block
@property (assign) long long offsetContentLength;                                                        //@synthesize offsetContentLength=_offsetContentLength - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> progressiveDownloadCallbackQueue;              //@synthesize progressiveDownloadCallbackQueue=_progressiveDownloadCallbackQueue - In the implementation block
@property (nonatomic,retain) NSString * tempPath;                                                        //@synthesize tempPath=_tempPath - In the implementation block
@property (assign,nonatomic) long long totalBytesReadPerDownload;                                        //@synthesize totalBytesReadPerDownload=_totalBytesReadPerDownload - In the implementation block
@property (nonatomic,copy) id progressiveDownloadProgress;                                               //@synthesize progressiveDownloadProgress=_progressiveDownloadProgress - In the implementation block
+(id)md5StringForString:(id)arg1 ;
+(id)cacheFolder;
+(id)acceptableStatusCodes;
-(id)responseObject;
-(NSString *)tempPath;
-(BOOL)updateByteStartRangeForRequest;
-(BOOL)shouldResume;
-(unsigned long long)fileSizeForPath:(id)arg1 ;
-(NSString *)targetPath;
-(void)setProgressiveDownloadProgress:(id)arg1 ;
-(BOOL)isDeletingTempFileOnCancel;
-(BOOL)deleteTempFileWithError:(id*)arg1 ;
-(BOOL)shouldOverwrite;
-(void)setTotalBytesReadPerDownload:(long long)arg1 ;
-(void)setOffsetContentLength:(long long)arg1 ;
-(void)setTotalContentLength:(long long)arg1 ;
-(long long)totalBytesReadPerDownload;
-(id)progressiveDownloadProgress;
-(NSObject*<OS_dispatch_queue>)progressiveDownloadCallbackQueue;
-(long long)offsetContentLength;
-(long long)totalContentLength;
-(id)initWithRequest:(id)arg1 targetPath:(id)arg2 shouldResume:(BOOL)arg3 ;
-(void)setProgressiveDownloadProgressBlock:(/*^block*/id)arg1 ;
-(void)setProgressiveDownloadCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTargetPath:(NSString *)arg1 ;
-(void)setShouldOverwrite:(BOOL)arg1 ;
-(void)setDeleteTempFileOnCancel:(BOOL)arg1 ;
-(void)setTempPath:(NSString *)arg1 ;
-(id)error;
-(void)dealloc;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)pause;
@end

