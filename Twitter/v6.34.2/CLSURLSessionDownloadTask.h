/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/CLSURLSessionDataTask.h>
#import <Twitter/NSStreamDelegate.h>

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
-(void)setDownloadCompletionHandler:(id)arg1 ;
-(void)writeDataToStream:(id)arg1 ;
-(void)completeForError;
-(id)downloadCompletionHandler;
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)cleanup;
-(void)complete;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(id)temporaryFileURL;
@end

