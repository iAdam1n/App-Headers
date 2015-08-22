/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIControl.h>

@class NSArray, TFNSegmentedControlItem, TFNSegmentedControlItemView, UIFont, UIColor;

@interface TFNSegmentedControl : UIControl {

	NSArray* _itemViews;
	TFNSegmentedControlItem* _moreItem;
	BOOL _shouldResetItemViews;
	TFNSegmentedControlItemView* _moreItemView;
	BOOL _moreItemVisible;
	BOOL _subtitlesVisible;
	NSArray* _items;
	NSArray* _overflowItems;
	long long _moreItemIndex;
	unsigned long long _selectedItemIndex;
	UIFont* _titleFont;
	UIFont* _subtitleFont;
	UIColor* _strokeColor;
	UIColor* _fillColor;
	double _subtitleAlpha;

}

@property (nonatomic,copy) NSArray * items;                                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSArray * overflowItems;                                     //@synthesize overflowItems=_overflowItems - In the implementation block
@property (getter=isMoreItemVisible,nonatomic,readonly) BOOL moreItemVisible;               //@synthesize moreItemVisible=_moreItemVisible - In the implementation block
@property (nonatomic,readonly) long long moreItemIndex;                                     //@synthesize moreItemIndex=_moreItemIndex - In the implementation block
@property (assign,nonatomic) unsigned long long selectedItemIndex;                          //@synthesize selectedItemIndex=_selectedItemIndex - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                            //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFont;                                         //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                                         //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                                           //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double subtitleAlpha;                                          //@synthesize subtitleAlpha=_subtitleAlpha - In the implementation block
@property (assign,getter=areSubtitlesVisible,nonatomic) BOOL subtitlesVisible;              //@synthesize subtitlesVisible=_subtitlesVisible - In the implementation block
@property (nonatomic,readonly) TFNSegmentedControlItemView * moreItemView; 
-(BOOL)areSubtitlesVisible;
-(void)setSubtitleAlpha:(double)arg1 ;
-(void)setSubtitlesVisible:(BOOL)arg1 ;
-(double)subtitleAlpha;
-(long long)moreItemIndex;
-(id)_itemViewWithItem:(id)arg1 type:(unsigned long long)arg2 ;
-(TFNSegmentedControlItemView *)moreItemView;
-(id)moreItem;
-(void)_setupItemViewsIfNeeded;
-(NSArray *)overflowItems;
-(BOOL)isMoreItemVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(UIColor *)strokeColor;
-(UIFont *)titleFont;
-(UIFont *)subtitleFont;
-(unsigned long long)selectedItemIndex;
-(void)setSelectedItemIndex:(unsigned long long)arg1 ;
-(void)setSubtitleFont:(UIFont *)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
@end
