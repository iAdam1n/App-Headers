/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, FBImageDownloader;

@interface FBCollegeCommunityNuxIllustrationImageSpecifier : NSObject {

	NSURL* _url;
	FBImageDownloader* _imageDownloader;
	unsigned long long _illustrationState;

}

@property (nonatomic,copy,readonly) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) FBImageDownloader * imageDownloader;               //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) unsigned long long illustrationState;              //@synthesize illustrationState=_illustrationState - In the implementation block
-(FBImageDownloader *)imageDownloader;
-(id)initWithURL:(id)arg1 imageDownloader:(id)arg2 illustrationState:(unsigned long long)arg3 ;
-(unsigned long long)illustrationState;
-(NSURL *)url;
@end
