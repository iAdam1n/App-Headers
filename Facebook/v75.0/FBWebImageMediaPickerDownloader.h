/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWebImageDownloader.h>

@class FBMediaPickerDataSourceManager, NSMutableDictionary, FBWebImageMediaPickerSpecifier, NSString;

@interface FBWebImageMediaPickerDownloader : NSObject <FBWebImageDownloader> {

	FBMediaPickerDataSourceManager* _dataSourceManager;
	NSMutableDictionary* _loadInfoBySpecifier;
	FBWebImageMediaPickerSpecifier* _currentSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 analyticsTags:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(id)initWithMediaDataSourceManager:(id)arg1 ;
-(void)_loadSpecifier:(id)arg1 withAssetSize:(long long)arg2 downloadBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)_handleThumbnailCompletion:(id)arg1 specifier:(id)arg2 assetSize:(long long)arg3 downloadBlock:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)cancel;
@end
