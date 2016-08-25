/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_group;
@class NSURL, UIImage, NSObject, NSString, WARichText, WAPageableItemView, NSDate, WAPaintCanvas;

@interface WAMultiSendMediaItem : NSObject <NSCopying> {

	float _exportProgress;
	NSURL* _exportedContentURL;
	NSURL* _referenceURL;
	UIImage* _originalImageForPreview;
	UIImage* _thumbnail;
	BOOL _needsExport;
	long long _renderID;
	NSObject*<OS_dispatch_group> _renderDispatchGroup;
	NSObject*<OS_dispatch_group> _exportDispatchGroup;
	BOOL _exportInProgress;
	BOOL _isSavedToCameraRoll;
	BOOL _exportCancelled;
	BOOL _originalGIF;
	BOOL _renderingInProgress;
	BOOL _removeFileUponDeallocation;
	BOOL _needsRegeneratePreviewImageFromSource;
	BOOL _renderingEnabled;
	BOOL _needsRender;
	BOOL _exportAutomatically;
	BOOL _exportedContentURLConsumed;
	id _identifier;
	NSString* _UUID;
	WARichText* _text;
	NSString* _collectionID;
	WAPageableItemView* _presentingItemView;
	NSURL* _alAssetURL;
	double _rotationAngle;
	NSDate* _date;
	/*^block*/id _exportProgressHandler;
	NSURL* _sourceURL;
	WAPaintCanvas* _paintCanvas;
	CGSize _cropSize;
	CGPoint _anchorPoint;

}

@property (nonatomic,copy) id identifier;                                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * UUID;                                                           //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) WARichText * text;                                                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * collectionID;                                                            //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,readonly) BOOL isVideo; 
@property (assign,getter=isVideoAsGIF,nonatomic) BOOL videoAsGIF; 
@property (assign,getter=isOriginalGIF,nonatomic) BOOL originalGIF;                                            //@synthesize originalGIF=_originalGIF - In the implementation block
@property (nonatomic,readonly) BOOL isGIF; 
@property (nonatomic,readonly) BOOL isPlaceholder; 
@property (nonatomic,readonly) BOOL isExportedPlacehodler; 
@property (nonatomic,copy,readonly) NSURL * referenceURL;                                                      //@synthesize referenceURL=_referenceURL - In the implementation block
@property (assign,nonatomic,__weak) WAPageableItemView * presentingItemView;                                   //@synthesize presentingItemView=_presentingItemView - In the implementation block
@property (nonatomic,readonly) NSURL * alAssetURL;                                                             //@synthesize alAssetURL=_alAssetURL - In the implementation block
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (assign,nonatomic) CGSize cropSize;                                                                  //@synthesize cropSize=_cropSize - In the implementation block
@property (assign,nonatomic) CGPoint anchorPoint;                                                              //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (assign,nonatomic) double rotationAngle;                                                             //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (nonatomic,readonly) BOOL rightAngleRotationOnly; 
@property (getter=isIdentityTransform,nonatomic,readonly) BOOL identityTransform; 
@property (assign,nonatomic) CGRect normalizedRotatedCropRect; 
@property (assign,nonatomic) SCD_Struct_WA64 transformInfo; 
@property (nonatomic,readonly) BOOL renderingInProgress;                                                       //@synthesize renderingInProgress=_renderingInProgress - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,readonly) UIImage * originalImageForPreview; 
@property (nonatomic,readonly) UIImage * fullCanvasSnapshotForPreview; 
@property (nonatomic,readonly) id renderedContent; 
@property (nonatomic,readonly) UIImage * renderedImage; 
@property (nonatomic,readonly) NSURL * exportedContentURL;                                                     //@synthesize exportedContentURL=_exportedContentURL - In the implementation block
@property (nonatomic,copy) id exportProgressHandler;                                                           //@synthesize exportProgressHandler=_exportProgressHandler - In the implementation block
@property (nonatomic,readonly) float exportProgress;                                                           //@synthesize exportProgress=_exportProgress - In the implementation block
@property (assign,nonatomic) BOOL removeFileUponDeallocation;                                                  //@synthesize removeFileUponDeallocation=_removeFileUponDeallocation - In the implementation block
@property (assign,nonatomic) BOOL needsRegeneratePreviewImageFromSource;                                       //@synthesize needsRegeneratePreviewImageFromSource=_needsRegeneratePreviewImageFromSource - In the implementation block
@property (assign,getter=isRenderingEnabled,nonatomic) BOOL renderingEnabled;                                  //@synthesize renderingEnabled=_renderingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL needsRender;                                                               //@synthesize needsRender=_needsRender - In the implementation block
@property (assign,nonatomic) BOOL exportAutomatically;                                                         //@synthesize exportAutomatically=_exportAutomatically - In the implementation block
@property (assign,getter=isExportedContentURLConsumed,nonatomic) BOOL exportedContentURLConsumed;              //@synthesize exportedContentURLConsumed=_exportedContentURLConsumed - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityLabel; 
@property (nonatomic,copy,readonly) NSString * accessibilityValue; 
@property (nonatomic,readonly) NSURL * sourceURL;                                                              //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) WAPaintCanvas * paintCanvas;                                                    //@synthesize paintCanvas=_paintCanvas - In the implementation block
+(id)mediaItemForGIFData:(id)arg1 ;
+(id)mediaItemWithAssetIdentifier:(id)arg1 media:(id)arg2 ;
+(id)fileURLToTemporaryDirectory;
+(id)itemForExportedPlaceholderItem:(id)arg1 ;
+(id)mediaItemWithAssetIdentifier:(id)arg1 media:(id)arg2 info:(id)arg3 ;
+(void)initialize;
-(WAPaintCanvas *)paintCanvas;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithUndownloadedURL:(id)arg1 contentURL:(id)arg2 previewURL:(id)arg3 thumbnail:(id)arg4 aspectRatio:(CGSize)arg5 ;
-(NSURL *)exportedContentURL;
-(BOOL)isGIF;
-(BOOL)isVideoAsGIF;
-(id)renderedContent;
-(BOOL)isIdentityTransform;
-(UIImage *)originalImageForPreview;
-(id)initWithSourceURL:(id)arg1 assetIdentifier:(id)arg2 ;
-(id)initWithVideoURL:(id)arg1 assetIdentifier:(id)arg2 slowMotionTimeRange:(SCD_Struct_WA6)arg3 ;
-(void)copyAttributesFromItem:(id)arg1 ;
-(NSURL *)alAssetURL;
-(void)setNeedsExport;
-(void)invalidateOriginalImageForPreview;
-(CGSize)cropSize;
-(CGRect)normalizedRotatedCropRect;
-(void)cancelCurrentExport;
-(BOOL)isOriginalGIF;
-(WAPageableItemView *)presentingItemView;
-(void)didUpdatePaintCanvasContent;
-(void)setVideoAsGIF:(BOOL)arg1 ;
-(id)generateOriginalImageForPreview;
-(void)renderWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reallyExportWithProgressHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(SCD_Struct_WA64)transformInfo;
-(id)initWithImageURL:(id)arg1 renderedImage:(id)arg2 assetIdentifier:(id)arg3 ;
-(void)setRemoveFileUponDeallocation:(BOOL)arg1 ;
-(void)setNeedsRegeneratePreviewImageFromSource:(BOOL)arg1 ;
-(BOOL)rightAngleRotationOnly;
-(void)setTransformInfo:(SCD_Struct_WA64)arg1 ;
-(void)performBlockAfterRendering:(/*^block*/id)arg1 ;
-(void)setRenderingEnabled:(BOOL)arg1 ;
-(void)setRotationAngle:(double)arg1 adjustCropSize:(BOOL)arg2 ;
-(id)initWithMediaPickerItem:(id)arg1 ;
-(void)setExportAutomatically:(BOOL)arg1 ;
-(BOOL)isExportedPlacehodler;
-(void)setExportedContentURLConsumed:(BOOL)arg1 ;
-(void)saveToCameraRollAsynchronouslyIfNeeded;
-(void)setExportProgressHandler:(id)arg1 ;
-(void)exportWithCompletionHandler:(/*^block*/id)arg1 ;
-(float)exportProgress;
-(void)addPaintCanvasWithDeviceIfNeeded:(id)arg1 ;
-(void)setPresentingItemView:(WAPageableItemView *)arg1 ;
-(void)setOriginalGIF:(BOOL)arg1 ;
-(id)initWithMediaPickerItem:(id)arg1 automaticGIFExport:(BOOL)arg2 ;
-(id)initWithTemporaryFileURL:(id)arg1 isVideo:(BOOL)arg2 ;
-(BOOL)isRenderingEnabled;
-(BOOL)removeFileUponDeallocation;
-(BOOL)isExportedContentURLConsumed;
-(void)didChangeTransform;
-(void)setCropSize:(CGSize)arg1 ;
-(void)internalRenderContent;
-(BOOL)exportAutomatically;
-(void)internalExportContent;
-(id)exportProgressHandler;
-(UIImage *)fullCanvasSnapshotForPreview;
-(BOOL)isGIFCapeable;
-(void)setNormalizedRotatedCropRect:(CGRect)arg1 ;
-(void)didRenderUsingFastPath;
-(BOOL)renderingInProgress;
-(BOOL)needsRegeneratePreviewImageFromSource;
-(BOOL)needsRender;
-(void)dealloc;
-(id)description;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(id)identifier;
-(void)didReceiveMemoryWarning;
-(NSDate *)date;
-(BOOL)isEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(WARichText *)text;
-(void)setText:(WARichText *)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(NSString *)UUID;
-(NSString *)accessibilityLabel;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(NSString *)accessibilityValue;
-(UIImage *)renderedImage;
-(UIImage *)thumbnail;
-(BOOL)isVideo;
-(NSURL *)sourceURL;
-(void)setCollectionID:(NSString *)arg1 ;
-(NSString *)collectionID;
-(BOOL)isPlaceholder;
-(NSURL *)referenceURL;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)setNeedsRender;
@end

