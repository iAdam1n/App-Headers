//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MKSwipeTableViewCell, NSArray;

@interface MKSwipeButtonsView : UIView
{
    _Bool _fromLeft;
    _Bool _autoHideExpansion;
    MKSwipeTableViewCell *_cell;
    NSArray *_buttons;
    UIView *_containerView;
    UIView *_expandedButton;
    UIView *_expandedButtonAnimated;
    UIView *_expansionBackground;
    UIView *_expansionBackgroundAnimated;
    double _expansionOffset;
    double _buttonWidth;
    NSArray *_items;
    UIView *_overlayView;
    double _iconSizePercent;
}

@property(nonatomic) double iconSizePercent; // @synthesize iconSizePercent=_iconSizePercent;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(nonatomic) _Bool autoHideExpansion; // @synthesize autoHideExpansion=_autoHideExpansion;
@property(nonatomic) double expansionOffset; // @synthesize expansionOffset=_expansionOffset;
@property(retain, nonatomic) UIView *expansionBackgroundAnimated; // @synthesize expansionBackgroundAnimated=_expansionBackgroundAnimated;
@property(retain, nonatomic) UIView *expansionBackground; // @synthesize expansionBackground=_expansionBackground;
@property(retain, nonatomic) UIView *expandedButtonAnimated; // @synthesize expandedButtonAnimated=_expandedButtonAnimated;
@property(retain, nonatomic) UIView *expandedButton; // @synthesize expandedButton=_expandedButton;
@property(nonatomic) _Bool fromLeft; // @synthesize fromLeft=_fromLeft;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) __weak MKSwipeTableViewCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)transition:(long long)arg1 percent:(double)arg2;
- (void)transition3D:(double)arg1;
- (void)transtitionFloatBorder:(double)arg1;
- (void)transitionClip:(double)arg1;
- (void)transitionDrag:(double)arg1;
- (void)transitionStatic:(double)arg1;
- (void)endExpansionAnimated:(_Bool)arg1;
- (void)expandToOffset:(double)arg1 button:(long long)arg2;
- (void)buttonClicked:(id)arg1;
- (void)handleClick:(id)arg1 fromExpansion:(_Bool)arg2;
- (struct CGRect)expansionBackgroundRect:(id)arg1;
- (id)buttonForItem:(id)arg1;
- (void)layoutSubviews;
- (void)layoutExpansion:(double)arg1;
- (void)resetButtons;
- (void)dealloc;
- (void)commonInit;
- (id)initWithOverlayView:(id)arg1 direction:(long long)arg2 preferredSize:(struct CGSize)arg3;
- (id)initWithItems:(id)arg1 direction:(long long)arg2 preferredSize:(struct CGSize)arg3 iconSizePercent:(double)arg4;

@end
