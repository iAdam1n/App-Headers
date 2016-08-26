/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class MNHorizontalLineLayoutDataSourceParams, MNHorizontalLineLayoutParamsSet, NSMutableDictionary, NSIndexPath;

@interface MNHorizontalLineLayout : UICollectionViewLayout {

	MNHorizontalLineLayoutDataSourceParams* _dataSourceParams;
	MNHorizontalLineLayoutParamsSet* _preParamsSet;
	MNHorizontalLineLayoutParamsSet* _layoutParamsSet;
	NSMutableDictionary* _attributesCache;
	BOOL _useCustomBoundsInPrepareLayout;
	CGRect _customBoundsForPrepareLayout;
	BOOL _removeOutOfBoundsItemsOnAnimatedBoundsChange;
	double _itemsSpacing;
	double _itemsAspectRatio;
	NSIndexPath* _indexPathToScrollToOnNextBoundsChange;
	UIEdgeInsets _sectionsInsets;

}

@property (nonatomic,readonly) double itemsSpacing;                                          //@synthesize itemsSpacing=_itemsSpacing - In the implementation block
@property (nonatomic,readonly) double itemsAspectRatio;                                      //@synthesize itemsAspectRatio=_itemsAspectRatio - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets sectionsInsets;                                  //@synthesize sectionsInsets=_sectionsInsets - In the implementation block
@property (nonatomic,copy) NSIndexPath * indexPathToScrollToOnNextBoundsChange;              //@synthesize indexPathToScrollToOnNextBoundsChange=_indexPathToScrollToOnNextBoundsChange - In the implementation block
-(unsigned long long)_indexOfAnyItemInRect:(CGRect)arg1 ;
-(id)_dataSourceSectionsItemCounts;
-(id)_internalLayoutAttributesForItemAtIndexPath:(id)arg1 layoutParamsSet:(id)arg2 layoutAttributesCache:(id)arg3 ;
-(id)initWithItemsAspectRatio:(double)arg1 itemsSpacing:(double)arg2 sectionsInsets:(UIEdgeInsets)arg3 removeOutOfBoundsItemsOnAnimatedBoundsChange:(BOOL)arg4 ;
-(CGRect)sectionFrameOfSectionAtIndex:(long long)arg1 ;
-(double)itemsSpacing;
-(double)itemsAspectRatio;
-(UIEdgeInsets)sectionsInsets;
-(NSIndexPath *)indexPathToScrollToOnNextBoundsChange;
-(void)setIndexPathToScrollToOnNextBoundsChange:(NSIndexPath *)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)finalizeAnimatedBoundsChange;
@end
