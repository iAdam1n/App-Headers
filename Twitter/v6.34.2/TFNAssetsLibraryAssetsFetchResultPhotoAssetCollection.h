/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNAssetsLibraryPhotoAssetCollection.h>
#import <Twitter/TFNPhotoLibraryChangeObserver.h>

@class TFNAssetsLibraryPhotoFetchResult, NSString;

@interface TFNAssetsLibraryAssetsFetchResultPhotoAssetCollection : TFNAssetsLibraryPhotoAssetCollection <TFNPhotoLibraryChangeObserver> {

	TFNAssetsLibraryPhotoFetchResult* _fetchResult;
	NSString* _localizedTitle;
	unsigned long long _estimatedAssetCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fetchWithOptions:(id)arg1 ;
-(id)initWithAssetsFetchResult:(id)arg1 localizedTitle:(id)arg2 ;
-(unsigned long long)estimatedAssetCount;
-(long long)assetCollectionType;
-(long long)assetCollectionSubtype;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)localizedTitle;
@end

