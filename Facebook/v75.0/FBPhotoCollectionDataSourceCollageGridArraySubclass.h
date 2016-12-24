/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPhotoCollectionDataSource.h>

@protocol FBPhotoCollectionDataSourceArraySubclassSyncDelegate;
@class NSArray;

@interface FBPhotoCollectionDataSourceCollageGridArraySubclass : FBPhotoCollectionDataSource {

	NSArray* _photos;
	id<FBPhotoCollectionDataSourceArraySubclassSyncDelegate> _syncDelegate;
	BOOL _selectedPhotoIsInvalid;
	unsigned long long _photoIndex;

}
-(unsigned long long)photoIndex;
-(BOOL)hasMoreToSync;
-(void)syncMore:(/*^block*/id)arg1 ;
-(BOOL)selectedPhotoIsInvalid;
-(void)setSelectedPhotoIsInvalid:(BOOL)arg1 ;
-(void)setPhotoIndex:(unsigned long long)arg1 ;
-(void)syncMoreNow:(/*^block*/id)arg1 ;
-(id)initWithPhotos:(id)arg1 selectedPhotoIndex:(unsigned long long)arg2 syncDelegate:(id)arg3 ;
-(void)updatePhotos:(id)arg1 ;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)photosCount;
-(id)photo;
@end
