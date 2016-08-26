/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPhotosDataSourceUpdateListener.h>

@class MNAssetsListUpdateListenerAnnouncer, NSMutableArray, NSString;

@interface MNAssetsListController : NSObject <MNPhotosDataSourceUpdateListener> {

	MNAssetsListUpdateListenerAnnouncer* _announcer;
	NSMutableArray* _selectedAssets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addUpdateListener:(id)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(void)photosDataSourceDidUpdateWithSmartAlbums:(id)arg1 userAlbums:(id)arg2 changeInstance:(id)arg3 ;
-(void)clearSelectedAssets;
-(long long)numberOfSelectedAssets;
-(void)selectAsset:(id)arg1 ;
-(void)deselectAsset:(id)arg1 ;
-(id)init;
-(id)selectedAssets;
@end
