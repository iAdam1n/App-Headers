/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;

@interface T1CommerceCollectionViewLayout : UICollectionViewLayout {

	BOOL _needsLayoutUpdate;
	long long _columnCount;
	NSMutableArray* _batchedAttributesRects;
	NSMutableArray* _columnHeightsBySection;
	NSMutableArray* _sectionItemAttributes;
	NSMutableArray* _allItemAttributes;
	double _maxColumnHeightInAnySection;
	UIEdgeInsets _cellEdgeInsets;
	UIEdgeInsets _sectionEdgeInsets;
	CGRect _lastLayoutBounds;

}

@property (assign,nonatomic) long long columnCount;                                //@synthesize columnCount=_columnCount - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cellEdgeInsets;                          //@synthesize cellEdgeInsets=_cellEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionEdgeInsets;                       //@synthesize sectionEdgeInsets=_sectionEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL needsLayoutUpdate;                               //@synthesize needsLayoutUpdate=_needsLayoutUpdate - In the implementation block
@property (nonatomic,retain) NSMutableArray * batchedAttributesRects;              //@synthesize batchedAttributesRects=_batchedAttributesRects - In the implementation block
@property (nonatomic,retain) NSMutableArray * columnHeightsBySection;              //@synthesize columnHeightsBySection=_columnHeightsBySection - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionItemAttributes;               //@synthesize sectionItemAttributes=_sectionItemAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * allItemAttributes;                   //@synthesize allItemAttributes=_allItemAttributes - In the implementation block
@property (assign,nonatomic) double maxColumnHeightInAnySection;                   //@synthesize maxColumnHeightInAnySection=_maxColumnHeightInAnySection - In the implementation block
@property (assign,nonatomic) CGRect lastLayoutBounds;                              //@synthesize lastLayoutBounds=_lastLayoutBounds - In the implementation block
-(void)setAllItemAttributes:(NSMutableArray *)arg1 ;
-(void)setSectionItemAttributes:(NSMutableArray *)arg1 ;
-(void)setColumnHeightsBySection:(NSMutableArray *)arg1 ;
-(void)setBatchedAttributesRects:(NSMutableArray *)arg1 ;
-(void)prepareLayoutAttributes;
-(void)setLastLayoutBounds:(CGRect)arg1 ;
-(CGRect)lastLayoutBounds;
-(NSMutableArray *)batchedAttributesRects;
-(NSMutableArray *)columnHeightsBySection;
-(NSMutableArray *)allItemAttributes;
-(NSMutableArray *)sectionItemAttributes;
-(UIEdgeInsets)sectionEdgeInsets;
-(UIEdgeInsets)cellEdgeInsets;
-(id)collectionsViewDelegate;
-(unsigned long long)_longestColumnIndexInSection:(long long)arg1 ;
-(unsigned long long)_shortestColumnIndexInSection:(long long)arg1 ;
-(void)_batchAttributesInRects;
-(void)setCellEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setSectionEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)needsLayoutUpdate;
-(void)setNeedsLayoutUpdate:(BOOL)arg1 ;
-(double)maxColumnHeightInAnySection;
-(void)setMaxColumnHeightInAnySection:(double)arg1 ;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(long long)columnCount;
-(void)setColumnCount:(long long)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end
