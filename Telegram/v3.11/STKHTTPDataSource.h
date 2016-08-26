/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/STKCoreFoundationDataSource.h>

@class NSURL, NSDictionary;

@interface STKHTTPDataSource : STKCoreFoundationDataSource {

	unsigned httpStatusCode;
	long long seekStart;
	long long relativePosition;
	long long fileLength;
	int discontinuous;
	int requestSerialNumber;
	NSURL* currentUrl;
	/*^block*/id asyncUrlProvider;
	NSDictionary* httpHeaders;
	unsigned audioFileTypeHint;

}

@property (retain,readonly) NSURL * url; 
@property (readonly) unsigned httpStatusCode; 
+(unsigned)audioFileTypeHintFromMimeType:(id)arg1 ;
-(unsigned)audioFileTypeHint;
-(int)readIntoBuffer:(char*)arg1 withSize:(int)arg2 ;
-(id)eventsRunLoop;
-(id)initWithURLProvider:(/*^block*/id)arg1 ;
-(id)initWithAsyncURLProvider:(/*^block*/id)arg1 ;
-(void)openForSeek:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)length;
-(NSURL *)url;
-(long long)position;
-(id)initWithURL:(id)arg1 ;
-(void)open;
-(unsigned)httpStatusCode;
-(void)dataAvailable;
-(void)reconnect;
-(void)seekToOffset:(long long)arg1 ;
@end
