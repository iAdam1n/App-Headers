/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAGimmickDataSource.h>
#import <WhatsApp/NSFetchedResultsControllerDelegate.h>

@class NSFetchedResultsController, NSMutableArray, NSMutableIndexSet, NSString;

@interface WACollectedGimmickDataSource : WAGimmickDataSource <NSFetchedResultsControllerDelegate> {

	NSFetchedResultsController* _resultsController;
	NSMutableArray* _insertedIndexPaths;
	NSMutableArray* _deletedIndexPaths;
	NSMutableArray* _updatedIndexPaths;
	NSMutableArray* _movedIndexPathPairs;
	NSMutableIndexSet* _insertedSections;
	NSMutableIndexSet* _deletedSections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(id)init;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
@end

