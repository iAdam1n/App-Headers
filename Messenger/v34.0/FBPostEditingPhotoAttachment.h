/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPhotoAttachmentProtocol.h>

@class FBAssetMetadata, FBMemPhoto, FBImageDownloader, UIImage, NSString, NSDate, NSArray, CLLocation, FBPhotoAssetEdits;

@interface FBPostEditingPhotoAttachment : NSObject <FBPhotoAttachmentProtocol> {

	FBAssetMetadata* _metadata;
	FBMemPhoto* _photo;
	BOOL _isDraftPost;
	id _imageDownloadRequest;
	FBImageDownloader* _imageDownloader;
	BOOL _allowEditing;
	BOOL _allowRemoval;
	BOOL _selectedFromMultiPicker;
	BOOL _showServerProcessingProgress;
	UIImage* _thumbnailImage;
	NSString* _assetID;
	NSDate* _creationDate;
	NSString* _caption;
	NSArray* _mentions;
	CLLocation* _location;
	NSArray* _publishedPhotoTags;
	NSArray* _tagsEdges;
	long long _sourceType;
	UIImage* _displayImage;
	NSArray* _urls;
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImage * thumbnailImage;                         //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) BOOL allowEditing;                                //@synthesize allowEditing=_allowEditing - In the implementation block
@property (assign,nonatomic) BOOL allowRemoval;                                //@synthesize allowRemoval=_allowRemoval - In the implementation block
@property (nonatomic,copy) NSString * assetID;                                 //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) FBAssetMetadata * metadata; 
@property (nonatomic,retain) NSDate * creationDate;                            //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) BOOL selectedFromMultiPicker;                   //@synthesize selectedFromMultiPicker=_selectedFromMultiPicker - In the implementation block
@property (nonatomic,copy) NSString * caption;                                 //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSArray * mentions;                                 //@synthesize mentions=_mentions - In the implementation block
@property (assign,nonatomic) BOOL showServerProcessingProgress;                //@synthesize showServerProcessingProgress=_showServerProcessingProgress - In the implementation block
@property (nonatomic,retain) CLLocation * location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSArray * publishedPhotoTags;              //@synthesize publishedPhotoTags=_publishedPhotoTags - In the implementation block
@property (nonatomic,copy) NSArray * tagsEdges;                                //@synthesize tagsEdges=_tagsEdges - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                               //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) long long sourceType;                           //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) UIImage * displayImage;                           //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,copy) NSArray * urls;                                     //@synthesize urls=_urls - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresUpload; 
@property (nonatomic,copy,readonly) NSString * existingFBID; 
@property (nonatomic,retain) FBPhotoAssetEdits * edits; 
+(id)propertiesToSkipForCoding;
-(NSString *)assetID;
-(NSArray *)tagsEdges;
-(void)setAssetID:(NSString *)arg1 ;
-(void)loadImageDataForUploadWithCompressionRate:(double)arg1 maximumDimension:(int)arg2 specialCasePanoramas:(BOOL)arg3 loggingBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)supportsQualitySampling;
-(BOOL)isPhotoCropped;
-(NSArray *)publishedPhotoTags;
-(void)setTagsEdges:(NSArray *)arg1 ;
-(id)visualDedupRepresentation;
-(void)loadThumbnailImageFromSourceForUserSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)allowRemoval;
-(void)setAllowRemoval:(BOOL)arg1 ;
-(BOOL)selectedFromMultiPicker;
-(BOOL)requiresUpload;
-(NSString *)existingFBID;
-(BOOL)showServerProcessingProgress;
-(void)setShowServerProcessingProgress:(BOOL)arg1 ;
-(void)setDisplayImage:(UIImage *)arg1 ;
-(void)_loadImageIsHighQuality:(BOOL)arg1 userSession:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPhoto:(id)arg1 mentions:(id)arg2 isDraftPost:(BOOL)arg3 ;
-(void)loadDisplayImageFromSourceForUserSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAllowEditing:(BOOL)arg1 ;
-(BOOL)allowEditing;
-(void)setMentions:(NSArray *)arg1 ;
-(NSArray *)mentions;
-(void)cancel;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)imageSize;
-(CLLocation *)location;
-(long long)sourceType;
-(UIImage *)thumbnailImage;
-(UIImage *)displayImage;
-(NSDate *)creationDate;
-(void)setLocation:(CLLocation *)arg1 ;
-(FBAssetMetadata *)metadata;
-(NSArray *)urls;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setCaption:(NSString *)arg1 ;
-(NSString *)caption;
-(void)setUrls:(NSArray *)arg1 ;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(unsigned long long)attachmentType;
@end
