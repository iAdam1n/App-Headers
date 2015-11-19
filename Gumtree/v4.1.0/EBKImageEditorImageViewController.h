/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class EBKImagePickerInternalDataAsset, UIImageView, UIView, EBKImageService, EBKImageFileManager, UIActivityIndicatorView, UIImage;

@interface EBKImageEditorImageViewController : UIViewController {

	BOOL _galleryViewEnabled;
	EBKImagePickerInternalDataAsset* _dataAsset;
	UIImageView* _imageView;
	UIView* _galleryView;
	EBKImageService* _imageService;
	EBKImageFileManager* _imageFileManager;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) EBKImagePickerInternalDataAsset * dataAsset;                         //@synthesize dataAsset=_dataAsset - In the implementation block
@property (assign,getter=isGalleryViewEnabled,nonatomic) BOOL galleryViewEnabled;                 //@synthesize galleryViewEnabled=_galleryViewEnabled - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic,__weak) UIImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UIView * galleryView;                                         //@synthesize galleryView=_galleryView - In the implementation block
@property (nonatomic,retain) EBKImageService * imageService;                                      //@synthesize imageService=_imageService - In the implementation block
@property (nonatomic,retain) EBKImageFileManager * imageFileManager;                              //@synthesize imageFileManager=_imageFileManager - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
+(id)imageEditorImageViewController;
-(void)rotate;
-(void)setImageService:(EBKImageService *)arg1 ;
-(EBKImageService *)imageService;
-(void)setImageFileManager:(EBKImageFileManager *)arg1 ;
-(EBKImageFileManager *)imageFileManager;
-(EBKImagePickerInternalDataAsset *)dataAsset;
-(void)setDataAsset:(EBKImagePickerInternalDataAsset *)arg1 ;
-(BOOL)isGalleryViewEnabled;
-(void)setUpImageAnimated:(BOOL)arg1 ;
-(void)setGalleryViewEnabled:(BOOL)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(UIImage *)image;
-(void)viewDidLoad;
-(UIImageView *)imageView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setGalleryView:(UIView *)arg1 ;
-(UIView *)galleryView;
@end

