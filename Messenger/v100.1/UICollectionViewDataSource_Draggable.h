/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICollectionViewDataSource_Draggable <UICollectionViewDataSource>
@optional
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
-(BOOL)collectionView:(id)arg1 canRemoveItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 removeItemAtIndexPath:(id)arg2 cell:(id)arg3;

@required
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;

@end
