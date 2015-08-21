/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSURL;

@interface EBKImagePickerDataAsset : NSObject {

	NSURL* _assetURL;
	NSURL* _fileURL;
	NSURL* _thumbnailURL;

}

@property (nonatomic,retain) NSURL * assetURL;                  //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                   //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSURL * thumbnailURL;              //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
-(id)initWithAssetURL:(id)arg1 fileURL:(id)arg2 thumbnailURL:(id)arg3 ;
-(NSURL *)fileURL;
-(NSURL *)assetURL;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setAssetURL:(NSURL *)arg1 ;
@end
