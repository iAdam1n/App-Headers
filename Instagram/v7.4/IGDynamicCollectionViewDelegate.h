/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol IGDynamicCollectionViewDelegate <NSObject>
@optional
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndex:(long long)arg2;
-(BOOL)collectionView:(id)arg1 canMoveItemFromIndex:(long long)arg2 toIndex:(long long)arg3;
-(BOOL)collectionView:(id)arg1 canTapItemAtIndex:(long long)arg2;
-(void)collectionView:(id)arg1 willBeginMovingView:(id)arg2;
-(void)collectionView:(id)arg1 didEndMovingView:(id)arg2;
-(void)collectionView:(id)arg1 didTapItemAtIndex:(long long)arg2;
-(void)collectionView:(id)arg1 didChangeContentSize:(CGSize)arg2;
-(void)collectionView:(id)arg1 scrollViewDidScroll:(id)arg2;

@end
