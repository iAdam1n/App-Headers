/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:49 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBListViewScrollManager : NSObject
-(id)scrollStateForTableView:(id)arg1 preferredScrollPosition:(unsigned long long)arg2 ;
-(void)restoreTableView:(id)arg1 withScrollState:(id)arg2 preferredScrollPosition:(unsigned long long)arg3 ;
-(id)_scrollStateForTableOrCollectionView:(id)arg1 withScrollDirection:(unsigned long long)arg2 rowFrame:(CGRect)arg3 rowIndex:(long long)arg4 preferredScrollPosition:(unsigned long long)arg5 ;
-(void)_scrollToDefaultForTableOrCollectionView:(id)arg1 scrollDirection:(unsigned long long)arg2 preferredScrollPosition:(unsigned long long)arg3 ;
-(double)_contentOffesetForTableOrCollectionView:(id)arg1 rowFrame:(CGRect)arg2 cellOffset:(double)arg3 scrollDirection:(unsigned long long)arg4 preferredScrollPosition:(unsigned long long)arg5 ;
-(id)scrollStateForCollectionView:(id)arg1 preferredScrollPosition:(unsigned long long)arg2 ;
-(void)restoreCollectionView:(id)arg1 withScrollState:(id)arg2 preferredScrollPosition:(unsigned long long)arg3 ;
@end
