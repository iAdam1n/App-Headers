/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSpotlightImageCreating.h>

@protocol MNAuthenticationManager, MNSpotlightImageCaching, OS_dispatch_queue;
@class FBImageDownloader, MNBatchProfileImageFetcher, MNCDNProfileImageDownloader, MNUserStore, MNThreadImageManager, NSObject, NSString;

@interface MNSpotlightImageCreator : NSObject <MNSpotlightImageCreating> {

	FBImageDownloader* _imageDownloader;
	MNBatchProfileImageFetcher* _batchProfileImageFetcher;
	MNCDNProfileImageDownloader* _cdnProfileImageFetcher;
	id<MNAuthenticationManager> _authenticationManager;
	MNUserStore* _userStore;
	MNThreadImageManager* _threadImageManager;
	id<MNSpotlightImageCaching> _cache;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageDownloader:(id)arg1 batchProfileImageFetcher:(id)arg2 cdnProfileImageFetcher:(id)arg3 authenticationManager:(id)arg4 userStore:(id)arg5 threadImageManager:(id)arg6 imageCache:(id)arg7 dispatchQueue:(id)arg8 ;
-(void)createImageForUser:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)createImagesForUsers:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)createImageForGroupThread:(id)arg1 withParticipants:(id)arg2 callbackQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_performCompletionBlock:(/*^block*/id)arg1 result:(id)arg2 ;
-(void)_handleFetchImagesWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_fetchImageForGroupThread:(id)arg1 participants:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_fetchImageForGroupThread:(id)arg1 participants:(id)arg2 currentUser:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_fetchCurrentUserWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_downloadImageWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_downloadImageWithFbid:(id)arg1 fbid:(id)arg2 profileImageSize:(unsigned long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_createGroupImageWithIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_handleBatchImagesFetchRequestResult:(id)arg1 participants:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end
