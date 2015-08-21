/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBMediaPickerLibraryControllerDelegate.h>
#import <Messenger/FBMediaGalleryViewControllerDelegate.h>
#import <Messenger/FBMediaPickerVideoPlayerViewControllerDelegate.h>
#import <Messenger/FBMediaSourceChooserDelegate.h>
#import <Messenger/FBMediaSourceChooserLabelDelegate.h>
#import <Messenger/FBPopoverControllerDelegate.h>
#import <Messenger/FBCropViewControllerDelegate.h>
#import <Messenger/FBComposerQuickCameraViewControllerDelegate.h>
#import <Messenger/FBCameraComponentViewControllerDelegate.h>
#import <Messenger/FBCameraComponentCaptureDelegate.h>

@protocol FBMediaGridViewControllerDelegate;
@class FBCropViewController, FBNumericalScenePathContext, FBMediaSourceChooserLabel, FBMediaSourceChooser, FBMediaPickerLibraryController, FBMediaImageManager, FBPhotoAsset, NSString, UILabel, UIView, FBUnifiedMediaGalleryExperimentContext, UIButton, FBMediaGalleryViewController, FBMediaPickerNavigationItemManager, FBMediaPickerVideoPlayerViewController, FBComposerQuickCameraViewController, SPAccessPhotoPermissionPromptView, UIImageView, FBPopoverController, FBMediaPickerSession;

@interface FBMediaGridViewController : UIViewController <FBMediaPickerLibraryControllerDelegate, FBMediaGalleryViewControllerDelegate, FBMediaPickerVideoPlayerViewControllerDelegate, FBMediaSourceChooserDelegate, FBMediaSourceChooserLabelDelegate, FBPopoverControllerDelegate, FBCropViewControllerDelegate, FBComposerQuickCameraViewControllerDelegate, FBCameraComponentViewControllerDelegate, FBCameraComponentCaptureDelegate> {

	FBCropViewController* _cropViewController;
	FBNumericalScenePathContext* _scenePathContext;
	FBMediaSourceChooserLabel* _sourceChooserLabel;
	FBMediaSourceChooser* _sourceChooser;
	FBMediaPickerLibraryController* _libraryController;
	FBMediaImageManager* _mediaImageManager;
	FBPhotoAsset* _currentPhotoAsset;
	double _simplePikcerThumbnailAnimateInDuration;
	NSString* _faceBoxIDToFocusAfterTransitionAnimation;
	UILabel* _multiPhotoIndicatorLabel;
	UIView* _multiPhotoIndicatorLabelContainerView;
	BOOL _statusBarHiddenForTransition;
	FBUnifiedMediaGalleryExperimentContext* _unifiedMediaGalleryExperimentContext;
	BOOL _currentlyLoadingImageForMediaGallery;
	UIButton* _doneButton;
	BOOL _allowUnselectMediaAttachments;
	BOOL _lightWeightCroppingEnabled;
	unsigned long long _mediaFilter;
	FBMediaGalleryViewController* _galleryViewController;
	FBMediaPickerNavigationItemManager* _navigationItemManager;
	id<FBMediaGridViewControllerDelegate> _delegate;
	FBMediaPickerVideoPlayerViewController* _videoPlayerViewController;
	FBComposerQuickCameraViewController* _quickCameraViewController;
	SPAccessPhotoPermissionPromptView* _photoPermissionView;
	UIImageView* _animationImageView;
	UIView* _animationFadingBackgroundView;
	FBPopoverController* _sourceChooserPopover;
	FBMediaPickerSession* _session;

}

@property (assign,nonatomic) unsigned long long mediaFilter;                                                  //@synthesize mediaFilter=_mediaFilter - In the implementation block
@property (assign,nonatomic) BOOL allowUnselectMediaAttachments;                                              //@synthesize allowUnselectMediaAttachments=_allowUnselectMediaAttachments - In the implementation block
@property (assign,nonatomic) BOOL lightWeightCroppingEnabled;                                                 //@synthesize lightWeightCroppingEnabled=_lightWeightCroppingEnabled - In the implementation block
@property (nonatomic,retain) FBMediaGalleryViewController * galleryViewController;                            //@synthesize galleryViewController=_galleryViewController - In the implementation block
@property (nonatomic,retain) FBMediaPickerNavigationItemManager * navigationItemManager;                      //@synthesize navigationItemManager=_navigationItemManager - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaGridViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBMediaPickerVideoPlayerViewController * videoPlayerViewController;              //@synthesize videoPlayerViewController=_videoPlayerViewController - In the implementation block
@property (nonatomic,retain) FBComposerQuickCameraViewController * quickCameraViewController;                 //@synthesize quickCameraViewController=_quickCameraViewController - In the implementation block
@property (assign,nonatomic) BOOL showAll; 
@property (nonatomic,retain) SPAccessPhotoPermissionPromptView * photoPermissionView;                         //@synthesize photoPermissionView=_photoPermissionView - In the implementation block
@property (nonatomic,retain) UIImageView * animationImageView;                                                //@synthesize animationImageView=_animationImageView - In the implementation block
@property (nonatomic,retain) UIView * animationFadingBackgroundView;                                          //@synthesize animationFadingBackgroundView=_animationFadingBackgroundView - In the implementation block
@property (nonatomic,retain) FBPopoverController * sourceChooserPopover;                                      //@synthesize sourceChooserPopover=_sourceChooserPopover - In the implementation block
@property (nonatomic,retain) FBMediaPickerSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<FBMediaDataSourceProtocol> currentDataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)_showStatusBar;
-(void)cameraComponentViewControllerDidCancel:(id)arg1 ;
-(void)didCaptureImage:(id)arg1 ;
-(void)didCaptureVideo:(id)arg1 ;
-(void)setMediaFilter:(unsigned long long)arg1 ;
-(unsigned long long)mediaFilter;
-(void)didTapCancelButton;
-(void)updateImageAttachments:(id)arg1 ;
-(void)updateVideoAttachment:(id)arg1 ;
-(id)_getPreparerForFacerecRequest:(unsigned long long)arg1 ;
-(void)cameraViewControllerDidTapPermissionsLinkToSettings;
-(void)cameraViewControllerDidPressCloseButton;
-(void)cameraViewControllerDidDisplayPreviewLayer;
-(void)cameraViewControllerDidPressCollapseButton;
-(void)cameraViewControllerDidPressExpandButton;
-(void)cropViewControllerDidCancelCrop:(id)arg1 ;
-(void)cropViewControllerDidConfirmCrop:(id)arg1 ;
-(void)sourceChooser:(id)arg1 didSelectDataSource:(id)arg2 ;
-(void)sourceChooserNumberOfRowsDidChange:(id)arg1 ;
-(void)_didTapDoneButton;
-(void)_updateNavigationItems;
-(void)_updateGridForCameraRollAcessStatus;
-(BOOL)_embededFullScreenChildViewController;
-(void)_hideStatusBar;
-(void)_setStatusBarStyle:(long long)arg1 ;
-(void)_updateSourceChooser;
-(FBMediaGalleryViewController *)galleryViewController;
-(void)resetAutoTagging;
-(void)_presentVideoPlayerForVideoAtDataSourceIndex:(unsigned long long)arg1 forDataSource:(id)arg2 withView:(id)arg3 ;
-(void)_presentGalleryForPhotoAtDataSourceIndex:(unsigned long long)arg1 forDataSource:(id)arg2 focusedFaceBoxID:(id)arg3 showTaggingMode:(BOOL)arg4 withView:(id)arg5 focusFaceBoxAfterAnimation:(BOOL)arg6 allowPaging:(BOOL)arg7 ;
-(void)_dismissChildViewController:(id)arg1 ;
-(BOOL)_isUnifiedMediaGalleryEnabled;
-(void)setLightWeightCroppingEnabled:(BOOL)arg1 ;
-(void)_photoPermissionViewDidTapAuthorize:(id)arg1 ;
-(void)_photoPermissionViewDidTapLinkToSettings:(id)arg1 ;
-(void)_didTapCameraInGrid;
-(void)_presentMediaAtGridIndex:(unsigned long long)arg1 ;
-(void)_didToggleCheckmarkForThumbnailView:(id)arg1 atIndex:(unsigned long long)arg2 wasSelected:(BOOL)arg3 quality:(unsigned long long)arg4 ;
-(void)_dismissGalleryAnimated:(BOOL)arg1 withReason:(unsigned long long)arg2 fromFrame:(CGRect)arg3 ;
-(unsigned long long)_gridIndexForGalleryIndex:(unsigned long long)arg1 galleryShowingAll:(BOOL)arg2 ;
-(unsigned long long)_gridIndexForDataSourceIndex:(unsigned long long)arg1 ;
-(FBMediaPickerVideoPlayerViewController *)videoPlayerViewController;
-(void)_dismissChildViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_animateFromVideoViewAtDataSourceIndex:(unsigned long long)arg1 ;
-(void)_logEvent:(id)arg1 ;
-(void)_didTapComposeButton;
-(FBPopoverController *)sourceChooserPopover;
-(CGPoint)_sourceChooserPopoverAnchorPoint;
-(void)didTapComposeButton;
-(void)didTapTitleView;
-(void)_logEvent:(id)arg1 info:(id)arg2 ;
-(void)_updateStatusBarForPresentingViewController:(id)arg1 ;
-(void)_embedChildViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 belowSubview:(id)arg4 ;
-(void)_navigateFromCameraToGallery;
-(void)_navigateFromCameraToVideoPlayer;
-(FBComposerQuickCameraViewController *)quickCameraViewController;
-(void)_prepareCameraOutputForComposition:(BOOL)arg1 ;
-(unsigned long long)_galleryIndexForGridIndex:(unsigned long long)arg1 galleryShowingAll:(BOOL)arg2 ;
-(void)_embedChildViewController:(id)arg1 ;
-(void)_logForTools;
-(void)_showCropAfterSelection;
-(void)_navigateToMultiPhotoCreationTool:(unsigned long long)arg1 ;
-(void)_profilePictureSelectionAction;
-(void)_defaultAfterSelection;
-(id)_unifiedMediaGalleryExperimentContext;
-(void)_animateToGalleryViewFromThumbnailAtGridIndex:(unsigned long long)arg1 ;
-(void)_animateToVideoViewFromThumbnailAtGridIndex:(unsigned long long)arg1 ;
-(void)_toggleSelectionAtGridIndex:(unsigned long long)arg1 wasSelected:(BOOL)arg2 quality:(unsigned long long)arg3 ;
-(CGRect)_photoFrameInGridAtGridIndex:(unsigned long long)arg1 ;
-(UIImageView *)animationImageView;
-(void)_prepareAnimationImageViewForDataSourceIndex:(unsigned long long)arg1 ;
-(CGRect)_fullScreenMediaFrameWithImageSize:(CGSize)arg1 photoLayoutGuide:(BOOL)arg2 ;
-(UIView *)animationFadingBackgroundView;
-(void)_setLibraryViewSqueezed:(BOOL)arg1 ;
-(void)_animateToMediaViewFromGridIndex:(unsigned long long)arg1 forViewController:(id)arg2 fromFrame:(CGRect)arg3 ;
-(void)_presentMediaGalleryWithInitialToolThatRequiresImagePreparation:(unsigned long long)arg1 ;
-(void)_animateToFullScreenViewFromThumbnailAtGridIndex:(unsigned long long)arg1 forViewController:(id)arg2 ;
-(void)_animateFromMediaViewFromFrameOutsideGridForGridIndex:(unsigned long long)arg1 forViewController:(id)arg2 fromFrame:(CGRect)arg3 toFrame:(CGRect)arg4 ;
-(CGRect)_fadingBackgroundFrame:(BOOL)arg1 ;
-(void)_willAnimateInboundTransition;
-(void)_didAnimateInboundTransition;
-(CGRect)_photoFrameInGridAtGalleryIndex:(unsigned long long)arg1 galleryShowingAll:(BOOL)arg2 ;
-(void)_animateFromMediaViewFromFrameOutsideGridForGridIndex:(unsigned long long)arg1 forViewController:(id)arg2 toFrame:(CGRect)arg3 ;
-(void)_animateFromGalleryViewAtGalleryIndex:(unsigned long long)arg1 fromFrame:(CGRect)arg2 ;
-(void)_embedChildViewController:(id)arg1 belowSubview:(id)arg2 ;
-(void)_setChildViewController:(id)arg1 toFrame:(CGRect)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateStatusBarColor;
-(CGSize)_sourceChooserSize;
-(SPAccessPhotoPermissionPromptView *)photoPermissionView;
-(CGRect)prepareForAnimatingToMediaGallery;
-(id)imageViewToUseForTransitionFromMediaGallery;
-(void)mediaGalleryDidReturn:(id)arg1 withReason:(unsigned long long)arg2 fromFrame:(CGRect)arg3 animated:(BOOL)arg4 ;
-(void)mediaGalleryDidConfirmComposition:(id)arg1 currentPhotoAssetShown:(id)arg2 ;
-(void)mediaGallery:(id)arg1 didToggleSelection:(id)arg2 wasSelected:(BOOL)arg3 ;
-(void)videoPlayerDidReturn:(id)arg1 withDataSourceIndex:(unsigned long long)arg2 ;
-(void)videoPlayer:(id)arg1 didConfirmCompositionWithVideoAsset:(id)arg2 withDataSourceIndex:(unsigned long long)arg3 quality:(unsigned long long)arg4 ;
-(void)sourceChooserLabel:(id)arg1 didTapFromView:(id)arg2 ;
-(void)willPresentMediaViewForMediaAtDataSourceIndex:(unsigned long long)arg1 forDataSource:(id)arg2 focusedFaceBoxID:(id)arg3 showTaggingMode:(BOOL)arg4 withView:(id)arg5 focusFaceBoxAfterAnimation:(BOOL)arg6 allowPaging:(BOOL)arg7 ;
-(void)setAllowUnselectMediaAttachments:(BOOL)arg1 ;
-(void)finishedAnimatingToMediaGallery;
-(BOOL)allowUnselectMediaAttachments;
-(BOOL)lightWeightCroppingEnabled;
-(void)setGalleryViewController:(FBMediaGalleryViewController *)arg1 ;
-(FBMediaPickerNavigationItemManager *)navigationItemManager;
-(void)setNavigationItemManager:(FBMediaPickerNavigationItemManager *)arg1 ;
-(void)setVideoPlayerViewController:(FBMediaPickerVideoPlayerViewController *)arg1 ;
-(void)setQuickCameraViewController:(FBComposerQuickCameraViewController *)arg1 ;
-(void)setPhotoPermissionView:(SPAccessPhotoPermissionPromptView *)arg1 ;
-(void)setAnimationImageView:(UIImageView *)arg1 ;
-(void)setAnimationFadingBackgroundView:(UIView *)arg1 ;
-(void)setSourceChooserPopover:(FBPopoverController *)arg1 ;
-(void)libraryControllerDidTapCameraInGrid:(id)arg1 ;
-(void)libraryController:(id)arg1 needsToPresentMediaAtGridIndex:(unsigned long long)arg2 ;
-(void)libraryController:(id)arg1 didToggleCheckmarkForThumbnailView:(id)arg2 atGridIndex:(unsigned long long)arg3 wasSelected:(BOOL)arg4 quality:(unsigned long long)arg5 ;
-(id<FBMediaDataSourceProtocol>)currentDataSource;
-(BOOL)libraryControllerShouldShowNux:(id)arg1 ;
-(void)libraryController:(id)arg1 presentWithNavigationInfo:(id)arg2 ;
-(void)libraryController:(id)arg1 didSelectMagicStoryComposition:(id)arg2 ;
-(void)scrollToThumbnailAtGridIndex:(unsigned long long)arg1 scrollingPosition:(unsigned long long)arg2 ;
-(void)setCurrentDataSource:(id<FBMediaDataSourceProtocol>)arg1 ;
-(void)setShowAll:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBMediaGridViewControllerDelegate>)arg1 ;
-(id<FBMediaGridViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)reset;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)accessibilityPerformEscape;
-(FBMediaPickerSession *)session;
-(void)setSession:(FBMediaPickerSession *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)_restoreStatusBar;
-(BOOL)showAll;
@end

