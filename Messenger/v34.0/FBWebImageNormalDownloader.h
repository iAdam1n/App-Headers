/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBWebImageNetworkDownloaderHelperDelegate.h>
#import <Messenger/FBWebImageDownloader.h>

@class FBImageDownloader, FBWebImageNetworkDownloaderHelper, NSString;

@interface FBWebImageNormalDownloader : NSObject <FBWebImageNetworkDownloaderHelperDelegate, FBWebImageDownloader> {

	FBImageDownloader* _downloader;
	FBWebImageNetworkDownloaderHelper* _downloaderHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDownloader:(id)arg1 ;
-(void)updateExistingDownloadToken:(id)arg1 withScenePath:(id)arg2 ;
-(id)startDownloadForSpecifier:(id)arg1 downloadNode:(id)arg2 withScenePath:(id)arg3 callPath:(id)arg4 ;
-(id)webImageDownloadResponseForDownloadResponse:(id)arg1 downloadNode:(id)arg2 specifier:(id)arg3 isLast:(BOOL)arg4 ;
-(void)cancelDownloadToken:(id)arg1 ;
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 callPath:(id)arg3 downloadBlock:(/*^block*/id)arg4 ;
-(void)_handleDownloadProgress:(double)arg1 node:(id)arg2 ;
-(void)_completeDownload:(id)arg1 node:(id)arg2 specifier:(id)arg3 ;
-(void)cancel;
@end

