/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMediaPickerTraits : FBValueObject <NSCopying> {

	BOOL _allowTagging;
	BOOL _allowFaceDetection;
	BOOL _requireSquarePhoto;
	BOOL _allowFullScreenPhotoViewing;
	BOOL _allowPhotoEditing;
	BOOL _cpuFiltersEnabled;
	BOOL _autoNavigationEnabled;
	BOOL _longPressToBringUpGalleryView;
	BOOL _stickersAllowed;
	BOOL _textOnPhotosAllowed;
	BOOL _doodlesOnPhotosAllowed;
	BOOL _canSelectMultiplePhotosAndVideos;
	BOOL _canShowMovies;
	BOOL _allowVideoAutoplay;
	BOOL _allowVideoTagging;
	BOOL _allowVideoFaceDetection;
	BOOL _forceShowingCheckMarkForThumbnails;
	BOOL _showPreviewForPhotoAfterCamera;
	BOOL _hasMediaAttachmentsNotIncludedInMediaPicker;
	BOOL _allowProductTagging;
	BOOL _allowVideoEditing;
	BOOL _lightWeightCropEnabled;
	BOOL _canShowMagicStories;
	BOOL _livePhotoAllowed;
	BOOL _tapToBringUpGalleryView;
	BOOL _forceHighQualityVideo;
	BOOL _showCropAfterSelectingPhoto;
	BOOL _allowFixedCropFrameForMediaGallery;
	BOOL _showCropAfterCamera;
	BOOL _showPreviewForVideoAfterCamera;
	BOOL _usePushNavigationForCamera;
	BOOL _support360Video;
	BOOL _annotate360Photos;
	BOOL _supports360Photos;
	BOOL _supportsAnimatedGIFs;
	BOOL _switchIconsForCameraButton;
	BOOL _infinitelyLoopingIconsForCameraButton;
	BOOL _multiSelectEnabled;
	BOOL _showBackButton;
	BOOL _shouldUseProfilePictureAsLoggerSource;
	unsigned long long _maxPhotosSelected;
	unsigned long long _postSelectionAction;
	NSString* _actionButtonTitle;
	unsigned long long _maxVideoLength;
	unsigned long long _maxVideoSize;
	unsigned long long _initialToolForMediaGallery;
	unsigned long long _ctaType;
	NSString* _analyticsSource;
	long long _capturePosition;
	CGSize _minVideoResolution;

}

@property (nonatomic,readonly) BOOL allowTagging;                                             //@synthesize allowTagging=_allowTagging - In the implementation block
@property (nonatomic,readonly) BOOL allowFaceDetection;                                       //@synthesize allowFaceDetection=_allowFaceDetection - In the implementation block
@property (nonatomic,readonly) unsigned long long maxPhotosSelected;                          //@synthesize maxPhotosSelected=_maxPhotosSelected - In the implementation block
@property (nonatomic,readonly) BOOL requireSquarePhoto;                                       //@synthesize requireSquarePhoto=_requireSquarePhoto - In the implementation block
@property (nonatomic,readonly) BOOL allowFullScreenPhotoViewing;                              //@synthesize allowFullScreenPhotoViewing=_allowFullScreenPhotoViewing - In the implementation block
@property (nonatomic,readonly) BOOL allowPhotoEditing;                                        //@synthesize allowPhotoEditing=_allowPhotoEditing - In the implementation block
@property (nonatomic,readonly) BOOL cpuFiltersEnabled;                                        //@synthesize cpuFiltersEnabled=_cpuFiltersEnabled - In the implementation block
@property (nonatomic,readonly) BOOL autoNavigationEnabled;                                    //@synthesize autoNavigationEnabled=_autoNavigationEnabled - In the implementation block
@property (nonatomic,readonly) BOOL longPressToBringUpGalleryView;                            //@synthesize longPressToBringUpGalleryView=_longPressToBringUpGalleryView - In the implementation block
@property (nonatomic,readonly) unsigned long long postSelectionAction;                        //@synthesize postSelectionAction=_postSelectionAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionButtonTitle;                             //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long maxVideoLength;                             //@synthesize maxVideoLength=_maxVideoLength - In the implementation block
@property (nonatomic,readonly) unsigned long long maxVideoSize;                               //@synthesize maxVideoSize=_maxVideoSize - In the implementation block
@property (nonatomic,readonly) BOOL stickersAllowed;                                          //@synthesize stickersAllowed=_stickersAllowed - In the implementation block
@property (nonatomic,readonly) BOOL textOnPhotosAllowed;                                      //@synthesize textOnPhotosAllowed=_textOnPhotosAllowed - In the implementation block
@property (nonatomic,readonly) BOOL doodlesOnPhotosAllowed;                                   //@synthesize doodlesOnPhotosAllowed=_doodlesOnPhotosAllowed - In the implementation block
@property (nonatomic,readonly) BOOL canSelectMultiplePhotosAndVideos;                         //@synthesize canSelectMultiplePhotosAndVideos=_canSelectMultiplePhotosAndVideos - In the implementation block
@property (nonatomic,readonly) BOOL canShowMovies;                                            //@synthesize canShowMovies=_canShowMovies - In the implementation block
@property (nonatomic,readonly) CGSize minVideoResolution;                                     //@synthesize minVideoResolution=_minVideoResolution - In the implementation block
@property (nonatomic,readonly) BOOL allowVideoAutoplay;                                       //@synthesize allowVideoAutoplay=_allowVideoAutoplay - In the implementation block
@property (nonatomic,readonly) BOOL allowVideoTagging;                                        //@synthesize allowVideoTagging=_allowVideoTagging - In the implementation block
@property (nonatomic,readonly) BOOL allowVideoFaceDetection;                                  //@synthesize allowVideoFaceDetection=_allowVideoFaceDetection - In the implementation block
@property (nonatomic,readonly) BOOL forceShowingCheckMarkForThumbnails;                       //@synthesize forceShowingCheckMarkForThumbnails=_forceShowingCheckMarkForThumbnails - In the implementation block
@property (nonatomic,readonly) BOOL showPreviewForPhotoAfterCamera;                           //@synthesize showPreviewForPhotoAfterCamera=_showPreviewForPhotoAfterCamera - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaAttachmentsNotIncludedInMediaPicker;              //@synthesize hasMediaAttachmentsNotIncludedInMediaPicker=_hasMediaAttachmentsNotIncludedInMediaPicker - In the implementation block
@property (nonatomic,readonly) BOOL allowProductTagging;                                      //@synthesize allowProductTagging=_allowProductTagging - In the implementation block
@property (nonatomic,readonly) BOOL allowVideoEditing;                                        //@synthesize allowVideoEditing=_allowVideoEditing - In the implementation block
@property (nonatomic,readonly) BOOL lightWeightCropEnabled;                                   //@synthesize lightWeightCropEnabled=_lightWeightCropEnabled - In the implementation block
@property (nonatomic,readonly) BOOL canShowMagicStories;                                      //@synthesize canShowMagicStories=_canShowMagicStories - In the implementation block
@property (nonatomic,readonly) BOOL livePhotoAllowed;                                         //@synthesize livePhotoAllowed=_livePhotoAllowed - In the implementation block
@property (nonatomic,readonly) BOOL tapToBringUpGalleryView;                                  //@synthesize tapToBringUpGalleryView=_tapToBringUpGalleryView - In the implementation block
@property (nonatomic,readonly) unsigned long long initialToolForMediaGallery;                 //@synthesize initialToolForMediaGallery=_initialToolForMediaGallery - In the implementation block
@property (nonatomic,readonly) BOOL forceHighQualityVideo;                                    //@synthesize forceHighQualityVideo=_forceHighQualityVideo - In the implementation block
@property (nonatomic,readonly) BOOL showCropAfterSelectingPhoto;                              //@synthesize showCropAfterSelectingPhoto=_showCropAfterSelectingPhoto - In the implementation block
@property (nonatomic,readonly) BOOL allowFixedCropFrameForMediaGallery;                       //@synthesize allowFixedCropFrameForMediaGallery=_allowFixedCropFrameForMediaGallery - In the implementation block
@property (nonatomic,readonly) BOOL showCropAfterCamera;                                      //@synthesize showCropAfterCamera=_showCropAfterCamera - In the implementation block
@property (nonatomic,readonly) BOOL showPreviewForVideoAfterCamera;                           //@synthesize showPreviewForVideoAfterCamera=_showPreviewForVideoAfterCamera - In the implementation block
@property (nonatomic,readonly) unsigned long long ctaType;                                    //@synthesize ctaType=_ctaType - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsSource;                               //@synthesize analyticsSource=_analyticsSource - In the implementation block
@property (nonatomic,readonly) BOOL usePushNavigationForCamera;                               //@synthesize usePushNavigationForCamera=_usePushNavigationForCamera - In the implementation block
@property (nonatomic,readonly) long long capturePosition;                                     //@synthesize capturePosition=_capturePosition - In the implementation block
@property (nonatomic,readonly) BOOL support360Video;                                          //@synthesize support360Video=_support360Video - In the implementation block
@property (nonatomic,readonly) BOOL annotate360Photos;                                        //@synthesize annotate360Photos=_annotate360Photos - In the implementation block
@property (nonatomic,readonly) BOOL supports360Photos;                                        //@synthesize supports360Photos=_supports360Photos - In the implementation block
@property (nonatomic,readonly) BOOL supportsAnimatedGIFs;                                     //@synthesize supportsAnimatedGIFs=_supportsAnimatedGIFs - In the implementation block
@property (nonatomic,readonly) BOOL switchIconsForCameraButton;                               //@synthesize switchIconsForCameraButton=_switchIconsForCameraButton - In the implementation block
@property (nonatomic,readonly) BOOL infinitelyLoopingIconsForCameraButton;                    //@synthesize infinitelyLoopingIconsForCameraButton=_infinitelyLoopingIconsForCameraButton - In the implementation block
@property (nonatomic,readonly) BOOL multiSelectEnabled;                                       //@synthesize multiSelectEnabled=_multiSelectEnabled - In the implementation block
@property (nonatomic,readonly) BOOL showBackButton;                                           //@synthesize showBackButton=_showBackButton - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseProfilePictureAsLoggerSource;                    //@synthesize shouldUseProfilePictureAsLoggerSource=_shouldUseProfilePictureAsLoggerSource - In the implementation block
-(NSString *)analyticsSource;
-(unsigned long long)maxVideoLength;
-(BOOL)showBackButton;
-(BOOL)allowTagging;
-(BOOL)cpuFiltersEnabled;
-(BOOL)allowFixedCropFrameForMediaGallery;
-(BOOL)lightWeightCropEnabled;
-(BOOL)canShowMagicStories;
-(BOOL)infinitelyLoopingIconsForCameraButton;
-(BOOL)supportsAnimatedGIFs;
-(BOOL)annotate360Photos;
-(BOOL)multiSelectEnabled;
-(BOOL)canSelectMultiplePhotosAndVideos;
-(BOOL)forceShowingCheckMarkForThumbnails;
-(BOOL)tapToBringUpGalleryView;
-(BOOL)longPressToBringUpGalleryView;
-(BOOL)allowFullScreenPhotoViewing;
-(BOOL)forceHighQualityVideo;
-(BOOL)hasMediaAttachmentsNotIncludedInMediaPicker;
-(unsigned long long)maxPhotosSelected;
-(BOOL)supports360Photos;
-(unsigned long long)maxVideoSize;
-(BOOL)support360Video;
-(CGSize)minVideoResolution;
-(BOOL)canShowMovies;
-(BOOL)allowVideoAutoplay;
-(BOOL)switchIconsForCameraButton;
-(unsigned long long)ctaType;
-(unsigned long long)initialToolForMediaGallery;
-(BOOL)autoNavigationEnabled;
-(BOOL)requireSquarePhoto;
-(unsigned long long)postSelectionAction;
-(BOOL)showCropAfterSelectingPhoto;
-(BOOL)usePushNavigationForCamera;
-(BOOL)showPreviewForVideoAfterCamera;
-(BOOL)showPreviewForPhotoAfterCamera;
-(BOOL)showCropAfterCamera;
-(long long)capturePosition;
-(BOOL)allowFaceDetection;
-(BOOL)allowVideoEditing;
-(BOOL)allowProductTagging;
-(BOOL)shouldUseProfilePictureAsLoggerSource;
-(BOOL)allowVideoFaceDetection;
-(BOOL)allowVideoTagging;
-(id)initWithAllowTagging:(BOOL)arg1 allowFaceDetection:(BOOL)arg2 maxPhotosSelected:(unsigned long long)arg3 requireSquarePhoto:(BOOL)arg4 allowFullScreenPhotoViewing:(BOOL)arg5 allowPhotoEditing:(BOOL)arg6 cpuFiltersEnabled:(BOOL)arg7 autoNavigationEnabled:(BOOL)arg8 longPressToBringUpGalleryView:(BOOL)arg9 postSelectionAction:(unsigned long long)arg10 actionButtonTitle:(id)arg11 maxVideoLength:(unsigned long long)arg12 maxVideoSize:(unsigned long long)arg13 stickersAllowed:(BOOL)arg14 textOnPhotosAllowed:(BOOL)arg15 doodlesOnPhotosAllowed:(BOOL)arg16 canSelectMultiplePhotosAndVideos:(BOOL)arg17 canShowMovies:(BOOL)arg18 minVideoResolution:(CGSize)arg19 allowVideoAutoplay:(BOOL)arg20 allowVideoTagging:(BOOL)arg21 allowVideoFaceDetection:(BOOL)arg22 forceShowingCheckMarkForThumbnails:(BOOL)arg23 showPreviewForPhotoAfterCamera:(BOOL)arg24 hasMediaAttachmentsNotIncludedInMediaPicker:(BOOL)arg25 allowProductTagging:(BOOL)arg26 allowVideoEditing:(BOOL)arg27 lightWeightCropEnabled:(BOOL)arg28 canShowMagicStories:(BOOL)arg29 livePhotoAllowed:(BOOL)arg30 tapToBringUpGalleryView:(BOOL)arg31 initialToolForMediaGallery:(unsigned long long)arg32 forceHighQualityVideo:(BOOL)arg33 showCropAfterSelectingPhoto:(BOOL)arg34 allowFixedCropFrameForMediaGallery:(BOOL)arg35 showCropAfterCamera:(BOOL)arg36 showPreviewForVideoAfterCamera:(BOOL)arg37 ctaType:(unsigned long long)arg38 analyticsSource:(id)arg39 usePushNavigationForCamera:(BOOL)arg40 capturePosition:(long long)arg41 support360Video:(BOOL)arg42 annotate360Photos:(BOOL)arg43 supports360Photos:(BOOL)arg44 supportsAnimatedGIFs:(BOOL)arg45 switchIconsForCameraButton:(BOOL)arg46 infinitelyLoopingIconsForCameraButton:(BOOL)arg47 multiSelectEnabled:(BOOL)arg48 showBackButton:(BOOL)arg49 shouldUseProfilePictureAsLoggerSource:(BOOL)arg50 ;
-(BOOL)allowPhotoEditing;
-(BOOL)stickersAllowed;
-(BOOL)textOnPhotosAllowed;
-(BOOL)doodlesOnPhotosAllowed;
-(BOOL)livePhotoAllowed;
-(NSString *)actionButtonTitle;
@end
