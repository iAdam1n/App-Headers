/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemAlbum, NSMutableArray;

@interface FBComposerFilterAlbumsReductionTracker : NSObject {

	FBMemAlbum* _selectedAlbum;
	NSMutableArray* _filteredAlbums;

}

@property (nonatomic,retain) FBMemAlbum * selectedAlbum;                     //@synthesize selectedAlbum=_selectedAlbum - In the implementation block
@property (nonatomic,readonly) NSMutableArray * filteredAlbums;              //@synthesize filteredAlbums=_filteredAlbums - In the implementation block
-(id)initWithFilteredAlbums:(id)arg1 selectedAlbum:(id)arg2 ;
-(NSMutableArray *)filteredAlbums;
-(void)setSelectedAlbum:(FBMemAlbum *)arg1 ;
-(FBMemAlbum *)selectedAlbum;
@end
