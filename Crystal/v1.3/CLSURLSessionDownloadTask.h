/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:51:08 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/AA3738EF-C276-423D-BBB1-85BEAAD70331/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Crystal/CLSURLSessionDataTask.h>
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
-(id)init;
-(void)dealloc;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)complete;
-(void)cleanup;
-(id)temporaryFileURL;
-(void)setDownloadCompletionHandler:(id)arg1 ;
-(id)downloadCompletionHandler;
@end
