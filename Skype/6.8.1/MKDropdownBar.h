//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MKAdaptiveNavigationBarStylesheet, MKDropdownBarStylesheet, MKTraitCollection, NSArray, NSLayoutConstraint, UIViewController;

@interface MKDropdownBar : UIView
{
    _Bool _shouldObserveEnableState;
    _Bool _shouldAdjustTitleBar;
    _Bool _barWasTranslucent;
    MKDropdownBarStylesheet *_stylesheet;
    NSArray *_optionItems;
    long long _contentAlignment;
    MKAdaptiveNavigationBarStylesheet *_navBarStylesheet;
    unsigned long long _navBarStyling;
    UIView *_backgroundProtectionView;
    UIView *_containerView;
    UIView *_actionContainerView;
    UIView *_prototypeRowView;
    UIViewController *_controller;
    UIView *_bar;
    NSArray *_initialContainerViewConstraints;
    NSArray *_finalContainerViewConstraints;
    NSLayoutConstraint *_heightContainerLayoutConstraint;
    NSLayoutConstraint *_heightActionContainerLayoutConstraint;
    NSLayoutConstraint *_heightButtonLayoutConstraint;
    NSLayoutConstraint *_bottomMarginActionContainerLayoutConstraint;
    MKTraitCollection *_currentTraitCollection;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) MKTraitCollection *currentTraitCollection; // @synthesize currentTraitCollection=_currentTraitCollection;
@property(retain, nonatomic) NSLayoutConstraint *bottomMarginActionContainerLayoutConstraint; // @synthesize bottomMarginActionContainerLayoutConstraint=_bottomMarginActionContainerLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightButtonLayoutConstraint; // @synthesize heightButtonLayoutConstraint=_heightButtonLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightActionContainerLayoutConstraint; // @synthesize heightActionContainerLayoutConstraint=_heightActionContainerLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightContainerLayoutConstraint; // @synthesize heightContainerLayoutConstraint=_heightContainerLayoutConstraint;
@property(retain, nonatomic) NSArray *finalContainerViewConstraints; // @synthesize finalContainerViewConstraints=_finalContainerViewConstraints;
@property(retain, nonatomic) NSArray *initialContainerViewConstraints; // @synthesize initialContainerViewConstraints=_initialContainerViewConstraints;
@property(nonatomic) _Bool barWasTranslucent; // @synthesize barWasTranslucent=_barWasTranslucent;
@property(nonatomic) __weak UIView *bar; // @synthesize bar=_bar;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) UIView *prototypeRowView; // @synthesize prototypeRowView=_prototypeRowView;
@property(retain, nonatomic) UIView *actionContainerView; // @synthesize actionContainerView=_actionContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backgroundProtectionView; // @synthesize backgroundProtectionView=_backgroundProtectionView;
@property(nonatomic) unsigned long long navBarStyling; // @synthesize navBarStyling=_navBarStyling;
@property(retain, nonatomic) MKAdaptiveNavigationBarStylesheet *navBarStylesheet; // @synthesize navBarStylesheet=_navBarStylesheet;
@property(nonatomic) _Bool shouldAdjustTitleBar; // @synthesize shouldAdjustTitleBar=_shouldAdjustTitleBar;
@property(nonatomic) _Bool shouldObserveEnableState; // @synthesize shouldObserveEnableState=_shouldObserveEnableState;
@property(nonatomic) long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(retain, nonatomic) NSArray *optionItems; // @synthesize optionItems=_optionItems;
@property(retain, nonatomic) MKDropdownBarStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
- (void).cxx_destruct;
- (void)toggleFromViewController:(id)arg1 behindBar:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)hideAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showFromViewController:(id)arg1 behindBar:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityViewIsModal;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateActionAppearance;
- (void)updateItemsOnBar;
- (void)buttonDidTouchUpInside:(id)arg1;
- (void)show:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)backgroundProtectionViewDidTap:(id)arg1;
- (id)finalContainerViewConstraintsWithItem:(id)arg1;
- (id)initialContainerViewConstraintsWithItem:(id)arg1;
- (id)containerViewConstraintsWithItem:(id)arg1 withHeight:(double)arg2;
- (void)updateConstants;
- (double)buttonHeight;
- (double)numberOfButtons;
- (double)containerHeightWithButtonHeight:(double)arg1;
- (double)actionContainerHeightWithButtonHeight:(double)arg1;
- (id)viewConstraints;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)applySizeClassesIfNeeded;
- (void)layoutSubviews;
- (void)mk_commonInit;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
