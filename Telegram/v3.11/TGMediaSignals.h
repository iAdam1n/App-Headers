/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Telegram/Telegram-Structs.h>
@interface TGMediaSignals : NSObject
+(id)photoThumbnailPathWithImageMedia:(id)arg1 targetSize:(CGSize)arg2 ;
+(id)videoThumbnailPathWithVideoMedia:(id)arg1 targetSize:(CGSize)arg2 ;
+(id)avatarPathWithReference:(id)arg1 ;
+(id)stickerPathWithDocumentId:(long long)arg1 accessHash:(long long)arg2 legacyThumbnailUri:(id)arg3 datacenterId:(int)arg4 size:(CGSize)arg5 ;
+(id)imageFileReferenceForLegacyUrl:(id)arg1 ;
+(id)thumbnailPathWithDirectory:(id)arg1 blur:(BOOL)arg2 targetSize:(CGSize)arg3 fileName:(id)arg4 imageFileReference:(id)arg5 ;
@end
