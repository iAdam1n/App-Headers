/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>
#import <TestFlight/ITCDataSourceDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@class ITCSwipeToEditStateMachine, NSString;

@interface ITCCollectionViewController : UICollectionViewController <ITCDataSourceDelegate, UICollectionViewDelegate> {

	BOOL _editing;
	ITCSwipeToEditStateMachine* _swipeStateMachine;

}

@property (assign,getter=isEditing,nonatomic) BOOL editing;                               //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) ITCSwipeToEditStateMachine * swipeStateMachine;              //@synthesize swipeStateMachine=_swipeStateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataSource:(id)arg1 didInsertSections:(id)arg2 direction:(int)arg3 ;
-(void)dataSource:(id)arg1 didRemoveSections:(id)arg2 direction:(int)arg3 ;
-(void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3 direction:(int)arg4 ;
-(void)dealloc;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCollectionView:(id)arg1 ;
-(void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)dataSource:(id)arg1 didRefreshSections:(id)arg2 ;
-(void)dataSourceDidReloadData:(id)arg1 ;
-(void)dataSource:(id)arg1 performBatchUpdate:(/*^block*/id)arg2 complete:(/*^block*/id)arg3 ;
-(void)willDismissActionSheetFromCell:(id)arg1 ;
-(ITCSwipeToEditStateMachine *)swipeStateMachine;
-(void)setSwipeStateMachine:(ITCSwipeToEditStateMachine *)arg1 ;
-(void)shutActionPaneAnimated:(BOOL)arg1 ;
-(void)swipeToDeleteCell:(id)arg1 ;
@end

