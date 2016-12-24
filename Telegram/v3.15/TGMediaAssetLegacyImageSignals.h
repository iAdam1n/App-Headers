/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGMediaAssetImageSignals.h>

@interface TGMediaAssetLegacyImageSignals : TGMediaAssetImageSignals
+(id)playerItemForVideoAsset:(id)arg1 ;
+(void)startCachingImagesForAssets:(id)arg1 imageType:(int)arg2 size:(CGSize)arg3 ;
+(void)stopCachingImagesForAssets:(id)arg1 imageType:(int)arg2 size:(CGSize)arg3 ;
+(id)imageForAsset:(id)arg1 imageType:(int)arg2 size:(CGSize)arg3 allowNetworkAccess:(BOOL)arg4 ;
+(id)imageDataForAsset:(id)arg1 allowNetworkAccess:(BOOL)arg2 ;
+(id)avAssetForVideoAsset:(id)arg1 allowNetworkAccess:(BOOL)arg2 ;
+(id)fileAttributesForAsset:(id)arg1 ;
+(id)saveUncompressedVideoForAsset:(id)arg1 toPath:(id)arg2 allowNetworkAccess:(BOOL)arg3 ;
+(BOOL)usesPhotoFramework;
+(id)_editedImageWithCGImage:(CGImageRef)arg1 representation:(id)arg2 ;
+(id)_processingQueue;
+(id)imageMetadataWithAsset:(id)arg1 ;
+(void)stopCachingImagesForAllAssets;
@end
