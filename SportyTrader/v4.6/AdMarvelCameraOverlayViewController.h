/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIImagePickerController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <SportyTrader/AdMarvelAsynchronousImageViewDelegate.h>

@protocol AdMarvelCameraOverlayViewControllerDelegate;
@class UIPopoverController, NSURL, AdMarvelAsynchronousImageView, NSObject, AdMarvelVideoRecordingSettings, UIImageView, NSString;

@interface AdMarvelCameraOverlayViewController : UIImagePickerController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate, AdMarvelAsynchronousImageViewDelegate> {

	UIPopoverController* photoAlbumPopoverController;
	BOOL popoverBeingDisplayed;
	NSURL* overlayImageURL_;
	AdMarvelAsynchronousImageView* overlayImageView_;
	NSObject*<AdMarvelCameraOverlayViewControllerDelegate> cameraOverlayDelegate_;
	BOOL recordVideo;
	AdMarvelVideoRecordingSettings* movieSettings;
	float toolbarHeight;

}

@property (assign,nonatomic) NSObject*<AdMarvelCameraOverlayViewControllerDelegate> cameraOverlayDelegate; 
@property (assign,nonatomic) BOOL recordVideo; 
@property (nonatomic,retain) NSURL * overlayImageURL; 
@property (nonatomic,retain) UIImageView * overlayImageView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCameraOverlayDelegate:(NSObject*<AdMarvelCameraOverlayViewControllerDelegate>)arg1 ;
-(id)initWithOverlayImageURL:(id)arg1 pickerSource:(long long)arg2 videoSettings:(id)arg3 recordVideo:(BOOL)arg4 ;
-(void)setOverlayImageURL:(NSURL *)arg1 ;
-(void)setRecordVideo:(BOOL)arg1 ;
-(void)setupController:(long long)arg1 ;
-(void)cleanupAlbumPopoverController;
-(NSURL *)overlayImageURL;
-(void)setOverlayImageView:(UIImageView *)arg1 ;
-(void)screenshotAction:(id)arg1 ;
-(void)photoAlbumAction:(id)arg1 ;
-(NSObject*<AdMarvelCameraOverlayViewControllerDelegate>)cameraOverlayDelegate;
-(void)saveVideoFile:(id)arg1 ;
-(void)processCameraPicture:(id)arg1 ;
-(UIImageView *)overlayImageView;
-(id)rotateImageToPortait:(id)arg1 ;
-(void)asyncImageViewLoaded:(id)arg1 ;
-(void)asyncImageViewFailed:(id)arg1 ;
-(id)initWithOverlayImageURL:(id)arg1 ;
-(id)initWithMovieSettings:(id)arg1 ;
-(BOOL)recordVideo;
-(void)cancelAction:(id)arg1 ;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)cameraOverlayView;
@end
