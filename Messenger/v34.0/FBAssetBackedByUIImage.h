/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAssetProtocol.h>

@class UIImage, NSDate, NSString;

@interface FBAssetBackedByUIImage : NSObject <FBAssetProtocol> {

	UIImage* _image;
	UIImage* _thumbnailImage;
	NSDate* _date;
	NSString* _assetID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)assetUTIType;
-(id)imageWithMode:(unsigned long long)arg1 targetDimension:(long long)arg2 networkAccessAllowed:(BOOL)arg3 ;
-(BOOL)canUseFullResolutionImage;
-(BOOL)assetIsPlayable;
-(id)imageWithMode:(unsigned long long)arg1 ;
-(unsigned long long)backedStorage;
-(id)alAsset;
-(id)phAsset;
-(id)aspectRatioThumbnail;
-(id)initWithImage:(id)arg1 ;
-(id)thumbnail;
-(id)valueForProperty:(id)arg1 ;
-(CGSize)dimensions;
-(id)assetURL;
-(id)metadata;
-(id)assetType;
@end

