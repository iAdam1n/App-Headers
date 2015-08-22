/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBInvalidating.h>
#import <Messenger/FBImageDownloadLogger.h>
#import <Messenger/FBStreamingImageResponseHandlerDelegate.h>
#import <Messenger/FBImageDownloaderRequestManagerDelegate.h>
#import <Messenger/FBImageStreamingService.h>

@protocol FBImageDownloaderCache;
@class FBImageDownloaderRequestManager, NSString;

@interface FBImageStreamer : NSObject <FBInvalidating, FBImageDownloadLogger, FBStreamingImageResponseHandlerDelegate, FBImageDownloaderRequestManagerDelegate, FBImageStreamingService> {

	id<FBImageDownloaderCache> _imageCache;
	FBImageDownloaderRequestManager* _requestManager;
	BOOL _adjustPartialCache;
	FBStreamingFlagsManager* _desiredImageFlagsForUrls;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)logFinishWithType:(unsigned long long)arg1 ;
-(void)clearAllImageCache:(/*^block*/id)arg1 ;
-(void)imageDownloadAdded:(id)arg1 ;
-(void)allImageDownloadsRemovedForURL:(id)arg1 ;
-(id)streamImageWithURL:(id)arg1 desiredImageFlag:(unsigned long long)arg2 imageFlagsToBeNotified:(unsigned long long)arg3 scenePath:(id)arg4 priority:(long long)arg5 callPath:(id)arg6 options:(unsigned long long)arg7 queue:(id)arg8 streamingBlock:(/*^block*/id)arg9 ;
-(void)cancelStreamingForToken:(id)arg1 ;
-(void)updateScenePath:(id)arg1 andPriority:(long long)arg2 forToken:(id)arg3 ;
-(/*^block*/id)_createResponseHandlerFactoryBlockForURL:(id)arg1 withPartialData:(id)arg2 ;
-(BOOL)_handleStreamingCachedImage:(id)arg1 withDownloadResult:(unsigned long long)arg2 forDownload:(id)arg3 ;
-(id)initWithNetworker:(id)arg1 imageCache:(id)arg2 configuration:(id)arg3 scenePathAnnouncer:(id)arg4 adjustPartialCache:(BOOL)arg5 ;
-(unsigned long long)maxDesiredFlagForURL:(id)arg1 ;
-(void)reachedMaxDesiredFlagForURL:(id)arg1 result:(id)arg2 isLastFlag:(BOOL)arg3 ;
-(void)invalidate;
-(BOOL)isValid;
@end
