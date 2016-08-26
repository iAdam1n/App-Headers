/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPhotoViewImageDownloadControlling.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNSecureImageRequesting;
@class MNPhotoImageRequester, NSMutableSet, FBMobileConfigContextManager, NSString;

@interface MNPhotoViewImageDownloadController : NSObject <MNPhotoViewImageDownloadControlling, FBClassProvidable> {

	MNPhotoImageRequester* _imageRequester;
	id<MNSecureImageRequesting> _secureImageRequester;
	NSMutableSet* _pendingOperations;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)configurePhotoView:(id)arg1 withPhotoViewModel:(id)arg2 size:(int)arg3 imageFlags:(unsigned long long)arg4 animated:(BOOL)arg5 keepCurrentImage:(BOOL)arg6 skipMiniPreview:(BOOL)arg7 callbackQueue:(id)arg8 successBlock:(/*^block*/id)arg9 failureBlock:(/*^block*/id)arg10 ;
-(void)clearPhotoView:(id)arg1 ;
-(id)configurePhotoView:(id)arg1 withPhotoViewModel:(id)arg2 size:(int)arg3 animated:(BOOL)arg4 ;
-(id)initWithImageRequester:(id)arg1 secureImageRequester:(id)arg2 configManager:(id)arg3 ;
-(void)_setMiniPreviewForPhotoView:(id)arg1 withPhotoViewModel:(id)arg2 ;
-(id)_startAssociatedRequestForPhotoView:(id)arg1 plainPhotoSource:(id)arg2 size:(int)arg3 imageFlags:(unsigned long long)arg4 animated:(BOOL)arg5 success:(/*^block*/id)arg6 failure:(/*^block*/id)arg7 ;
-(id)_configureAnimatedImageWithNetworkPhotoInfo:(id)arg1 photoView:(id)arg2 plainPhotoSource:(id)arg3 size:(int)arg4 animated:(BOOL)arg5 callbackQueue:(id)arg6 successBlock:(/*^block*/id)arg7 failureBlock:(/*^block*/id)arg8 ;
-(id)_startAssociatedRequestForPhotoView:(id)arg1 securePhotoSource:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)_clearImageTokenFromRequestAndPendingOps:(id)arg1 ;
-(void)_handleFetchedPhotoImage:(id)arg1 forImageRequest:(id)arg2 photoSource:(id)arg3 success:(/*^block*/id)arg4 ;
-(void)_handleFailureForImageRequest:(id)arg1 error:(id)arg2 photoSource:(id)arg3 failure:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)_cancelRequest:(id)arg1 ;
@end
