/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAssetProtocol.h>

@class UIImage, NSDate, NSString;

@interface FBAssetBackedByUIImage : NSObject <FBAssetProtocol> {

	UIImage* _image;
	UIImage* _thumbnailImage;
	NSDate* _date;
	NSString* _assetID;

}

@property (nonatomic,readonly) UIImage * image;                     //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)backedStorage;
-(BOOL)isLikely360Photo;
-(id)initWithImage:(id)arg1 ;
-(double)duration;
-(long long)orientation;
-(id)date;
-(UIImage *)image;
-(id)location;
-(id)thumbnail;
-(CGSize)dimensions;
-(id)aspectRatioThumbnail;
-(BOOL)isLivePhoto;
-(id)assetURL;
-(unsigned long long)assetType;
-(id)phAsset;
@end
