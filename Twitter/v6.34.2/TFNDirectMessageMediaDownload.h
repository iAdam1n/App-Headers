/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TIPImageFetchDelegate.h>

@class TIPImageFetchOperation, TFNDownload, NSString;

@interface TFNDirectMessageMediaDownload : NSObject <TIPImageFetchDelegate> {

	/*^block*/id _completion;
	CGSize _size;
	long long _contentMode;
	TIPImageFetchOperation* _fetchOperation;
	TFNDownload* _download;

}

@property (nonatomic,readonly) BOOL hasDownload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2 fromSource:(long long)arg3 ;
-(void)imageFetchOperation:(id)arg1 didFailToLoadFinalImage:(id)arg2 ;
-(BOOL)hasDownload;
-(void)startDownloadWithAccount:(id)arg1 url:(id)arg2 size:(CGSize)arg3 contentMode:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_downloadDidChange;
-(void)dealloc;
-(void)cancelDownload;
@end

