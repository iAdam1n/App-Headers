/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@protocol TGModernGalleryItem, TGModernGalleryItemViewDelegate, TGModernGalleryDefaultFooterView, TGModernGalleryDefaultFooterAccessoryView;
@class UIView;

@interface TGModernGalleryItemView : UIView {

	id<TGModernGalleryItem> _item;
	id<TGModernGalleryItemViewDelegate> _delegate;
	unsigned long long _index;
	UIView*<TGModernGalleryDefaultFooterView> _defaultFooterView;
	UIView*<TGModernGalleryDefaultFooterAccessoryView> _defaultFooterAccessoryLeftView;
	UIView*<TGModernGalleryDefaultFooterAccessoryView> _defaultFooterAccessoryRightView;

}

@property (assign,nonatomic,__weak) id<TGModernGalleryItemViewDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long index;                                                                        //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) id<TGModernGalleryItem> item;                                                                    //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) UIView*<TGModernGalleryDefaultFooterView> defaultFooterView;                                     //@synthesize defaultFooterView=_defaultFooterView - In the implementation block
@property (nonatomic,retain) UIView*<TGModernGalleryDefaultFooterAccessoryView> defaultFooterAccessoryLeftView;               //@synthesize defaultFooterAccessoryLeftView=_defaultFooterAccessoryLeftView - In the implementation block
@property (nonatomic,retain) UIView*<TGModernGalleryDefaultFooterAccessoryView> defaultFooterAccessoryRightView;              //@synthesize defaultFooterAccessoryRightView=_defaultFooterAccessoryRightView - In the implementation block
-(void)setItem:(id)arg1 synchronously:(BOOL)arg2 ;
-(void)prepareForRecycle;
-(CGRect)transitionViewContentRect;
-(void)setIsCurrent:(BOOL)arg1 ;
-(id)contentAvailabilityStateSignal;
-(void)setIsVisible:(BOOL)arg1 ;
-(UIView*<TGModernGalleryDefaultFooterView>)defaultFooterView;
-(UIView*<TGModernGalleryDefaultFooterAccessoryView>)defaultFooterAccessoryLeftView;
-(UIView*<TGModernGalleryDefaultFooterAccessoryView>)defaultFooterAccessoryRightView;
-(id)readyForTransitionIn;
-(BOOL)dismissControllerNowOrSchedule;
-(BOOL)allowsScrollingAtPoint:(CGPoint)arg1 ;
-(void)setDefaultFooterView:(UIView*<TGModernGalleryDefaultFooterView>)arg1 ;
-(void)setDefaultFooterAccessoryLeftView:(UIView*<TGModernGalleryDefaultFooterAccessoryView>)arg1 ;
-(void)setDefaultFooterAccessoryRightView:(UIView*<TGModernGalleryDefaultFooterAccessoryView>)arg1 ;
-(void)setDelegate:(id<TGModernGalleryItemViewDelegate>)arg1 ;
-(id<TGModernGalleryItemViewDelegate>)delegate;
-(id<TGModernGalleryItem>)item;
-(void)prepareForReuse;
-(id)transitionView;
-(id)headerView;
-(unsigned long long)index;
-(void)setItem:(id<TGModernGalleryItem>)arg1 ;
-(id)footerView;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setFocused:(BOOL)arg1 ;
@end
