/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMediaAssetProtocol.h>
#import <Messenger/FBEditableIdentifiablePhoto.h>

@class UIImage, NSString, FBPhotoAssetEdits, NSDictionary;

@interface FBPhotoAsset : NSObject <FBMediaAssetProtocol, FBEditableIdentifiablePhoto> {

	BOOL _isLivePhoto;
	BOOL _isAnimatedGIF;
	NSString* _assetID;
	unsigned long long _assetType;
	FBPhotoAssetEdits* _edits;
	UIImage* _standardImage;
	UIImage* _standardCroppedImage;
	UIImage* _standardFilteredImage;
	NSDictionary* _derivedContext;

}

@property (nonatomic,copy,readonly) NSString * assetID;                        //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,readonly) BOOL isLivePhoto;                               //@synthesize isLivePhoto=_isLivePhoto - In the implementation block
@property (assign,nonatomic) unsigned long long assetType;                     //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) BOOL isAnimatedGIF;                             //@synthesize isAnimatedGIF=_isAnimatedGIF - In the implementation block
@property (nonatomic,retain) FBPhotoAssetEdits * edits;                        //@synthesize edits=_edits - In the implementation block
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,readonly) UIImage * displayThumbnailImage; 
@property (nonatomic,retain) UIImage * standardImage;                          //@synthesize standardImage=_standardImage - In the implementation block
@property (nonatomic,retain) UIImage * standardCroppedImage;                   //@synthesize standardCroppedImage=_standardCroppedImage - In the implementation block
@property (nonatomic,retain) UIImage * standardFilteredImage;                  //@synthesize standardFilteredImage=_standardFilteredImage - In the implementation block
@property (nonatomic,readonly) UIImage * preFilterImage; 
@property (nonatomic,readonly) UIImage * preFilterThumbnailImage; 
@property (nonatomic,copy) NSDictionary * derivedContext;                      //@synthesize derivedContext=_derivedContext - In the implementation block
@property (nonatomic,readonly) BOOL isReadyForUse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAnimatedGIF;
-(FBPhotoAssetEdits *)edits;
-(void)setDisplayImage:(UIImage *)arg1 ;
-(void)setEdits:(FBPhotoAssetEdits *)arg1 ;
-(void)setStandardFilteredImage:(UIImage *)arg1 ;
-(void)setStandardCroppedImage:(UIImage *)arg1 ;
-(void)setStandardImage:(UIImage *)arg1 ;
-(UIImage *)standardCroppedImage;
-(UIImage *)preFilterThumbnailImage;
-(BOOL)isReadyForUse;
-(UIImage *)standardFilteredImage;
-(UIImage *)standardImage;
-(id)initWithAssetID:(id)arg1 thumbnail:(id)arg2 isLivePhoto:(BOOL)arg3 ;
-(UIImage *)displayThumbnailImage;
-(UIImage *)preFilterImage;
-(NSDictionary *)derivedContext;
-(void)setDerivedContext:(NSDictionary *)arg1 ;
-(NSString *)description;
-(UIImage *)thumbnail;
-(UIImage *)displayImage;
-(void)setAssetType:(unsigned long long)arg1 ;
-(BOOL)isLivePhoto;
-(unsigned long long)assetType;
-(NSString *)assetID;
@end
