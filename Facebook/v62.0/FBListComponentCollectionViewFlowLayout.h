/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@protocol FBSectionedDataSourceReading, UICollectionViewDelegateFlowLayout, FBListViewLayoutListener;
@class NSDictionary;

@interface FBListComponentCollectionViewFlowLayout : UICollectionViewFlowLayout {

	NSDictionary* _fakeSectionRanges;
	BOOL _shouldAdjustForContentInsets;
	BOOL _delegateRespondsToInsetForSectionAtIndex;
	BOOL _shouldAdjustAttributes;
	id<FBSectionedDataSourceReading> _dataSource;
	id<UICollectionViewDelegateFlowLayout> _delegate;
	id<FBListViewLayoutListener> _layoutListener;

}

@property (assign,nonatomic,__weak) id<UICollectionViewDelegateFlowLayout> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL delegateRespondsToInsetForSectionAtIndex;                       //@synthesize delegateRespondsToInsetForSectionAtIndex=_delegateRespondsToInsetForSectionAtIndex - In the implementation block
@property (nonatomic,retain) id<FBListViewLayoutListener> layoutListener;                         //@synthesize layoutListener=_layoutListener - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustAttributes;                                         //@synthesize shouldAdjustAttributes=_shouldAdjustAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<FBSectionedDataSourceReading> dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustForContentInsets;                                   //@synthesize shouldAdjustForContentInsets=_shouldAdjustForContentInsets - In the implementation block
-(id)initWithLayoutListener:(id)arg1 ;
-(BOOL)shouldAdjustForContentInsets;
-(void)setShouldAdjustForContentInsets:(BOOL)arg1 ;
-(id)updateLayoutAttributeInsetsIfNeeded:(id)arg1 ;
-(id)updateAttributesAtIndexPath:(id)arg1 ;
-(void)updateLayoutAttributesForSectionHeadersIfNeeded:(id)arg1 ;
-(void)updateLayoutAttributesForSectionHeaders:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(CGRect)frameFromIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(BOOL)delegateRespondsToInsetForSectionAtIndex;
-(void)setDelegateRespondsToInsetForSectionAtIndex:(BOOL)arg1 ;
-(id<FBListViewLayoutListener>)layoutListener;
-(void)setLayoutListener:(id<FBListViewLayoutListener>)arg1 ;
-(BOOL)shouldAdjustAttributes;
-(void)setShouldAdjustAttributes:(BOOL)arg1 ;
-(void)setDataSource:(id<FBSectionedDataSourceReading>)arg1 ;
-(void)setDelegate:(id<UICollectionViewDelegateFlowLayout>)arg1 ;
-(id<FBSectionedDataSourceReading>)dataSource;
-(id<UICollectionViewDelegateFlowLayout>)delegate;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)finalizeCollectionViewUpdates;
@end
