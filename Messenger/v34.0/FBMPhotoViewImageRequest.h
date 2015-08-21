/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMPhotoViewImageRequestingCancelable.h>

@class FBMPhotoViewImageDownloadController, FBMPhotoView, NSString;

@interface FBMPhotoViewImageRequest : NSObject <FBMPhotoViewImageRequestingCancelable> {

	FBMPhotoViewImageDownloadController* _photoViewImageDownloadController;
	BOOL _canceled;
	id _imageRequestToken;
	FBMPhotoView* _photoView;

}

@property (nonatomic,retain) id imageRequestToken;                         //@synthesize imageRequestToken=_imageRequestToken - In the implementation block
@property (assign,nonatomic,__weak) FBMPhotoView * photoView;              //@synthesize photoView=_photoView - In the implementation block
@property (assign,getter=isCanceled,nonatomic) BOOL canceled;              //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhotoViewImageDownloadController:(id)arg1 photoView:(id)arg2 ;
-(id)imageRequestToken;
-(void)setImageRequestToken:(id)arg1 ;
-(FBMPhotoView *)photoView;
-(void)setPhotoView:(FBMPhotoView *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)isCanceled;
@end

