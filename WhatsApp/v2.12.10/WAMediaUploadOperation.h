/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAMediaUploadOperationBase.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSString, NSDate, NSURLConnection, NSMutableData;

@interface WAMediaUploadOperation : WAMediaUploadOperationBase <NSURLConnectionDelegate> {

	NSString* _fileName;
	NSDate* _startDate;
	NSDate* _httpUploadStartDate;
	NSURLConnection* _urlConnection;
	BOOL _isExecuting;
	BOOL _isFinished;
	NSString* _uploadURL;
	NSString* _uploadIp;
	NSString* _uploadHost;
	NSMutableData* _postData;
	NSMutableData* _receiveData;
	NSString* _mediaPath;
	unsigned long long _fileSize;
	long long _bodySize;
	long long _tailSize;
	int _uploadAttemt;
	NSString* _fileHash;
	NSString* _origHash;

}

@property (retain) NSString * fileHash;                             //@synthesize fileHash=_fileHash - In the implementation block
@property (retain) NSString * origHash;                             //@synthesize origHash=_origHash - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)willTruncateMediaAt:(id)arg1 uploadingOnly:(unsigned long long*)arg2 ;
+(void)promptUserIfNecessaryToTruncateVideoAt:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)uploadRequestFailedWithError:(id)arg1 ;
-(void)uploadRequestFinishedWithResult:(id)arg1 ;
-(id)hashOfMedia;
-(void)reallyStartUpload;
-(void)setOrigHash:(NSString *)arg1 ;
-(NSString *)origHash;
-(void)initiateTransfer;
-(void)checkUploadRequestFailedWithError:(id)arg1 ;
-(void)checkUploadRequestFinishedWithResult:(id)arg1 ;
-(void)reportFieldStatsWithResult:(int)arg1 ;
-(void)startHTTPUploadFrom:(long long)arg1 ip:(id)arg2 ;
-(void)checkUploadProgress;
-(void)cancel;
-(void)dealloc;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(NSString *)fileHash;
-(void)setFileHash:(NSString *)arg1 ;
@end
