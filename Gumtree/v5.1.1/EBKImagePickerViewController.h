/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Gumtree/EBKAssetsLibraryViewControllerDelegate.h>

@class NSURL, UIColor, UIToolbar, UIBarButtonItem, EBKImageService, EBKImagePickerInternalData, EBKImageCaptureViewController, EBKImageSelectionViewController, NSArray, NSString;

@interface EBKImagePickerViewController : UIViewController <EBKAssetsLibraryViewControllerDelegate> {

	BOOL _galleryEnabled;
	BOOL _translucent;
	/*^block*/id _completionBlock;
	NSURL* _imageDirectoryURL;
	long long _maxImagesCount;
	UIColor* _galleryBorderColor;
	long long _barStyle;
	UIToolbar* _toolbar;
	UIBarButtonItem* _doneBarButtonItem;
	UIBarButtonItem* _assetsLibraryButton;
	EBKImageService* _imageService;
	EBKImagePickerInternalData* _imagePickerInternalData;
	EBKImagePickerInternalData* _imagePickerInternalDataAssetsLibrary;
	EBKImageCaptureViewController* _imageCaptureViewController;
	EBKImageSelectionViewController* _imageSelectionViewController;
	double _maxLengthImage;

}

@property (assign,nonatomic,__weak) UIToolbar * toolbar;                                                         //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * doneBarButtonItem;                                         //@synthesize doneBarButtonItem=_doneBarButtonItem - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * assetsLibraryButton;                                       //@synthesize assetsLibraryButton=_assetsLibraryButton - In the implementation block
@property (nonatomic,copy) NSURL * imageDirectoryURL;                                                            //@synthesize imageDirectoryURL=_imageDirectoryURL - In the implementation block
@property (nonatomic,retain) EBKImageService * imageService;                                                     //@synthesize imageService=_imageService - In the implementation block
@property (nonatomic,retain) EBKImagePickerInternalData * imagePickerInternalData;                               //@synthesize imagePickerInternalData=_imagePickerInternalData - In the implementation block
@property (nonatomic,retain) EBKImagePickerInternalData * imagePickerInternalDataAssetsLibrary;                  //@synthesize imagePickerInternalDataAssetsLibrary=_imagePickerInternalDataAssetsLibrary - In the implementation block
@property (assign,nonatomic,__weak) EBKImageCaptureViewController * imageCaptureViewController;                  //@synthesize imageCaptureViewController=_imageCaptureViewController - In the implementation block
@property (assign,nonatomic,__weak) EBKImageSelectionViewController * imageSelectionViewController;              //@synthesize imageSelectionViewController=_imageSelectionViewController - In the implementation block
@property (assign,nonatomic) double maxLengthImage;                                                              //@synthesize maxLengthImage=_maxLengthImage - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                                   //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) NSArray * dataAssets; 
@property (assign,nonatomic) long long maxImagesCount;                                                           //@synthesize maxImagesCount=_maxImagesCount - In the implementation block
@property (assign,getter=isGalleryEnabled,nonatomic) BOOL galleryEnabled;                                        //@synthesize galleryEnabled=_galleryEnabled - In the implementation block
@property (nonatomic,copy) UIColor * galleryBorderColor;                                                         //@synthesize galleryBorderColor=_galleryBorderColor - In the implementation block
@property (assign,nonatomic) long long barStyle;                                                                 //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;                                              //@synthesize translucent=_translucent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imagePickerViewControllerWithImageDirectoryURL:(id)arg1 maxLengthImage:(double)arg2 ;
-(BOOL)assetsLibraryViewController:(id)arg1 containsAsset:(id)arg2 ;
-(void)assetsLibraryViewController:(id)arg1 didSelectAsset:(id)arg2 ;
-(void)assetsLibraryViewController:(id)arg1 didDeselectAsset:(id)arg2 ;
-(BOOL)assetsLibraryViewController:(id)arg1 shouldSelectAsset:(id)arg2 ;
-(void)setImageService:(EBKImageService *)arg1 ;
-(EBKImageService *)imageService;
-(NSArray *)dataAssets;
-(BOOL)isGalleryEnabled;
-(void)setGalleryEnabled:(BOOL)arg1 ;
-(void)setImageDirectoryURL:(NSURL *)arg1 ;
-(void)setMaxLengthImage:(double)arg1 ;
-(EBKImageCaptureViewController *)imageCaptureViewController;
-(UIBarButtonItem *)assetsLibraryButton;
-(void)setImagePickerInternalData:(EBKImagePickerInternalData *)arg1 ;
-(EBKImagePickerInternalData *)imagePickerInternalData;
-(void)setImagePickerInternalDataAssetsLibrary:(EBKImagePickerInternalData *)arg1 ;
-(void)removeObsoleteFiles;
-(EBKImageSelectionViewController *)imageSelectionViewController;
-(BOOL)isMaxImagesCountReachedForInternalData:(id)arg1 ;
-(void)showMaxImagesCountReachedAlertView;
-(double)maxLengthImage;
-(void)handleToAssetsLibraryGroupViewControllerWithSegue:(id)arg1 ;
-(void)handleToImageCaptureViewControllerWithSegue:(id)arg1 ;
-(void)handleToImageSelectionViewControllerWithSegue:(id)arg1 ;
-(EBKImagePickerInternalData *)imagePickerInternalDataAssetsLibrary;
-(void)setImageCaptureViewController:(EBKImageCaptureViewController *)arg1 ;
-(void)takeImageAction:(id)arg1 ;
-(void)setImageSelectionViewController:(EBKImageSelectionViewController *)arg1 ;
-(long long)maxImagesCount;
-(void)setDataAssets:(NSArray *)arg1 ;
-(void)setGalleryBorderColor:(UIColor *)arg1 ;
-(void)showLibrary:(id)arg1 ;
-(void)setMaxImagesCount:(long long)arg1 ;
-(UIColor *)galleryBorderColor;
-(void)setDoneBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setAssetsLibraryButton:(UIBarButtonItem *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)isTranslucent;
-(void)viewDidLayoutSubviews;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)done:(id)arg1 ;
-(UIBarButtonItem *)doneBarButtonItem;
-(NSURL *)imageDirectoryURL;
@end

