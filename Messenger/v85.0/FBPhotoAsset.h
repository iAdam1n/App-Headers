/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMediaAssetProtocol.h>
#import <Messenger/FBEditableIdentifiablePhoto.h>

@protocol OS_dispatch_semaphore;
@class UIImage, NSString, FBPhotoAssetEdits, NSData, NSObject, NSDictionary, FBGLFilter, FBCPUImageFilterState;

@interface FBPhotoAsset : NSObject <FBMediaAssetProtocol, FBEditableIdentifiablePhoto> {

	FBPhotoAssetEdits* _edits;
	UIImage* _thumbnail;
	NSData* _assetData;
	NSObject*<OS_dispatch_semaphore> _serializeSemaphore;
	BOOL _isScreenShot;
	BOOL _isLivePhoto;
	NSString* _assetType;
	NSString* _assetID;
	UIImage* _standardImage;
	UIImage* _standardCroppedImage;
	UIImage* _standardFilteredImage;
	NSDictionary* _derivedContext;

}

@property (nonatomic,copy) NSString * assetType;                                      //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                                     //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetID;                               //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) BOOL isScreenShot;                                     //@synthesize isScreenShot=_isScreenShot - In the implementation block
@property (nonatomic,readonly) BOOL isLivePhoto;                                      //@synthesize isLivePhoto=_isLivePhoto - In the implementation block
@property (nonatomic,retain) UIImage * standardImage;                                 //@synthesize standardImage=_standardImage - In the implementation block
@property (nonatomic,retain) UIImage * standardCroppedImage;                          //@synthesize standardCroppedImage=_standardCroppedImage - In the implementation block
@property (nonatomic,retain) UIImage * standardFilteredImage;                         //@synthesize standardFilteredImage=_standardFilteredImage - In the implementation block
@property (nonatomic,readonly) UIImage * preFilterImage; 
@property (nonatomic,readonly) UIImage * preFilterThumbnailImage; 
@property (nonatomic,retain) FBPhotoAssetEdits * edits;                               //@synthesize edits=_edits - In the implementation block
@property (nonatomic,readonly) BOOL layeredFilterApplied; 
@property (nonatomic,readonly) BOOL anyFilterApplied; 
@property (nonatomic,readonly) BOOL luxApplied; 
@property (nonatomic,readonly) BOOL hasPhotoOverlayLayer; 
@property (nonatomic,retain) NSDictionary * derivedContext;                           //@synthesize derivedContext=_derivedContext - In the implementation block
@property (nonatomic,readonly) BOOL isReadyForUse; 
@property (nonatomic,readonly) FBGLFilter * appliedNonLuxFilter; 
@property (nonatomic,readonly) FBCPUImageFilterState * appliedCPUFilter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isAnimatedGIF; 
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,retain) UIImage * displayThumbnailImage; 
-(NSString *)assetID;
-(BOOL)isAnimatedGIF;
-(FBPhotoAssetEdits *)edits;
-(void)setDisplayImage:(UIImage *)arg1 ;
-(void)setEdits:(FBPhotoAssetEdits *)arg1 ;
-(BOOL)anyFilterApplied;
-(FBGLFilter *)appliedNonLuxFilter;
-(BOOL)luxApplied;
-(void)setDisplayThumbnailImage:(UIImage *)arg1 ;
-(UIImage *)displayThumbnailImage;
-(UIImage *)preFilterThumbnailImage;
-(void)setStandardImage:(UIImage *)arg1 ;
-(FBCPUImageFilterState *)appliedCPUFilter;
-(BOOL)isReadyForUse;
-(void)addPhotoTagsEdge:(id)arg1 withSession:(id)arg2 ;
-(void)removePhotoTagsEdge:(id)arg1 withSession:(id)arg2 ;
-(void)removeTagSuggestionsForPhotoTagsEdge:(id)arg1 withSession:(id)arg2 ;
-(id)initWithAssetID:(id)arg1 thumbnail:(id)arg2 isScreenShot:(BOOL)arg3 isLivePhoto:(BOOL)arg4 ;
-(void)addPhotoTagsEdges:(id)arg1 withSession:(id)arg2 ;
-(BOOL)isScreenShot;
-(BOOL)layeredFilterApplied;
-(UIImage *)standardImage;
-(NSDictionary *)derivedContext;
-(void)setDerivedContext:(NSDictionary *)arg1 ;
-(void)setStandardFilteredImage:(UIImage *)arg1 ;
-(UIImage *)preFilterImage;
-(UIImage *)standardFilteredImage;
-(UIImage *)standardCroppedImage;
-(void)setStandardCroppedImage:(UIImage *)arg1 ;
-(BOOL)hasPhotoOverlayLayer;
-(NSString *)assetType;
-(NSString *)description;
-(UIImage *)thumbnail;
-(UIImage *)displayImage;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(BOOL)isLivePhoto;
@end
