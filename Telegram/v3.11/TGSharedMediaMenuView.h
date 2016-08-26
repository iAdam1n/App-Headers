/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSArray, UIImageView;

@interface TGSharedMediaMenuView : UIView {

	UIView* _backgroundView;
	UIView* _dimView;
	NSArray* _buttons;
	NSArray* _separatorViews;
	UIImageView* _highlightedItemCheckView;
	unsigned long long _selectedItemIndex;
	/*^block*/id _selectedItemIndexChanged;
	/*^block*/id _willHide;

}

@property (assign,nonatomic) unsigned long long selectedItemIndex;              //@synthesize selectedItemIndex=_selectedItemIndex - In the implementation block
@property (nonatomic,copy) id selectedItemIndexChanged;                         //@synthesize selectedItemIndexChanged=_selectedItemIndexChanged - In the implementation block
@property (nonatomic,copy) id willHide;                                         //@synthesize willHide=_willHide - In the implementation block
-(void)dimViewTapGesture:(id)arg1 ;
-(void)showAnimated:(BOOL)arg1 ;
-(void)setWillHide:(id)arg1 ;
-(void)setSelectedItemIndexChanged:(id)arg1 ;
-(void)updateItemHighlights;
-(id)selectedItemIndexChanged;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setItems:(id)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(unsigned long long)selectedItemIndex;
-(void)setSelectedItemIndex:(unsigned long long)arg1 ;
-(void)hideAnimated:(BOOL)arg1 ;
-(id)willHide;
@end
