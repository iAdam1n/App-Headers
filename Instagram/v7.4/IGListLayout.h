/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCollectionViewLayout.h>

@protocol IGListLayoutDelegate;
@class UICollectionViewLayoutAttributes;

@interface IGListLayout : IGCollectionViewLayout {

	long long _numberOfItems;
	vector<double, std::__1::allocator<double> >* _itemHeights;
	vector<double, std::__1::allocator<double> >* _itemOffsets;
	map<unsigned long, double, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, double> > >* _itemHeaders;
	map<unsigned long, double, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, double> > >* _itemFooters;
	UICollectionViewLayoutAttributes* _headerAttribute;
	id<IGListLayoutDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGListLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSupplementaryHeaderViewHeight:(double)arg1 ;
-(double)defaultHeaderHeight;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 oldObjects:(id)arg3 oldContext:(id)arg4 synchronous:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)setFooterHeight:(double)arg1 atIndexPath:(id)arg2 ;
-(void)setItemHeight:(double)arg1 atIndexPath:(id)arg2 ;
-(void)calculateLayoutInfoWithObjects:(id)arg1 context:(id)arg2 viewWidth:(double)arg3 supplementaryHeaderViewHeight:(double)arg4 itemHeights:(vector<double, std::__1::allocator<double> >*)arg5 itemOffsets:(vector<double, std::__1::allocator<double> >*)arg6 itemHeaders:(map<unsigned long, double, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, double> > >*)arg7 itemFooters:(map<unsigned long, double, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, double> > >*)arg8 ;
-(double)headerHeightForIndex:(unsigned long long)arg1 ;
-(double)footerHeightForIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(id<IGListLayoutDelegate>)arg1 ;
-(id<IGListLayoutDelegate>)delegate;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
@end

