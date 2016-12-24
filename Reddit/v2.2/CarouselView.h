/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/BaseView.h>
#import <Reddit/CarouselItemViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol CarouselViewDelegate;
@class NSObject, BaseCollectionView, AttributedLabelRegular, UIImage, NSString, NSArray;

@interface CarouselView : BaseView <CarouselItemViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {

	unsigned long long _itemsPerScreen;
	NSObject*<CarouselViewDelegate> _delegate;
	double _itemWidth;
	BaseCollectionView* _contentScrollView;
	AttributedLabelRegular* _headerLabel;
	UIImage* _headerImage;
	NSString* _headerText;
	NSArray* _items;

}

@property (nonatomic,retain) BaseCollectionView * contentScrollView;                       //@synthesize contentScrollView=_contentScrollView - In the implementation block
@property (nonatomic,retain) AttributedLabelRegular * headerLabel;                         //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UIImage * headerImage;                                        //@synthesize headerImage=_headerImage - In the implementation block
@property (nonatomic,copy) NSString * headerText;                                          //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,retain) NSArray * items;                                              //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) unsigned long long itemsPerScreen;                            //@synthesize itemsPerScreen=_itemsPerScreen - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CarouselViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double itemWidth;                                             //@synthesize itemWidth=_itemWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)calculatedSizeWithData:(id)arg1 ;
-(void)configureWithItems:(id)arg1 ;
-(void)configureHeaderWithText:(id)arg1 ;
-(void)carouselItemViewDidTap:(id)arg1 ;
-(unsigned long long)itemsPerScreen;
-(void)setItemsPerScreen:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(NSObject*<CarouselViewDelegate>)arg1 ;
-(NSObject*<CarouselViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)prepareForReuse;
-(BaseCollectionView *)contentScrollView;
-(double)itemWidth;
-(void)setItemWidth:(double)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(UIImage *)headerImage;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(void)setContentScrollView:(BaseCollectionView *)arg1 ;
-(AttributedLabelRegular *)headerLabel;
-(void)setHeaderLabel:(AttributedLabelRegular *)arg1 ;
@end
