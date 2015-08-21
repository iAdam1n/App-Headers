/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:52 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNVideoControllerDelegate.h>
#import <Messenger/FBCameraPreviewViewDelegate.h>

@protocol MNCameraPreviewViewControllerDelegate;
@class FBCameraPreviewView, MNVideoController, MNVideoPlayingView, MNPreviewPhotoEditingViewController, NSString;

@interface MNCameraPreviewViewController : UIViewController <MNVideoControllerDelegate, FBCameraPreviewViewDelegate> {

	FBCameraPreviewView* _previewView;
	MNVideoController* _videoPlayController;
	MNVideoPlayingView* _videoPlayingView;
	MNPreviewPhotoEditingViewController* _photoEditingControlsViewController;
	BOOL _isFullscreen;
	id<MNCameraPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNCameraPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) BOOL isFullscreen;                                  //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cameraPreviewViewDidPressSendButton:(id)arg1 ;
-(void)cameraPreviewViewDidPressRetakeButton:(id)arg1 ;
-(void)videoController:(id)arg1 didCreateNewPlayerItemWithPlayer:(id)arg2 ;
-(void)videoController:(id)arg1 player:(id)arg2 withItem:(id)arg3 didChangeRateFrom:(float)arg4 to:(float)arg5 isAtEndOfVideo:(BOOL)arg6 ;
-(void)videoController:(id)arg1 disassociatePlayer:(id)arg2 ;
-(id)renderEditsOntoImage:(id)arg1 ;
-(void)_initVideoPlayControllerIfNecessary;
-(void)_initVideoPlayingViewIfNecessary;
-(void)previewPhotoCapture:(id)arg1 ;
-(void)previewVideoCapture:(id)arg1 ;
-(void)setUpPhotoEditingControls;
-(void)setCaptureInterfaceRotationAngle:(double)arg1 ;
-(BOOL)isFullscreen;
-(void)setDelegate:(id<MNCameraPreviewViewControllerDelegate>)arg1 ;
-(id<MNCameraPreviewViewControllerDelegate>)delegate;
-(void)reset;
-(void)loadView;
-(void)setIsFullscreen:(BOOL)arg1 ;
@end

