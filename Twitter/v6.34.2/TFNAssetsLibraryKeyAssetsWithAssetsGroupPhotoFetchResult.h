/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNAssetsLibraryPhotoFetchResult.h>

@class ALAssetsGroup, NSURL;

@interface TFNAssetsLibraryKeyAssetsWithAssetsGroupPhotoFetchResult : TFNAssetsLibraryPhotoFetchResult {

	ALAssetsGroup* _assetGroup;
	NSURL* _url;

}
-(id)changeDetailsForChange:(id)arg1 ;
-(id)initWithArray:(id)arg1 options:(id)arg2 ;
-(id)initWithAssetsGroup:(id)arg1 ;
-(void)assetsLibraryPhotoLibraryDidChange:(id)arg1 ;
-(id)initWithAssets:(id)arg1 assetsGroup:(id)arg2 ;
-(void)_update;
@end

