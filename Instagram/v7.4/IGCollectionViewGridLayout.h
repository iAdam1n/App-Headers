/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class UIView, NSDictionary;

@interface IGCollectionViewGridLayout : UICollectionViewLayout {

	long long _numberOfColumns;
	double _margin;
	double _spacing;
	UIView* _headerView;
	UIView* _footerView;
	double _itemSize;
	NSDictionary* _layoutInfo;
	id _headerViewKVOHandler;
	id _footerViewKVOHandler;

}

@property (assign,nonatomic) long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) double margin;                          //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) double spacing;                         //@synthesize spacing=_spacing - In the implementation block
@property (nonatomic,retain) UIView * headerView;                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                    //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) double itemSize;                        //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,retain) NSDictionary * layoutInfo;              //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (nonatomic,retain) id headerViewKVOHandler;                //@synthesize headerViewKVOHandler=_headerViewKVOHandler - In the implementation block
@property (nonatomic,retain) id footerViewKVOHandler;                //@synthesize footerViewKVOHandler=_footerViewKVOHandler - In the implementation block
-(id)headerViewKVOHandler;
-(id)footerViewKVOHandler;
-(id)observeHeightForView:(id)arg1 ;
-(void)setHeaderViewKVOHandler:(id)arg1 ;
-(void)setFooterViewKVOHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)numberOfColumns;
-(void)setItemSize:(double)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)invalidateLayout;
-(void)prepareLayout;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setNumberOfColumns:(long long)arg1 ;
-(double)itemSize;
-(NSDictionary *)layoutInfo;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(void)setLayoutInfo:(NSDictionary *)arg1 ;
-(double)margin;
-(void)setMargin:(double)arg1 ;
-(void)setSpacing:(double)arg1 ;
-(double)spacing;
@end

