/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAViewController.h>
#import <WhatsApp/WAPageableItemBrowserViewDelegate.h>
#import <WhatsApp/WAMultiSendThumbnailBrowserViewDelegate.h>
#import <WhatsApp/WAMediaPickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <WhatsApp/WAMultiSendHeaderViewDelegate.h>
#import <WhatsApp/WACaptionBarDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <WhatsApp/WAMentionsSelectorViewDelegate.h>
#import <WhatsApp/WAPaintCanvasTextureManagerImageDataSource.h>
#import <WhatsApp/WACameraViewControllerDelegate.h>
#import <WhatsApp/WAImageToImageTransitioning.h>

@protocol WAMultiSendPreviewViewControllerDelegate;
@class NSMutableArray, NSMutableIndexSet, NSString, NSArray, WAMultiSendHeaderView, WACaptionBar, WAProgressAlertController, WAFieldStatsEventMediaPicker, UIImageView, WAMultiSendThumbnailBrowserView, WAMentionsSelectorView, WAChatSession, WAPaintCanvasDevice, WAMediaPickerLibraryController, NSURL, NSDictionary, WAPageableItemBrowserView;

@interface WAMultiSendPreviewViewController : WAViewController <WAPageableItemBrowserViewDelegate, WAMultiSendThumbnailBrowserViewDelegate, WAMediaPickerControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, WAMultiSendHeaderViewDelegate, WACaptionBarDelegate, UIGestureRecognizerDelegate, WAMentionsSelectorViewDelegate, WAPaintCanvasTextureManagerImageDataSource, WACameraViewControllerDelegate, WAImageToImageTransitioning> {

	long long _selectedIndex;
	NSMutableArray* _mediaItems;
	NSMutableIndexSet* _thumbnailIndexesToUpdate;
	NSString* _selectedItemUUIDBeforePresentingPicker;
	NSArray* _allAssetIdentifiersBeforePresentingPicker;
	double _imagePickerDelayStartTime;
	WAMultiSendHeaderView* _headerView;
	WACaptionBar* _captionBar;
	BOOL _cropCurrentItemWhenKeyboardHides;
	SCD_Struct_WA79 _transformInfoBeforeCropping;
	BOOL _cancelExportRequested;
	WAProgressAlertController* _exportProgressController;
	WAFieldStatsEventMediaPicker* _photosFieldStatsEvent;
	WAFieldStatsEventMediaPicker* _videosFieldStatsEvent;
	WAFieldStatsEventMediaPicker* _gifsFieldStatsEvent;
	UIImageView* _topGradientImageView;
	WAMultiSendThumbnailBrowserView* _thumbnailBrowserView;
	WAMentionsSelectorView* _mentionsSelectorView;
	WAChatSession* _chatSession;
	WAPaintCanvasDevice* _paintCanvasDevice;
	long long _hideInterfaceCounter;
	long long _paintingStrokeCounter;
	long long _paintingPinchCounter;
	double _lastHideInterfaceTime;
	BOOL _exportingItems;
	BOOL _sending;
	WAMediaPickerLibraryController* _libraryController;
	id<WAMultiSendPreviewViewControllerDelegate> _delegate;
	unsigned long long _pickerMode;
	unsigned long long _pickerOrigin;
	id _lastUsedAssetCollectionIdentifier;
	NSString* _recipientName;
	NSString* _recipientJID;
	NSURL* _originalURL;
	NSDictionary* _userInfo;
	WAPageableItemBrowserView* _pagingBrowserView;

}

@property (nonatomic,retain) WAPageableItemBrowserView * pagingBrowserView;                             //@synthesize pagingBrowserView=_pagingBrowserView - In the implementation block
@property (assign,getter=isCroppingCurrentItem,nonatomic) BOOL croppingCurrentItem; 
@property (assign,getter=isExportingItems,nonatomic) BOOL exportingItems;                               //@synthesize exportingItems=_exportingItems - In the implementation block
@property (assign,getter=isSending,nonatomic) BOOL sending;                                             //@synthesize sending=_sending - In the implementation block
@property (nonatomic,retain) WAMediaPickerLibraryController * libraryController;                        //@synthesize libraryController=_libraryController - In the implementation block
@property (assign,nonatomic,__weak) id<WAMultiSendPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long pickerMode;                                           //@synthesize pickerMode=_pickerMode - In the implementation block
@property (nonatomic,readonly) unsigned long long pickerOrigin;                                         //@synthesize pickerOrigin=_pickerOrigin - In the implementation block
@property (nonatomic,retain) id lastUsedAssetCollectionIdentifier;                                      //@synthesize lastUsedAssetCollectionIdentifier=_lastUsedAssetCollectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * recipientName;                                                    //@synthesize recipientName=_recipientName - In the implementation block
@property (nonatomic,copy) NSString * recipientJID;                                                     //@synthesize recipientJID=_recipientJID - In the implementation block
@property (nonatomic,copy) NSURL * originalURL;                                                         //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                                     //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isMixingImagesAndVideosSupported;
-(void)wa_fontSizeDidChange;
-(id)initWithPickerMode:(unsigned long long)arg1 origin:(unsigned long long)arg2 ;
-(void)setRecipientJID:(NSString *)arg1 ;
-(void)setRecipientName:(NSString *)arg1 ;
-(void)addMediaItem:(id)arg1 ;
-(BOOL)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4 ;
-(void)prepareForTransitionWithContext:(id)arg1 ;
-(id)viewForTransitionAnimationWithContext:(id)arg1 ;
-(void)finishTransitionWithView:(id)arg1 context:(id)arg2 ;
-(void)captionBarWillShowKeyboard:(id)arg1 ;
-(void)captionBarWillHideKeyboard:(id)arg1 ;
-(void)captionBarDidHideKeyboard:(id)arg1 ;
-(NSString *)recipientJID;
-(NSString *)recipientName;
-(void)setLibraryController:(WAMediaPickerLibraryController *)arg1 ;
-(void)cameraViewControllerDidCancel:(id)arg1 ;
-(void)cameraViewController:(id)arg1 didFinishWithMediaItems:(id)arg2 ;
-(void)cameraViewController:(id)arg1 didSelectMediaPickerAsset:(id)arg2 cancelSelectionHandler:(/*^block*/id)arg3 ;
-(void)cameraViewControllerDidRequestPresentPhotoLibrary:(id)arg1 ;
-(WAMediaPickerLibraryController *)libraryController;
-(void)resetStats;
-(id)textureManager:(id)arg1 imageWithIdentifier:(id)arg2 cropped:(BOOL)arg3 ;
-(void)updateInterfaceWithAnimation:(BOOL)arg1 ;
-(void)updateMentionsSelectorViewLayoutWithAnimationCurve:(long long)arg1 animationDuration:(double)arg2 ;
-(void)configureMentionsSelectorView;
-(void)mentionsSelectorView:(id)arg1 didSelectContact:(id)arg2 forTextRange:(NSRange)arg3 ;
-(void)captionBarDidFinishEditing:(id)arg1 ;
-(void)captionBarDidChangeText:(id)arg1 ;
-(void)captionBarDidRequestSendMessage:(id)arg1 ;
-(void)captionBarDidRequestAddMedia:(id)arg1 ;
-(BOOL)canCaptionBarAddMedia:(id)arg1 ;
-(BOOL)captionBarShouldTrackMentions:(id)arg1 ;
-(void)captionBar:(id)arg1 didEditMention:(id)arg2 inRange:(NSRange)arg3 ;
-(void)captionBarDidStopEditingMention:(id)arg1 ;
-(BOOL)captionBar:(id)arg1 canMentionUser:(id)arg2 ;
-(BOOL)isUndoPossibleForMultiSendHeaderView:(id)arg1 ;
-(BOOL)isRedoPossibleForMultiSendHeaderView:(id)arg1 ;
-(BOOL)isDeletePossibleForMultiSendHeaderView:(id)arg1 ;
-(BOOL)isCroppingPossibleForMultiSendHeaderView:(id)arg1 ;
-(void)multiSendHeaderViewDidRequestFinishEditingTextItem:(id)arg1 ;
-(void)multiSendHeaderViewDidChangeMode:(id)arg1 ;
-(void)multiSendHeaderViewDidRequestCancel:(id)arg1 ;
-(void)multiSendHeaderViewDidRequestDelete:(id)arg1 ;
-(void)multiSendHeaderViewDidRequestAddNewTextItem:(id)arg1 ;
-(void)multiSendHeaderViewDidRequestUndo:(id)arg1 ;
-(void)multiSendHeaderViewDidRequestRedo:(id)arg1 ;
-(void)multiSendHeaderView:(id)arg1 didRequestAddNewEmojiStamp:(id)arg2 ;
-(void)multiSendHeaderViewDidChangeBrushColor:(id)arg1 ;
-(void)multiSendHeaderView:(id)arg1 didSelectTextStyle:(id)arg2 ;
-(void)multiSendHeaderViewDidChangeBrushSize:(id)arg1 ;
-(unsigned long long)pickerOrigin;
-(id)lastUsedAssetCollectionIdentifier;
-(void)setLastUsedAssetCollectionIdentifier:(id)arg1 ;
-(void)mediaPickerControllerDidFinishPresenting:(id)arg1 ;
-(void)mediaPickerController:(id)arg1 didFinishWithSelectedItems:(id)arg2 ;
-(id)initWithPickerMode:(unsigned long long)arg1 origin:(unsigned long long)arg2 enablePaintingIfSupported:(BOOL)arg3 ;
-(id)newFieldStatsEvent;
-(void)paintCanvasDidUndoChange:(id)arg1 ;
-(void)paintCanvasDidRedoChange:(id)arg1 ;
-(void)paintCanvasDidChangeUndoStatus:(id)arg1 ;
-(void)paintCanvasDidClearAll:(id)arg1 ;
-(void)paintCanvasDidAddStamp:(id)arg1 ;
-(void)paintCanvasDidBeginStroke:(id)arg1 ;
-(void)paintCanvasDidEndStroke:(id)arg1 ;
-(void)paintCanvasDidBeginEditingText:(id)arg1 ;
-(void)paintCanvasDidEndEditingText:(id)arg1 ;
-(void)paintCanvasDidBeginPinch:(id)arg1 ;
-(void)paintCanvasDidEndPinch:(id)arg1 ;
-(void)submitFieldStatsIfValid:(id)arg1 stringForLogging:(id)arg2 ;
-(WAPageableItemBrowserView *)pagingBrowserView;
-(void)browserViewTapped:(id)arg1 ;
-(void)repositionFooterElements;
-(void)updateContentInsetWithAnimation:(BOOL)arg1 ;
-(BOOL)isThumbnailBrowserViewHidden;
-(void)reloadMediaContent;
-(void)updateCaption;
-(void)updateThumbnailBrowserViewHiddenState;
-(void)mediaItemDidUpdatePreviewContent:(id)arg1 ;
-(void)mediaItemDidUpdatePaintCanvasContent:(id)arg1 ;
-(void)stopMonitoringMediaItem:(id)arg1 ;
-(void)startMonitoringMediaItem:(id)arg1 ;
-(void)convertItemAtIndexFromPlaceholderToActualItem:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadThumbnailAtIndex:(long long)arg1 ;
-(unsigned long long)indexOfMediaItemWithIdentifier:(id)arg1 ;
-(void)cancelExportingAndDisableAutoExportingForAllMediaItems;
-(void)cancelAllExport;
-(void)trackUnsentItems:(id)arg1 ;
-(void)promptForConfirmationToDeleteItems:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)captureMoreMediaWithCamera;
-(void)addMoreMediaItemsFromPhotoLibrary;
-(void)handleCancelAction;
-(BOOL)isExportingItems;
-(void)setCaptionOfCurrentItem:(id)arg1 ;
-(void)sendMediaItems:(id)arg1 fromItems:(id)arg2 atIndex:(long long)arg3 saveToCameraRoll:(BOOL)arg4 ;
-(void)trackSentItems:(id)arg1 ;
-(void)updateExportProgress;
-(void)setExportingItems:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setExportingItems:(BOOL)arg1 ;
-(void)finishWithProcessedItems:(id)arg1 ;
-(void)doneCropping;
-(void)setCroppingCurrentItem:(BOOL)arg1 ;
-(BOOL)isCroppingCurrentItem;
-(id)mediaItemWithUUID:(id)arg1 ;
-(void)beginHidingInterface;
-(void)endHidingInterface;
-(void)sendAllMediaItems:(id)arg1 ;
-(void)removeMediaItemAtIndex:(long long)arg1 ;
-(void)addMoreMediaItems;
-(void)updateBrushColorFromMultiSendHeaderView;
-(BOOL)isHidingInterface;
-(void)setThumbnailBrowserViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)beginPinching;
-(void)paintCanvasDidBeginEditingActivity;
-(void)endPinching;
-(void)paintCanvasDidEndEditingActivity;
-(void)trackEditsInPhotos:(id)arg1 videos:(id)arg2 gifs:(id)arg3 updateSentUnchanged:(BOOL)arg4 ;
-(id)pageableItemBrowserView:(id)arg1 itemAtIndex:(long long)arg2 ;
-(long long)pageableItemCount:(id)arg1 ;
-(void)pageableItemBrowserViewCurrentIndexDidChange:(id)arg1 ;
-(void)pageableItemBrowserView:(id)arg1 willBeginEditingAnimationForItemAtIndex:(long long)arg2 ;
-(void)pageableItemBrowserView:(id)arg1 didEndEditingAnimationForItemAtIndex:(long long)arg2 ;
-(void)pageableItemBrowserViewWillBeginFocusedTask:(id)arg1 ;
-(void)pageableItemBrowserViewDidEndFocusedTask:(id)arg1 ;
-(void)pageableItemBrowserViewDidScroll:(id)arg1 ;
-(BOOL)pageableItemBrowserViewKeyboardIsShown:(id)arg1 ;
-(void)pageableItemBrowserView:(id)arg1 didUpdateThumbnailOfItemAtIndex:(long long)arg2 ;
-(void)pageableItemBrowserViewDidRequestEndCropping:(id)arg1 ;
-(void)pageableItemBrowserViewDidRequestSend:(id)arg1 ;
-(id)pageableItemBrowserViewContainingViewController:(id)arg1 ;
-(BOOL)pageableItemBrowserView:(id)arg1 shouldDeleteItemAtLocation:(CGPoint)arg2 ;
-(void)pageableItemBrowserView:(id)arg1 shouldEnterPendingDeletionState:(BOOL)arg2 ;
-(void)pageableItemBrowserView:(id)arg1 didDeleteItemAtLocation:(CGPoint)arg2 ;
-(long long)itemCountForMultiSendThumbnailBrowserView:(id)arg1 ;
-(id)multiSendThumbnailBrowserView:(id)arg1 itemAtIndex:(long long)arg2 ;
-(void)multiSendThumbnailBrowserViewDidRequestSend:(id)arg1 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 didRequestRemovalOfItemAtIndex:(long long)arg2 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 didRequestSelectionOfItemAtIndex:(long long)arg2 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 didMoveItemAtIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(void)multiSendThumbnailBrowserViewDidChangeEditingMode:(id)arg1 ;
-(id)mediaItemWithAssetIdentifier:(id)arg1 ;
-(void)doneCropping:(id)arg1 ;
-(void)cancelCropping;
-(void)clearPainting;
-(void)setPagingBrowserView:(WAPageableItemBrowserView *)arg1 ;
-(void)setDelegate:(id<WAMultiSendPreviewViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reload;
-(id<WAMultiSendPreviewViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(NSDictionary *)userInfo;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSURL *)originalURL;
-(void)dismiss;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)cancelExport;
-(void)setSelectedIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)currentMediaItem;
-(void)setSending:(BOOL)arg1 ;
-(BOOL)isSending;
-(unsigned long long)pickerMode;
-(void)setOriginalURL:(NSURL *)arg1 ;
@end
