/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/ItemListViewLayout.h>

@class NSArray, UICollectionViewLayoutAttributes;

@interface EBUMasonryGridLayout : ItemListViewLayout {

	BOOL _hasDescriptionCell;
	BOOL _hasFixedHeader;
	BOOL _simpleLayout;
	NSArray* _layouts;
	UICollectionViewLayoutAttributes* _backgroundLayout;
	CGSize _contentSize;
	CGRect _headerRect;
	CGRect _footerRect;

}

@property (nonatomic,retain) NSArray * layouts;                                                //@synthesize layouts=_layouts - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * backgroundLayout;              //@synthesize backgroundLayout=_backgroundLayout - In the implementation block
@property (assign,nonatomic) CGRect headerRect;                                                //@synthesize headerRect=_headerRect - In the implementation block
@property (assign,nonatomic) CGRect footerRect;                                                //@synthesize footerRect=_footerRect - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                               //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) BOOL simpleLayout;                                                //@synthesize simpleLayout=_simpleLayout - In the implementation block
@property (assign,nonatomic) BOOL hasDescriptionCell;                                          //@synthesize hasDescriptionCell=_hasDescriptionCell - In the implementation block
@property (assign,nonatomic) BOOL hasFixedHeader;                                              //@synthesize hasFixedHeader=_hasFixedHeader - In the implementation block
+(Class)layoutAttributesClass;
-(CGSize)preferredCellSize;
-(void)prepareBackgroundLayoutForSection:(long long)arg1 ;
-(void)setBackgroundLayout:(UICollectionViewLayoutAttributes *)arg1 ;
-(BOOL)hasFixedHeader;
-(UICollectionViewLayoutAttributes *)backgroundLayout;
-(void)setHasDescriptionCell:(BOOL)arg1 ;
-(BOOL)hasDescriptionCell;
-(void)setHasFixedHeader:(BOOL)arg1 ;
-(CGRect)headerRect;
-(void)setHeaderRect:(CGRect)arg1 ;
-(CGRect)footerRect;
-(void)setFooterRect:(CGRect)arg1 ;
-(BOOL)simpleLayout;
-(void)setSimpleLayout:(BOOL)arg1 ;
-(id)init;
-(CGSize)contentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(CGSize)itemSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setLayouts:(NSArray *)arg1 ;
-(void)resetLayout;
-(NSArray *)layouts;
@end

