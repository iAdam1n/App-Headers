/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, JMSelectionView;

@interface JMTabContainer : UIView {

	CGSize containerSize_;
	BOOL momentary_;
	NSMutableArray* tabItems_;
	JMSelectionView* selectionView_;
	unsigned long long selectedIndex_;
	double itemSpacing_;

}

@property (nonatomic,retain) JMSelectionView * selectionView; 
@property (assign) BOOL momentary; 
@property (assign) unsigned long long selectedIndex; 
@property (assign) double itemSpacing; 
@property (nonatomic,retain) NSMutableArray * tabItems; 
-(void)addTabItem:(id)arg1 ;
-(BOOL)momentary;
-(void)animateSelectionToItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)isItemSelected:(id)arg1 ;
-(void)itemSelected:(id)arg1 ;
-(unsigned long long)numberOfTabItems;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(JMSelectionView *)selectionView;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(void)setMomentary:(BOOL)arg1 ;
-(void)setSelectionView:(JMSelectionView *)arg1 ;
-(void)setItemSpacing:(double)arg1 ;
-(double)itemSpacing;
-(NSMutableArray *)tabItems;
-(void)setTabItems:(NSMutableArray *)arg1 ;
@end

