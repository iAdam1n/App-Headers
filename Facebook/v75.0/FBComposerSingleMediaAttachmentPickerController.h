/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMediaGalleryViewControllerDelegate.h>
#import <Facebook/FBMediaVideoEditorViewControllerDelegate.h>
#import <Facebook/FBMediaPickerVideoPlayerViewControllerDelegate.h>
#import <Facebook/FB360VideoEditingViewControllerDelegate.h>
#import <Facebook/FBComposerPickerController.h>
#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBComposerUpdateHandler;
@class FBComposerCompositionState, FBMediaPickerDataSourceManager, FBMediaPickerSession, FBUserSession, FBComposerVideoTaggingSuggestionController, FBVideoUploadManualQualitySelectionUpsellController, FBComposerMediaTaggingCollectionLoader, NSString;

@interface FBComposerSingleMediaAttachmentPickerController : NSObject <FBMediaGalleryViewControllerDelegate, FBMediaVideoEditorViewControllerDelegate, FBMediaPickerVideoPlayerViewControllerDelegate, FB360VideoEditingViewControllerDelegate, FBComposerPickerController, FBComposerCompositionStateChangedListener> {

	FBComposerCompositionState* _compositionState;
	FBMediaPickerDataSourceManager* _mediaDataSourceManager;
	FBMediaPickerSession* _mediaPickerSession;
	id<FBComposerUpdateHandler> _updateHandler;
	FBUserSession* _userSession;
	FBComposerVideoTaggingSuggestionController* _videoTaggingSuggestionController;
	FBVideoUploadManualQualitySelectionUpsellController* _manualQualitySelectionUpsellController;
	FBComposerMediaTaggingCollectionLoader* _taggingCollectionLoader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(void)mediaGalleryDidReturn:(id)arg1 withReason:(unsigned long long)arg2 fromFrame:(CGRect)arg3 animated:(BOOL)arg4 ;
-(void)mediaGalleryDidUpdateComposition:(id)arg1 currentPhotoAssetShown:(id)arg2 ;
-(void)mediaGalleryDidConfirmComposition:(id)arg1 currentPhotoAssetShown:(id)arg2 ;
-(void)mediaGallery:(id)arg1 didToggleSelection:(id)arg2 wasSelected:(BOOL)arg3 ;
-(void)_handleMediaAttachmentsUpdateAndDismiss;
-(id)_mutationUpdateForAttachmentsFromCurrentComposition;
-(void)videoEditorViewControllerFinished:(id)arg1 isCancelled:(BOOL)arg2 ;
-(void)videoEditorViewController:(id)arg1 didChangeHDUploadSelection:(BOOL)arg2 ;
-(void)videoPlayerDidReturn:(id)arg1 withDataSourceIndex:(unsigned long long)arg2 ;
-(void)videoPlayer:(id)arg1 didConfirmCompositionWithVideoAsset:(id)arg2 withDataSourceIndex:(unsigned long long)arg3 quality:(unsigned long long)arg4 ;
-(void)sphericalVideoEditingViewControllerFinished:(id)arg1 isCancelled:(BOOL)arg2 ;
-(id)presentableViewControllerWithNavigationPayload:(id)arg1 ;
-(unsigned long long)popoverStyle;
-(CGSize)popoverContentSizeForOrientation:(long long)arg1 ;
-(void)dismissPopoverController;
-(id)initWithMediaDataSourceManager:(id)arg1 mediaPickerSession:(id)arg2 updateHandler:(id)arg3 userSession:(id)arg4 taggingCollectionLoader:(id)arg5 ;
@end
