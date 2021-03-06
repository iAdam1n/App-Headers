/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBPhotoCropInfo, UIImage, NSDictionary, FBCPUImageFilterState, NSString, FBTagSuggestionLoggingData;

@interface FBPhotoAssetEditsBuilder : NSObject {

	NSArray* _selectedFilters;
	FBPhotoCropInfo* _cropInfo;
	UIImage* _thumbnailStandard;
	UIImage* _thumbnailFiltered;
	UIImage* _thumbnailCropped;
	NSArray* _faceFeatures;
	NSArray* _tagsEdges;
	NSDictionary* _removedAutoTagsEdges;
	FBCPUImageFilterState* _cpuFilterState;
	BOOL _isAutoEnhanceApplied;
	UIImage* _photoOverlayAttachmentsLayer;
	NSArray* _photoOverlays;
	UIImage* _doodlesLayer;
	BOOL _isLivePhotoEnabled;
	BOOL _is360PhotoEnabled;
	NSString* _sphericalParameters;
	FBTagSuggestionLoggingData* _tagSuggestionLoggingData;

}
+(id)photoAssetEditsFromExistingPhotoAssetEdits:(id)arg1 ;
+(id)photoAssetEdits;
-(id)withCropInfo:(id)arg1 ;
-(id)withIs360PhotoEnabled:(BOOL)arg1 ;
-(id)withSphericalParameters:(id)arg1 ;
-(id)withIsLivePhotoEnabled:(BOOL)arg1 ;
-(id)withTagsEdges:(id)arg1 ;
-(id)withThumbnailStandard:(id)arg1 ;
-(id)withThumbnailCropped:(id)arg1 ;
-(id)withPhotoOverlayAttachmentsLayer:(id)arg1 ;
-(id)withPhotoOverlays:(id)arg1 ;
-(id)withDoodlesLayer:(id)arg1 ;
-(id)withThumbnailFiltered:(id)arg1 ;
-(id)withSelectedFilters:(id)arg1 ;
-(id)withCpuFilterState:(id)arg1 ;
-(id)withFaceFeatures:(id)arg1 ;
-(id)withTagSuggestionLoggingData:(id)arg1 ;
-(id)withRemovedAutoTagsEdges:(id)arg1 ;
-(id)withIsAutoEnhanceApplied:(BOOL)arg1 ;
-(id)build;
@end

