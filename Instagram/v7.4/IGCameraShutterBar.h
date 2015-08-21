/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:11 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol IGCameraShutterBarDelegate;
@class UIButton, UIScrollView, IGCameraLibraryButton, IGSimpleButton, NSString;

@interface IGCameraShutterBar : UIView <UIScrollViewDelegate> {

	BOOL _shouldChangeModeAfterDeceleration;
	BOOL _videoRecordingEnabled;
	BOOL _cameraInteractionEnabled;
	UIButton* _videoCaptureButton;
	UIButton* _videoBackButton;
	id<IGCameraShutterBarDelegate> _delegate;
	long long _cameraMode;
	UIScrollView* _scrollView;
	UIButton* _leftBlockerView;
	UIButton* _rightBlockerView;
	UIButton* _photoCaptureButton;
	IGCameraLibraryButton* _photoLibraryButton;
	IGCameraLibraryButton* _videoLibraryButton;
	IGSimpleButton* _modeHandle;

}

@property (assign,nonatomic) BOOL videoRecordingEnabled;                                  //@synthesize videoRecordingEnabled=_videoRecordingEnabled - In the implementation block
@property (assign,nonatomic) BOOL libraryImportEnabled; 
@property (assign,nonatomic) BOOL cameraInteractionEnabled;                               //@synthesize cameraInteractionEnabled=_cameraInteractionEnabled - In the implementation block
@property (nonatomic,retain) UIButton * videoCaptureButton;                               //@synthesize videoCaptureButton=_videoCaptureButton - In the implementation block
@property (nonatomic,retain) UIButton * videoBackButton;                                  //@synthesize videoBackButton=_videoBackButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGCameraShutterBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long cameraMode;                                        //@synthesize cameraMode=_cameraMode - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                   //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIButton * leftBlockerView;                                  //@synthesize leftBlockerView=_leftBlockerView - In the implementation block
@property (nonatomic,retain) UIButton * rightBlockerView;                                 //@synthesize rightBlockerView=_rightBlockerView - In the implementation block
@property (nonatomic,retain) UIButton * photoCaptureButton;                               //@synthesize photoCaptureButton=_photoCaptureButton - In the implementation block
@property (nonatomic,retain) IGCameraLibraryButton * photoLibraryButton;                  //@synthesize photoLibraryButton=_photoLibraryButton - In the implementation block
@property (nonatomic,retain) IGCameraLibraryButton * videoLibraryButton;                  //@synthesize videoLibraryButton=_videoLibraryButton - In the implementation block
@property (nonatomic,retain) IGSimpleButton * modeHandle;                                 //@synthesize modeHandle=_modeHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)leftBlockerView;
-(UIButton *)rightBlockerView;
-(IGCameraLibraryButton *)photoLibraryButton;
-(UIButton *)photoCaptureButton;
-(IGSimpleButton *)modeHandle;
-(UIButton *)videoBackButton;
-(UIButton *)videoCaptureButton;
-(IGCameraLibraryButton *)videoLibraryButton;
-(void)updateModeIndicator;
-(void)onOrientationChange;
-(void)onModeHandleTapped;
-(void)onPhotoLibraryButtonTapped;
-(void)onPhotoCaptureButtonTapped;
-(void)onVideoBackButtonTapped;
-(void)onVideoBackButtonLongPressed:(id)arg1 ;
-(void)onVideoCaptureButtonTouchedDown;
-(void)onVideoCaptureButtonTouchedUpInside;
-(void)onVideoCaptureButtonTouchedUpOutside;
-(void)onVideoCaptureButtonDraggedOutside;
-(void)onVideoCaptureButtonTouchCancelled;
-(void)onVideoLibraryButtonTapped;
-(BOOL)cameraInteractionEnabled;
-(void)setCameraInteractionEnabled:(BOOL)arg1 scrollEnabled:(BOOL)arg2 ;
-(BOOL)videoRecordingEnabled;
-(void)updateModeFromScrollPosition;
-(void)setCameraInteractionEnabled:(BOOL)arg1 ;
-(void)scrollToCurrentMode;
-(void)setVideoRecordingEnabled:(BOOL)arg1 ;
-(void)setLibraryImportEnabled:(BOOL)arg1 ;
-(BOOL)libraryImportEnabled;
-(void)showVideoBackButton:(BOOL)arg1 ;
-(void)setVideoBackButtonSelected:(BOOL)arg1 ;
-(void)setVideoCaptureButton:(UIButton *)arg1 ;
-(void)setVideoBackButton:(UIButton *)arg1 ;
-(void)setLeftBlockerView:(UIButton *)arg1 ;
-(void)setRightBlockerView:(UIButton *)arg1 ;
-(void)setPhotoCaptureButton:(UIButton *)arg1 ;
-(void)setPhotoLibraryButton:(IGCameraLibraryButton *)arg1 ;
-(void)setVideoLibraryButton:(IGCameraLibraryButton *)arg1 ;
-(void)setModeHandle:(IGSimpleButton *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGCameraShutterBarDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<IGCameraShutterBarDelegate>)delegate;
-(id)initWithType:(long long)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setCameraMode:(long long)arg1 ;
-(long long)cameraMode;
@end

