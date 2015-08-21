/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@class MNPhotoImageRequester, NSMutableSet, NSString;

@interface FBMPhotoViewImageDownloadController : NSObject <FBClassProvidable> {

	MNPhotoImageRequester* _imageRequester;
	NSMutableSet* _pendingOperations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithImageRequester:(id)arg1 ;
-(id)configurePhotoView:(id)arg1 withPhotoViewModel:(id)arg2 size:(int)arg3 animated:(BOOL)arg4 callbackQueue:(id)arg5 successBlock:(/*^block*/id)arg6 ;
-(id)_startAssociatedRequestForPhotoView:(id)arg1 photoViewModel:(id)arg2 size:(int)arg3 animated:(BOOL)arg4 success:(/*^block*/id)arg5 ;
-(id)_configureAnimatedImageWithNetworkPhotoInfo:(id)arg1 photoView:(id)arg2 withPhotoViewModel:(id)arg3 size:(int)arg4 animated:(BOOL)arg5 callbackQueue:(id)arg6 successBlock:(/*^block*/id)arg7 ;
-(void)_clearImageTokenFromRequestAndPendingOps:(id)arg1 ;
-(id)configurePhotoView:(id)arg1 withPhotoViewModel:(id)arg2 size:(int)arg3 animated:(BOOL)arg4 ;
-(void)dealloc;
-(void)_cancelRequest:(id)arg1 ;
@end

