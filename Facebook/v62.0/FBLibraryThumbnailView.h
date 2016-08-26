/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBLibraryThumbnailViewProtocol.h>
#import <Facebook/FBVideoCoordinatorPlayer.h>

@protocol FBLibraryThumbnailViewDelegate, FBWebImageDownloaderFactoryProtocol;
@class NSMutableArray, UIView, UIImage, FLAnimatedImage, NSURL, NSString;

@interface FBLibraryThumbnailView : UIView <FBLibraryThumbnailViewProtocol, FBVideoCoordinatorPlayer> {

	BOOL _longPressEnabled;
	BOOL _doubleTapEnabled;
	BOOL _pinchEnabled;
	BOOL _selectable;
	id<FBLibraryThumbnailViewDelegate> _delegate;
	NSMutableArray* _videoViewPool;
	UIView* _debugOverlayView;
	long long _indexTag;
	long long _sectionIndexTag;
	unsigned long long _thumbnailViewType;
	unsigned long long _thumbnailViewSelectionType;
	UIImage* _thumbnailNormalImage;
	UIImage* _thumbnailHighlightedImage;
	unsigned long long _thumbnailStyle;
	id<FBWebImageDownloaderFactoryProtocol> _downloaderFactory;

}

@property (assign,nonatomic,__weak) id<FBLibraryThumbnailViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * videoViewPool;                                         //@synthesize videoViewPool=_videoViewPool - In the implementation block
@property (assign,nonatomic) BOOL longPressEnabled;                                                  //@synthesize longPressEnabled=_longPressEnabled - In the implementation block
@property (assign,nonatomic) BOOL doubleTapEnabled;                                                  //@synthesize doubleTapEnabled=_doubleTapEnabled - In the implementation block
@property (assign,nonatomic) BOOL pinchEnabled;                                                      //@synthesize pinchEnabled=_pinchEnabled - In the implementation block
@property (assign,nonatomic) BOOL selectable;                                                        //@synthesize selectable=_selectable - In the implementation block
@property (nonatomic,retain) UIView * debugOverlayView;                                              //@synthesize debugOverlayView=_debugOverlayView - In the implementation block
@property (assign,nonatomic) long long indexTag;                                                     //@synthesize indexTag=_indexTag - In the implementation block
@property (assign,nonatomic) long long sectionIndexTag;                                              //@synthesize sectionIndexTag=_sectionIndexTag - In the implementation block
@property (assign,nonatomic) unsigned long long thumbnailViewType;                                   //@synthesize thumbnailViewType=_thumbnailViewType - In the implementation block
@property (assign,nonatomic) unsigned long long thumbnailViewSelectionType;                          //@synthesize thumbnailViewSelectionType=_thumbnailViewSelectionType - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnailNormalImage;                                       //@synthesize thumbnailNormalImage=_thumbnailNormalImage - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnailHighlightedImage;                                  //@synthesize thumbnailHighlightedImage=_thumbnailHighlightedImage - In the implementation block
@property (nonatomic,readonly) UIView*<FBClonePhotoView> thumnaiImageView; 
@property (nonatomic,readonly) BOOL needsStaticThumbnail; 
@property (nonatomic,retain) FLAnimatedImage * thumbnailAnimatedImage; 
@property (nonatomic,copy) NSURL * videoURL; 
@property (nonatomic,readonly) CGRect selectionMarkFrame; 
@property (assign,nonatomic) unsigned long long thumbnailStyle;                                      //@synthesize thumbnailStyle=_thumbnailStyle - In the implementation block
@property (nonatomic,retain) id<FBWebImageDownloaderFactoryProtocol> downloaderFactory;              //@synthesize downloaderFactory=_downloaderFactory - In the implementation block
@property (nonatomic,readonly) BOOL selected; 
@property (nonatomic,readonly) unsigned long long orderIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDownloaderFactory:(id<FBWebImageDownloaderFactoryProtocol>)arg1 ;
-(void)setThumbnailNormalImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setLongPressEnabled:(BOOL)arg1 ;
-(void)setThumbnailViewSelectionType:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 withOrderIndex:(unsigned long long)arg2 ;
-(unsigned long long)thumbnailViewType;
-(unsigned long long)orderIndex;
-(void)videoCoordinatorPlay;
-(void)videoCoordinatorPause;
-(void)videoCoordinatorStop;
-(BOOL)needsStaticThumbnail;
-(void)setBackgroundNormalImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setAssociateNormalImage:(id)arg1 highlightedImage:(id)arg2 infiniteLooping:(BOOL)arg3 ;
-(void)setThumbnailAnimatedImage:(FLAnimatedImage *)arg1 ;
-(FLAnimatedImage *)thumbnailAnimatedImage;
-(UIView*<FBClonePhotoView>)thumnaiImageView;
-(id)overlayCameraPreviewWithSession:(id)arg1 captureDevicePosition:(long long)arg2 ;
-(void)configureCameraPreviewView;
-(CGRect)selectionMarkFrame;
-(CGRect)animatableFrame;
-(void)setVideoDurationTimeDuration:(double)arg1 ;
-(void)setDownloadFactory:(id)arg1 ;
-(void)setDebugOverlayView:(UIView *)arg1 ;
-(void)setWebImageSpecifier:(id)arg1 ;
-(NSMutableArray *)videoViewPool;
-(void)setVideoViewPool:(NSMutableArray *)arg1 ;
-(BOOL)longPressEnabled;
-(BOOL)pinchEnabled;
-(void)setPinchEnabled:(BOOL)arg1 ;
-(UIView *)debugOverlayView;
-(long long)indexTag;
-(void)setIndexTag:(long long)arg1 ;
-(long long)sectionIndexTag;
-(void)setSectionIndexTag:(long long)arg1 ;
-(void)setThumbnailViewType:(unsigned long long)arg1 ;
-(unsigned long long)thumbnailViewSelectionType;
-(UIImage *)thumbnailNormalImage;
-(UIImage *)thumbnailHighlightedImage;
-(unsigned long long)thumbnailStyle;
-(void)setThumbnailStyle:(unsigned long long)arg1 ;
-(id<FBWebImageDownloaderFactoryProtocol>)downloaderFactory;
-(void)setDelegate:(id<FBLibraryThumbnailViewDelegate>)arg1 ;
-(id<FBLibraryThumbnailViewDelegate>)delegate;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)setDoubleTapEnabled:(BOOL)arg1 ;
-(BOOL)selected;
-(unsigned long long)accessibilityTraits;
-(void)clear;
-(BOOL)selectable;
-(void)setSelectable:(BOOL)arg1 ;
-(BOOL)doubleTapEnabled;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
@end
