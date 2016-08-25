/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <TestFlight/ITCDataSource.h>

@class NSArray;

@interface ITCBasicDataSource : ITCDataSource {

	NSArray* _items;

}

@property (nonatomic,copy) NSArray * items;              //@synthesize items=_items - In the implementation block
-(void)resetContent;
-(void)updateLoadingStateFromItems;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(void)removeItemsAtIndexes:(id)arg1 ;
-(id)indexPathsForItem:(id)arg1 ;
-(unsigned long long)countOfItems;
-(id)itemsAtIndexes:(id)arg1 ;
-(void)getItems:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceItemsAtIndexes:(id)arg1 withItems:(id)arg2 ;
@end

