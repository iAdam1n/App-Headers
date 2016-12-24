/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKNetworkImageDownloading;
@class FBScenePath;

@interface FBLocalPhotoMenuComponentContext : NSObject {

	id<CKNetworkImageDownloading> _imageDownloader;
	FBScenePath* _scenePath;

}

@property (nonatomic,readonly) id<CKNetworkImageDownloading> imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                    //@synthesize scenePath=_scenePath - In the implementation block
-(id<CKNetworkImageDownloading>)imageDownloader;
-(FBScenePath *)scenePath;
-(id)initWithImageDownloader:(id)arg1 scenePath:(id)arg2 ;
@end
