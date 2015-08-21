/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableIndexSet;

@interface TFNDataViewSectionUpdates : NSObject {

	long long _itemCount;
	NSMutableIndexSet* _inserts;
	NSMutableIndexSet* _deletes;
	NSMutableIndexSet* _reloads;
	BOOL _insertingAtBegin;
	BOOL _insertingAtEnd;
	long long _section;

}

@property (nonatomic,readonly) long long section;              //@synthesize section=_section - In the implementation block
-(void)insertingIndex:(long long)arg1 ;
-(void)deletingIndex:(long long)arg1 ;
-(void)reloadingIndex:(long long)arg1 ;
-(id)initWithSection:(long long)arg1 numberOfItems:(long long)arg2 ;
-(id)sectionBreakIndexPathsToReset;
-(id)updatedIndexPathForIndexPath:(id)arg1 ;
-(void)applyCellLayoutUpdates:(id)arg1 ;
-(long long)section;
@end

