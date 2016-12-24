/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@protocol FBPlacesMapCardLayoutProvider;
@class NSArray;

@interface FBPlacesMapCollectionViewLayout : UICollectionViewLayout {

	id<FBPlacesMapCardLayoutProvider> _cardLayoutProvider;
	NSArray* _cardSizes;

}
-(id)initWithCardLayoutProvider:(id)arg1 ;
-(id)_bottomAlignedLayoutAttributesForItemWithSize:(CGSize)arg1 atIndexPath:(id)arg2 ;
-(long long)indexOfClosestItemToHorisontalPos:(double)arg1 ;
-(double)horisontalPosForItemWithIndex:(long long)arg1 ;
-(double)maxHorisontalOffset;
-(void)updateWithItemSizes:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
@end
