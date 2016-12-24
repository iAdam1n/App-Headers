/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPExpressionDataSource.h>
#import <Skype/SKPExpressionArrayControllerDelegate.h>

@protocol SKPExpressionSearchDataSourceDelegate;
@class NSArray, UICollectionView, SKPExpressionArrayController, NSString, NSMutableDictionary, NSMutableSet, NSSortDescriptor;

@interface SKPExpressionSearchDataSource : SKPExpressionDataSource <SKPExpressionArrayControllerDelegate> {

	BOOL _processingList;
	NSArray* _unfilteredItems;
	UICollectionView* _collectionView;
	SKPExpressionArrayController* _arrayController;
	NSString* _searchText;
	NSMutableDictionary* _mojiToIndexPathMap;
	NSMutableSet* _mojisThatAreBeingObserved;
	NSSortDescriptor* _sortDescriptor;
	id<SKPExpressionSearchDataSourceDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * unfilteredItems;                                                //@synthesize unfilteredItems=_unfilteredItems - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                               //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) SKPExpressionArrayController * arrayController;                         //@synthesize arrayController=_arrayController - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                    //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mojiToIndexPathMap;                               //@synthesize mojiToIndexPathMap=_mojiToIndexPathMap - In the implementation block
@property (nonatomic,retain) NSMutableSet * mojisThatAreBeingObserved;                               //@synthesize mojisThatAreBeingObserved=_mojisThatAreBeingObserved - In the implementation block
@property (nonatomic,retain) NSSortDescriptor * sortDescriptor;                                      //@synthesize sortDescriptor=_sortDescriptor - In the implementation block
@property (assign,nonatomic,__weak) id<SKPExpressionSearchDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isProcessingList,nonatomic) BOOL processingList;                            //@synthesize processingList=_processingList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)borderImageForMoji;
-(id)initForCollectionView:(id)arg1 delegate:(id)arg2 ;
-(void)setupBaseArray:(id)arg1 ;
-(CGSize)sizeForCellAtIndexPath:(id)arg1 ;
-(void)setFilterTerm:(id)arg1 ;
-(unsigned long long)numberOfFilteredItems;
-(BOOL)isProcessingList;
-(void)controller:(id)arg1 didDeleteObjectsAtIndexPaths:(id)arg2 ;
-(void)controller:(id)arg1 didInsertObjectsAtIndexPaths:(id)arg2 ;
-(void)controller:(id)arg1 didMoveObjectAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)controllerDidChangeAllContent:(id)arg1 ;
-(void)controller:(id)arg1 didDeleteSectionsAtIndexes:(id)arg2 ;
-(void)controller:(id)arg1 didInsertSectionsAtIndexes:(id)arg2 ;
-(void)controller:(id)arg1 didMoveSectionAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)expressionArrayControllerDidFinaliseFlush:(id)arg1 ;
-(id)createArrayController;
-(void)registerReusableUIItemsForCollectionView:(id)arg1 ;
-(NSMutableSet *)mojisThatAreBeingObserved;
-(void)stopObservingMoji:(id)arg1 ;
-(SKPExpressionArrayController *)arrayController;
-(void)setUnfilteredItems:(NSArray *)arg1 ;
-(NSMutableDictionary *)mojiToIndexPathMap;
-(void)setProcessingList:(BOOL)arg1 ;
-(id)predicateForString:(id)arg1 ;
-(id)sortDescriptorForString:(id)arg1 ;
-(void)startObservingMoji:(id)arg1 forIndex:(id)arg2 ;
-(NSArray *)unfilteredItems;
-(void)setArrayController:(SKPExpressionArrayController *)arg1 ;
-(void)setMojiToIndexPathMap:(NSMutableDictionary *)arg1 ;
-(void)setMojisThatAreBeingObserved:(NSMutableSet *)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(void)setDelegate:(id<SKPExpressionSearchDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<SKPExpressionSearchDataSourceDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UICollectionView *)collectionView;
-(NSString *)searchText;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(void)cleanup;
-(NSSortDescriptor *)sortDescriptor;
-(void)setSortDescriptor:(NSSortDescriptor *)arg1 ;
@end
