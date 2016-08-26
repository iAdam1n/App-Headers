/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGOverlayController.h>
#import <Telegram/ASWatcher.h>
#import <Telegram/TGViewControllerNavigationBarAppearance.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@protocol TGMediaEditableItem, TGMediaEditAdjustments;
@class TGPhotoEditorTabController, UIView, TGPhotoToolbarView, TGPhotoEditorPreviewView, PGPhotoEditor, SQueue, UIImage, NSString, TGMenuContainerView, UIDocumentInteractionController, TGMessageImageViewOverlayView, ASHandle, TGSuggestionContext, PGCameraShotMetadata;

@interface TGPhotoEditorController : TGOverlayController <ASWatcher, TGViewControllerNavigationBarAppearance, UIDocumentInteractionControllerDelegate> {

	BOOL _switchingTab;
	int _availableTabs;
	int _currentTab;
	TGPhotoEditorTabController* _currentTabController;
	UIView* _backgroundView;
	UIView* _containerView;
	UIView* _wrapperView;
	UIView* _transitionWrapperView;
	TGPhotoToolbarView* _portraitToolbarView;
	TGPhotoToolbarView* _landscapeToolbarView;
	TGPhotoEditorPreviewView* _previewView;
	PGPhotoEditor* _photoEditor;
	SQueue* _queue;
	int _intent;
	id<TGMediaEditableItem> _item;
	UIImage* _screenImage;
	UIImage* _thumbnailImage;
	UIImage* _aspectRatioThumbnailImage;
	id<TGMediaEditAdjustments> _initialAdjustments;
	NSString* _caption;
	BOOL _viewFillingWholeScreen;
	BOOL _forceStatusBarVisible;
	BOOL _ignoreDefaultPreviewViewTransitionIn;
	BOOL _hasOpenedPhotoTools;
	BOOL _hiddenToolbarView;
	TGMenuContainerView* _menuContainerView;
	UIDocumentInteractionController* _documentController;
	BOOL _progressVisible;
	TGMessageImageViewOverlayView* _progressView;
	BOOL _skipInitialTransition;
	BOOL _dontHideStatusBar;
	ASHandle* _actionHandle;
	TGSuggestionContext* _suggestionContext;
	/*^block*/id _beginTransitionIn;
	/*^block*/id _finishedTransitionIn;
	/*^block*/id _beginTransitionOut;
	/*^block*/id _finishedTransitionOut;
	/*^block*/id _beginCustomTransitionOut;
	/*^block*/id _requestThumbnailImage;
	/*^block*/id _requestOriginalScreenSizeImage;
	/*^block*/id _requestOriginalFullSizeImage;
	/*^block*/id _requestMetadata;
	/*^block*/id _requestAdjustments;
	/*^block*/id _requestImage;
	/*^block*/id _requestToolbarsHidden;
	/*^block*/id _captionSet;
	/*^block*/id _willFinishEditing;
	/*^block*/id _didFinishRenderingFullSizeImage;
	/*^block*/id _didFinishEditing;
	PGCameraShotMetadata* _metadata;
	UIImage* _fullSizeImage;

}

@property (assign,nonatomic,__weak) UIImage * fullSizeImage;                       //@synthesize fullSizeImage=_fullSizeImage - In the implementation block
@property (nonatomic,retain) TGSuggestionContext * suggestionContext;              //@synthesize suggestionContext=_suggestionContext - In the implementation block
@property (nonatomic,copy) id beginTransitionIn;                                   //@synthesize beginTransitionIn=_beginTransitionIn - In the implementation block
@property (nonatomic,copy) id finishedTransitionIn;                                //@synthesize finishedTransitionIn=_finishedTransitionIn - In the implementation block
@property (nonatomic,copy) id beginTransitionOut;                                  //@synthesize beginTransitionOut=_beginTransitionOut - In the implementation block
@property (nonatomic,copy) id finishedTransitionOut;                               //@synthesize finishedTransitionOut=_finishedTransitionOut - In the implementation block
@property (nonatomic,copy) id beginCustomTransitionOut;                            //@synthesize beginCustomTransitionOut=_beginCustomTransitionOut - In the implementation block
@property (nonatomic,copy) id requestThumbnailImage;                               //@synthesize requestThumbnailImage=_requestThumbnailImage - In the implementation block
@property (nonatomic,copy) id requestOriginalScreenSizeImage;                      //@synthesize requestOriginalScreenSizeImage=_requestOriginalScreenSizeImage - In the implementation block
@property (nonatomic,copy) id requestOriginalFullSizeImage;                        //@synthesize requestOriginalFullSizeImage=_requestOriginalFullSizeImage - In the implementation block
@property (nonatomic,copy) id requestMetadata;                                     //@synthesize requestMetadata=_requestMetadata - In the implementation block
@property (nonatomic,copy) id requestAdjustments;                                  //@synthesize requestAdjustments=_requestAdjustments - In the implementation block
@property (nonatomic,copy) id requestImage;                                        //@synthesize requestImage=_requestImage - In the implementation block
@property (nonatomic,copy) id requestToolbarsHidden;                               //@synthesize requestToolbarsHidden=_requestToolbarsHidden - In the implementation block
@property (nonatomic,copy) id captionSet;                                          //@synthesize captionSet=_captionSet - In the implementation block
@property (nonatomic,copy) id willFinishEditing;                                   //@synthesize willFinishEditing=_willFinishEditing - In the implementation block
@property (nonatomic,copy) id didFinishRenderingFullSizeImage;                     //@synthesize didFinishRenderingFullSizeImage=_didFinishRenderingFullSizeImage - In the implementation block
@property (nonatomic,copy) id didFinishEditing;                                    //@synthesize didFinishEditing=_didFinishEditing - In the implementation block
@property (assign,nonatomic) BOOL skipInitialTransition;                           //@synthesize skipInitialTransition=_skipInitialTransition - In the implementation block
@property (assign,nonatomic) BOOL dontHideStatusBar;                               //@synthesize dontHideStatusBar=_dontHideStatusBar - In the implementation block
@property (nonatomic,retain) PGCameraShotMetadata * metadata;                      //@synthesize metadata=_metadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) ASHandle * actionHandle;                            //@synthesize actionHandle=_actionHandle - In the implementation block
+(int)defaultTabsForAvatarIntent;
-(void)actionStageActionRequested:(id)arg1 options:(id)arg2 ;
-(ASHandle *)actionHandle;
-(long long)requiredNavigationBarStyle;
-(BOOL)navigationBarShouldBeHidden;
-(TGSuggestionContext *)suggestionContext;
-(void)setSuggestionContext:(TGSuggestionContext *)arg1 ;
-(void)setProgressVisible:(BOOL)arg1 value:(double)arg2 animated:(BOOL)arg3 ;
-(CGSize)referenceViewSize;
-(id)finishedTransitionIn;
-(void)setFinishedTransitionIn:(id)arg1 ;
-(BOOL)inFormSheet;
-(double)toolbarLandscapeSize;
-(id)finishedTransitionOut;
-(id)beginTransitionOut;
-(void)_finishedTransitionIn;
-(void)transitionOutSaving:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBeginTransitionIn:(id)arg1 ;
-(void)setBeginTransitionOut:(id)arg1 ;
-(id)initWithItem:(id)arg1 intent:(int)arg2 adjustments:(id)arg3 caption:(id)arg4 screenImage:(id)arg5 availableTabs:(int)arg6 selectedTab:(int)arg7 ;
-(void)setDidFinishEditing:(id)arg1 ;
-(void)setRequestThumbnailImage:(id)arg1 ;
-(void)setRequestOriginalScreenSizeImage:(id)arg1 ;
-(void)setRequestOriginalFullSizeImage:(id)arg1 ;
-(void)setDontHideStatusBar:(BOOL)arg1 ;
-(void)setDidFinishRenderingFullSizeImage:(id)arg1 ;
-(void)setBeginCustomTransitionOut:(id)arg1 ;
-(BOOL)presentedForAvatarCreation;
-(BOOL)presentedFromCamera;
-(void)doneButtonLongPressed:(id)arg1 ;
-(void)rotateVideoOrReset:(BOOL)arg1 ;
-(void)presentEditorTab:(int)arg1 ;
-(void)updateDoneButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateEditorButtonsWithAdjustments:(id)arg1 ;
-(BOOL)dontHideStatusBar;
-(id)requestThumbnailImage;
-(id)requestOriginalScreenSizeImage;
-(id)requestOriginalFullSizeImage;
-(id)willFinishEditing;
-(id)didFinishEditing;
-(UIImage *)fullSizeImage;
-(id)didFinishRenderingFullSizeImage;
-(id)requestToolbarsHidden;
-(id)beginCustomTransitionOut;
-(id)beginTransitionIn;
-(id)captionSet;
-(void)setCaptionSet:(id)arg1 ;
-(BOOL)skipInitialTransition;
-(void)setFinishedTransitionOut:(id)arg1 ;
-(id)requestImage;
-(id)requestAdjustments;
-(void)createEditedImageWithEditorValues:(id)arg1 createThumbnail:(BOOL)arg2 showProgress:(BOOL)arg3 saveOnly:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_openInInstagram;
-(void)updateStatusBarAppearanceForDismiss;
-(void)_setScreenImage:(id)arg1 ;
-(id)transitionWrapperView;
-(void)setRequestMetadata:(id)arg1 ;
-(void)setRequestAdjustments:(id)arg1 ;
-(void)setRequestImage:(id)arg1 ;
-(void)setRequestToolbarsHidden:(id)arg1 ;
-(void)setWillFinishEditing:(id)arg1 ;
-(void)setSkipInitialTransition:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)dismiss;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
-(void)_saveToCameraRoll;
-(PGCameraShotMetadata *)metadata;
-(void)setMetadata:(PGCameraShotMetadata *)arg1 ;
-(void)setFullSizeImage:(UIImage *)arg1 ;
-(id)requestMetadata;
-(void)doneButtonPressed;
-(void)updateLayout:(long long)arg1 ;
-(void)cancelButtonPressed;
-(void)transitionIn;
@end
