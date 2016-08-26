/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGPreparedMessage.h>

@class NSString;

@interface TGPreparedLocalImageMessage : TGPreparedMessage {

	NSString* _assetUrl;
	NSString* _localImageDataPath;
	NSString* _localThumbnailDataPath;
	NSString* _caption;
	CGSize _imageSize;
	CGSize _thumbnailSize;

}

@property (assign,nonatomic) CGSize imageSize;                               //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                           //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,retain) NSString * assetUrl;                            //@synthesize assetUrl=_assetUrl - In the implementation block
@property (nonatomic,retain) NSString * localImageDataPath;                  //@synthesize localImageDataPath=_localImageDataPath - In the implementation block
@property (nonatomic,retain) NSString * localThumbnailDataPath;              //@synthesize localThumbnailDataPath=_localThumbnailDataPath - In the implementation block
@property (nonatomic,retain) NSString * caption;                             //@synthesize caption=_caption - In the implementation block
+(id)_fileUrlForStoredData:(id)arg1 ;
+(id)_fileUrlForStoredFile:(id)arg1 ;
+(id)messageWithImageData:(id)arg1 imageSize:(CGSize)arg2 thumbnailData:(id)arg3 thumbnailSize:(CGSize)arg4 assetUrl:(id)arg5 caption:(id)arg6 replyMessage:(id)arg7 replyMarkup:(id)arg8 ;
+(id)messageWithLocalImageDataPath:(id)arg1 imageSize:(CGSize)arg2 localThumbnailDataPath:(id)arg3 thumbnailSize:(CGSize)arg4 assetUrl:(id)arg5 caption:(id)arg6 replyMessage:(id)arg7 replyMarkup:(id)arg8 ;
+(id)messageByCopyingMessageData:(id)arg1 ;
-(void)setLocalThumbnailDataPath:(NSString *)arg1 ;
-(void)setAssetUrl:(NSString *)arg1 ;
-(NSString *)localThumbnailDataPath;
-(NSString *)assetUrl;
-(NSString *)localImageDataPath;
-(void)setLocalImageDataPath:(NSString *)arg1 ;
-(CGSize)imageSize;
-(id)message;
-(CGSize)thumbnailSize;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
@end
