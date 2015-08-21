/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class NSArray, NSString;

@interface T1PhotoGalleryAlbumPickerDataSource : NSObject <UITableViewDataSource> {

	NSArray* _groups;
	unsigned long long _selectedIndex;

}

@property (nonatomic,readonly) NSArray * groups;                              //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerTableViewCellClasses:(id)arg1 ;
-(id)initWithAssetLibraryGroups:(id)arg1 selectedIndex:(unsigned long long)arg2 ;
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)selectedIndex;
-(NSArray *)groups;
@end

