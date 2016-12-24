/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/CLSURLSessionDataTask.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSOutputStream, NSURL, NSString;

@interface CLSURLSessionDownloadTask : CLSURLSessionDataTask <NSStreamDelegate> {

	/*^block*/id _downloadCompletionHandler;
	NSOutputStream* _outputStream;
	NSURL* _targetURL;

}

@property (nonatomic,copy) id downloadCompletionHandler;              //@synthesize downloadCompletionHandler=_downloadCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)writeDataToStream:(id)arg1 ;
-(void)completeForError;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)cleanup;
-(void)complete;
-(id)downloadCompletionHandler;
-(void)setDownloadCompletionHandler:(id)arg1 ;
-(id)temporaryFileURL;
@end
