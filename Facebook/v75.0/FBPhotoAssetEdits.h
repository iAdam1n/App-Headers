/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString, NSArray, FBCPUImageFilterState, FBPhotoCropInfo, NSDictionary, FBTagSuggestionLoggingData;

@interface FBPhotoAssetEdits : NSObject <NSCoding, NSCopying> {

	UIImage* _thumbnailFiltered;
	UIImage* _thumbnailCropped;
	NSString* _sphericalParameters;
	BOOL _isLivePhotoEnabled;
	BOOL _is360PhotoEnabled;
	UIImage* _thumbnailStandard;
	NSArray* _selectedFilters;
	FBCPUImageFilterState* _cpuFilterState;
	FBPhotoCropInfo* _cropInfo;
	UIImage* _doodlesLayer;
	NSArray* _faceFeatures;
	NSArray* _tagsEdges;
	NSDictionary* _removedAutoTagsEdges;
	FBTagSuggestionLoggingData* _tagSuggestionLoggingData;
	UIImage* _photoOverlayAttachmentsLayer;
	NSArray* _photoOverlays;

}

@property (nonatomic,readonly) UIImage * thumbnailStandard;                                             //@synthesize thumbnailStandard=_thumbnailStandard - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnailFiltered;                                             //@synthesize thumbnailFiltered=_thumbnailFiltered - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnailCropped;                                              //@synthesize thumbnailCropped=_thumbnailCropped - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectedFilters;                                          //@synthesize selectedFilters=_selectedFilters - In the implementation block
@property (nonatomic,readonly) FBCPUImageFilterState * cpuFilterState;                                  //@synthesize cpuFilterState=_cpuFilterState - In the implementation block
@property (nonatomic,readonly) FBPhotoCropInfo * cropInfo;                                              //@synthesize cropInfo=_cropInfo - In the implementation block
@property (nonatomic,readonly) UIImage * doodlesLayer;                                                  //@synthesize doodlesLayer=_doodlesLayer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * faceFeatures;                                             //@synthesize faceFeatures=_faceFeatures - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tagsEdges;                                                //@synthesize tagsEdges=_tagsEdges - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * removedAutoTagsEdges;                                //@synthesize removedAutoTagsEdges=_removedAutoTagsEdges - In the implementation block
@property (nonatomic,copy,readonly) FBTagSuggestionLoggingData * tagSuggestionLoggingData;              //@synthesize tagSuggestionLoggingData=_tagSuggestionLoggingData - In the implementation block
@property (nonatomic,readonly) UIImage * photoOverlayAttachmentsLayer;                                  //@synthesize photoOverlayAttachmentsLayer=_photoOverlayAttachmentsLayer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * photoOverlays;                                            //@synthesize photoOverlays=_photoOverlays - In the implementation block
@property (nonatomic,readonly) BOOL isLivePhotoEnabled;                                                 //@synthesize isLivePhotoEnabled=_isLivePhotoEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * sphericalParameters;                                     //@synthesize sphericalParameters=_sphericalParameters - In the implementation block
@property (nonatomic,readonly) BOOL is360PhotoEnabled;                                                  //@synthesize is360PhotoEnabled=_is360PhotoEnabled - In the implementation block
+(id)propertiesToSkipForCoding;
-(id)initWithThumbnailStandard:(id)arg1 thumbnailFiltered:(id)arg2 thumbnailCropped:(id)arg3 selectedFilters:(id)arg4 cpuFilterState:(id)arg5 cropInfo:(id)arg6 doodlesLayer:(id)arg7 faceFeatures:(id)arg8 tagsEdges:(id)arg9 removedAutoTagsEdges:(id)arg10 tagSuggestionLoggingData:(id)arg11 photoOverlayAttachmentsLayer:(id)arg12 photoOverlays:(id)arg13 isLivePhotoEnabled:(BOOL)arg14 sphericalParameters:(id)arg15 is360PhotoEnabled:(BOOL)arg16 ;
-(BOOL)is360PhotoEnabled;
-(NSArray *)tagsEdges;
-(BOOL)isLivePhotoEnabled;
-(FBCPUImageFilterState *)cpuFilterState;
-(NSString *)sphericalParameters;
-(UIImage *)thumbnailCropped;
-(UIImage *)thumbnailFiltered;
-(NSArray *)faceFeatures;
-(NSArray *)photoOverlays;
-(UIImage *)doodlesLayer;
-(UIImage *)photoOverlayAttachmentsLayer;
-(BOOL)isEqualToEditsIgnoringTagsAndThumbnails:(id)arg1 ;
-(UIImage *)thumbnailStandard;
-(NSArray *)selectedFilters;
-(NSDictionary *)removedAutoTagsEdges;
-(FBTagSuggestionLoggingData *)tagSuggestionLoggingData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBPhotoCropInfo *)cropInfo;
@end

