/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBCaptureManagerDelegate.h>
#import <Messenger/MNProfilePicturePreviewDataSource.h>

@protocol MNProfilePicturePreviewDataSourceDelegate;
@class UIImage, FBCaptureManager, MNCameraPreviewLayerWrapperView, NSString;

@interface MNCameraCaptureViewController : UIViewController <FBCaptureManagerDelegate, MNProfilePicturePreviewDataSource> {

	FBCaptureManager* _captureManager;
	MNCameraPreviewLayerWrapperView* _cameraPreviewWrapperView;
	id<MNProfilePicturePreviewDataSourceDelegate> _delegate;
	UIImage* _previewImage;
	CGRect _cropRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNProfilePicturePreviewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * previewImage;                                                   //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                                                          //@synthesize cropRect=_cropRect - In the implementation block
-(void)captureManagerPreviewDidLoad:(id)arg1 ;
-(void)captureManagerSessionDidStart:(id)arg1 ;
-(void)captureManager:(id)arg1 didChangeCapturePositionTo:(long long)arg2 ;
-(CGSize)captureManagerVideoInputSize:(id)arg1 ;
-(id)addFilterToPhoto:(id)arg1 ;
-(void)captureManager:(id)arg1 didCaptureImage:(id)arg2 metadata:(id)arg3 cameraPosition:(long long)arg4 ;
-(void)captureManagerDidStartCaptureVideo:(id)arg1 ;
-(void)captureManager:(id)arg1 didCaptureVideo:(id)arg2 thumbnail:(id)arg3 cameraPosition:(long long)arg4 ;
-(void)captureManagerDidFailToCaptureVideo:(id)arg1 ;
-(void)_transformPreviewLayerForStatusBarOrientation;
-(double)_interfaceOrientationAngle;
-(void)_initCameraCaptureViewIfNecessary;
-(void)capturePreview;
-(void)togglePreviewMode;
-(id)initWithCaptureManager:(id)arg1 ;
-(CGRect)cropRect;
-(UIImage *)previewImage;
-(void)setDelegate:(id<MNProfilePicturePreviewDataSourceDelegate>)arg1 ;
-(id<MNProfilePicturePreviewDataSourceDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)tearDown;
@end

