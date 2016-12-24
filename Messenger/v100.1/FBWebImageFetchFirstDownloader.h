/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebImageDownloader.h>

@protocol FBWebImageDownloader, FBWebImageNetworkFetchFirstSpecifier;
@class FBImageDownloader, NSString;

@interface FBWebImageFetchFirstDownloader : NSObject <FBWebImageDownloader> {

	id _cacheLookupID;
	id<FBWebImageDownloader> _webImageDownloader;
	FBImageDownloader* _downloader;
	id<FBWebImageNetworkFetchFirstSpecifier> _specifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 analyticsTags:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(id)initWithWebImageDownloader:(id)arg1 downloader:(id)arg2 ;
-(void)_cancelDownloadsForNewSpecifier:(id)arg1 ;
-(void)_handleDownloadCompletionForSpecifier:(id)arg1 url:(id)arg2 image:(CGImageRef)arg3 scenePath:(id)arg4 analyticsTags:(id)arg5 queue:(id)arg6 downloadBlock:(/*^block*/id)arg7 ;
-(void)_cancelCacheLookup;
-(void)cancel;
@end
