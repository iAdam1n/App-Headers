//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGPreparedMessage.h"

@class NSString, TGMessage;

@interface TGPreparedLocalImageMessage : TGPreparedMessage
{
    NSString *_assetUrl;
    NSString *_localImageDataPath;
    NSString *_localThumbnailDataPath;
    NSString *_caption;
    TGMessage *_replyMessage;
    struct CGSize _imageSize;
    struct CGSize _thumbnailSize;
}

+ (id)_fileUrlForStoredFile:(id)arg1;
+ (id)_fileUrlForStoredData:(id)arg1;
+ (id)messageByCopyingMessageData:(id)arg1;
+ (id)messageWithLocalImageDataPath:(id)arg1 imageSize:(struct CGSize)arg2 localThumbnailDataPath:(id)arg3 thumbnailSize:(struct CGSize)arg4 assetUrl:(id)arg5 caption:(id)arg6 replyMessage:(id)arg7;
+ (id)messageWithImageData:(id)arg1 imageSize:(struct CGSize)arg2 thumbnailData:(id)arg3 thumbnailSize:(struct CGSize)arg4 assetUrl:(id)arg5 caption:(id)arg6 replyMessage:(id)arg7;
@property(retain, nonatomic) TGMessage *replyMessage; // @synthesize replyMessage=_replyMessage;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSString *localThumbnailDataPath; // @synthesize localThumbnailDataPath=_localThumbnailDataPath;
@property(retain, nonatomic) NSString *localImageDataPath; // @synthesize localImageDataPath=_localImageDataPath;
@property(retain, nonatomic) NSString *assetUrl; // @synthesize assetUrl=_assetUrl;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (id)message;

@end
