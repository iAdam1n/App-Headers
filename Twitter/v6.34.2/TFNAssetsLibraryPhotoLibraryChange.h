/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary, NSSet;

@interface TFNAssetsLibraryPhotoLibraryChange : NSObject {

	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) BOOL shouldReloadAllAssetsGroupsAndAssets; 
@property (nonatomic,readonly) BOOL possiblyNeedToReloadAllAssetsGroupsAndAssets; 
@property (nonatomic,readonly) NSSet * insertedAssetsGroupURLs; 
@property (nonatomic,readonly) NSSet * deletedAssetsGroupURLs; 
@property (nonatomic,readonly) NSSet * updatedAssetsGroupURLs; 
@property (nonatomic,readonly) NSSet * updatedAssetURLs; 
-(BOOL)shouldReloadAllAssetsGroupsAndAssets;
-(NSSet *)updatedAssetURLs;
-(NSSet *)updatedAssetsGroupURLs;
-(NSSet *)deletedAssetsGroupURLs;
-(BOOL)possiblyNeedToReloadAllAssetsGroupsAndAssets;
-(NSSet *)insertedAssetsGroupURLs;
-(id)initWithUserInfo:(id)arg1 ;
-(id)init;
@end

