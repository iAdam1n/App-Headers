/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBListViewScrollManager : NSObject
-(id)_scrollStateForTableOrCollectionView:(id)arg1 withScrollDirection:(unsigned long long)arg2 rowFrame:(CGRect)arg3 rowIndex:(long long)arg4 preferredScrollPosition:(unsigned long long)arg5 ;
-(void)_scrollToDefaultForTableOrCollectionView:(id)arg1 scrollDirection:(unsigned long long)arg2 preferredScrollPosition:(unsigned long long)arg3 ;
-(double)_contentOffesetForTableOrCollectionView:(id)arg1 rowFrame:(CGRect)arg2 cellOffset:(double)arg3 scrollDirection:(unsigned long long)arg4 preferredScrollPosition:(unsigned long long)arg5 ;
-(id)scrollStateForTableView:(id)arg1 preferredScrollPosition:(unsigned long long)arg2 ;
-(id)scrollStateForCollectionView:(id)arg1 preferredScrollPosition:(unsigned long long)arg2 ;
-(void)restoreTableView:(id)arg1 withScrollState:(id)arg2 preferredScrollPosition:(unsigned long long)arg3 ;
-(void)restoreCollectionView:(id)arg1 withScrollState:(id)arg2 preferredScrollPosition:(unsigned long long)arg3 ;
@end

