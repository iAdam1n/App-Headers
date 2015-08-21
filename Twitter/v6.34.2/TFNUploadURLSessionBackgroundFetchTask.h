/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNURLSessionBackgroundSessionTask.h>

@class NSURLRequest, NSURL;

@interface TFNUploadURLSessionBackgroundFetchTask : TFNURLSessionBackgroundSessionTask {

	NSURLRequest* _request;
	NSURL* _sourceFileURL;

}

@property (nonatomic,readonly) NSURLRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSURL * sourceFileURL;               //@synthesize sourceFileURL=_sourceFileURL - In the implementation block
-(void)URLSessionTaskDidComplete:(id)arg1 withData:(id)arg2 temporaryFileURL:(id)arg3 error:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)URLSessionUploadTaskDidComplete:(id)arg1 withData:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithURLRequest:(id)arg1 sourceFileURL:(id)arg2 identifier:(id)arg3 supportsBackgroundURLSession:(BOOL)arg4 ;
-(NSURL *)sourceFileURL;
-(NSURLRequest *)request;
@end

