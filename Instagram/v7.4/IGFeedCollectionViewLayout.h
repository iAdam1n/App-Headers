/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCollectionViewLayout.h>

@protocol IGFeedCollectionViewLayoutDelegate;
@class NSMutableDictionary;

@interface IGFeedCollectionViewLayout : IGCollectionViewLayout {

	vector<long, std::__1::allocator<long> >* _sectionCounts;
	vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >* _itemHeights;
	vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >* _itemWidths;
	vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >* _cumulativeItemOffsets;
	vector<double, std::__1::allocator<double> >* _cachedSectionHeights;
	vector<double, std::__1::allocator<double> >* _cachedSectionMaxYValues;
	vector<double, std::__1::allocator<double> >* _headerHeights;
	NSMutableDictionary* _attributesCache;
	NSMutableDictionary* _headerAttributesCache;
	BOOL _pinsHeaders;
	id<IGFeedCollectionViewLayoutDelegate> _delegate;
	double _headerHeight;
	double _headerAdjustmentAmount;
	double _widthForLayout;

}

@property (assign,nonatomic,__weak) id<IGFeedCollectionViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double headerHeight;                                                 //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) double headerAdjustmentAmount;                                       //@synthesize headerAdjustmentAmount=_headerAdjustmentAmount - In the implementation block
@property (assign,nonatomic) double widthForLayout;                                               //@synthesize widthForLayout=_widthForLayout - In the implementation block
-(double)headerAdjustmentAmount;
-(void)setSupplementaryHeaderViewHeight:(double)arg1 ;
-(id)initWithPinsSectionHeaders:(BOOL)arg1 ;
-(BOOL)didLayoutForWidth:(double)arg1 ;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 oldObjects:(id)arg3 oldContext:(id)arg4 synchronous:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)setHeaderAdjustmentAmount:(double)arg1 ;
-(double)widthForLayout;
-(void)calculateLaytoutInfoWithObjects:(id)arg1 context:(id)arg2 viewWidth:(double)arg3 supplementaryHeaderViewHeight:(double)arg4 sectionCounts:(vector<long, std::__1::allocator<long> >*)arg5 itemHeights:(vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >*)arg6 itemWidths:(vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >*)arg7 itemOffsets:(vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >*)arg8 sectionHeights:(vector<double, std::__1::allocator<double> >*)arg9 headerHeights:(vector<double, std::__1::allocator<double> >*)arg10 ;
-(double)sectionSpacing;
-(void)setWidthForLayout:(double)arg1 ;
-(void)setDelegate:(id<IGFeedCollectionViewLayoutDelegate>)arg1 ;
-(id<IGFeedCollectionViewLayoutDelegate>)delegate;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(NSRange)sectionsInRect:(CGRect)arg1 ;
-(CGRect)rectForSection:(long long)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(double)headerHeight;
-(void)setHeaderHeight:(double)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

