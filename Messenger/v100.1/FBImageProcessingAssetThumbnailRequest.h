/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBImageProcessingConcurrentRequest.h>

@class UIImage, NSURL;

@interface FBImageProcessingAssetThumbnailRequest : FBImageProcessingConcurrentRequest {

	UIImage* _generatedThumbnail;
	NSURL* _assetURL;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) NSURL * assetURL;                            //@synthesize assetURL=_assetURL - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                        //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,readonly) UIImage * generatedThumbnail;              //@synthesize generatedThumbnail=_generatedThumbnail - In the implementation block
-(id)initWithAssetURL:(id)arg1 thumbnailSize:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 cancelBlock:(/*^block*/id)arg4 ;
-(UIImage *)generatedThumbnail;
-(void)setAssetURL:(NSURL *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)assetURL;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)executeWithContext:(id)arg1 ;
@end
