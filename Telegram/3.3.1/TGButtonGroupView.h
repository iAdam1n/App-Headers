//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TGButtonGroupButtonDelegate.h"

@class NSMutableArray, NSString, UIColor, UIFont, UIImage;

@interface TGButtonGroupView : UIView <TGButtonGroupButtonDelegate>
{
    _Bool _isLandscape;
    _Bool _buttonsAreAlwaysDeselected;
    _Bool _validImages;
    int _selectedIndex;
    float _buttonSideTextInset;
    float _buttonTopTextInset;
    int _validHighlightedIndex;
    id <TGButtonGroupViewDelegate> _delegate;
    UIImage *_buttonLeftImage;
    UIImage *_buttonLeftHighlightedImage;
    UIImage *_buttonCenterImage;
    UIImage *_buttonCenterHighlightedImage;
    UIImage *_buttonRightImage;
    UIImage *_buttonRightHighlightedImage;
    UIImage *_buttonSeparatorImage;
    UIImage *_buttonSeparatorLeftHighlightedImage;
    UIImage *_buttonSeparatorRightHighlightedImage;
    UIFont *_buttonFont;
    UIColor *_buttonTextColor;
    UIColor *_buttonTextColorHighlighted;
    UIColor *_buttonShadowColor;
    UIColor *_buttonShadowColorHighlighted;
    NSMutableArray *_buttonList;
    NSMutableArray *_separatorList;
    struct CGSize _buttonShadowOffset;
}

@property(retain, nonatomic) NSMutableArray *separatorList; // @synthesize separatorList=_separatorList;
@property(retain, nonatomic) NSMutableArray *buttonList; // @synthesize buttonList=_buttonList;
@property(nonatomic) _Bool validImages; // @synthesize validImages=_validImages;
@property(nonatomic) int validHighlightedIndex; // @synthesize validHighlightedIndex=_validHighlightedIndex;
@property(nonatomic) _Bool buttonsAreAlwaysDeselected; // @synthesize buttonsAreAlwaysDeselected=_buttonsAreAlwaysDeselected;
@property(nonatomic) float buttonTopTextInset; // @synthesize buttonTopTextInset=_buttonTopTextInset;
@property(nonatomic) float buttonSideTextInset; // @synthesize buttonSideTextInset=_buttonSideTextInset;
@property(nonatomic) struct CGSize buttonShadowOffset; // @synthesize buttonShadowOffset=_buttonShadowOffset;
@property(retain, nonatomic) UIColor *buttonShadowColorHighlighted; // @synthesize buttonShadowColorHighlighted=_buttonShadowColorHighlighted;
@property(retain, nonatomic) UIColor *buttonShadowColor; // @synthesize buttonShadowColor=_buttonShadowColor;
@property(retain, nonatomic) UIColor *buttonTextColorHighlighted; // @synthesize buttonTextColorHighlighted=_buttonTextColorHighlighted;
@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain, nonatomic) UIFont *buttonFont; // @synthesize buttonFont=_buttonFont;
@property(retain, nonatomic) UIImage *buttonSeparatorRightHighlightedImage; // @synthesize buttonSeparatorRightHighlightedImage=_buttonSeparatorRightHighlightedImage;
@property(retain, nonatomic) UIImage *buttonSeparatorLeftHighlightedImage; // @synthesize buttonSeparatorLeftHighlightedImage=_buttonSeparatorLeftHighlightedImage;
@property(retain, nonatomic) UIImage *buttonSeparatorImage; // @synthesize buttonSeparatorImage=_buttonSeparatorImage;
@property(retain, nonatomic) UIImage *buttonRightHighlightedImage; // @synthesize buttonRightHighlightedImage=_buttonRightHighlightedImage;
@property(retain, nonatomic) UIImage *buttonRightImage; // @synthesize buttonRightImage=_buttonRightImage;
@property(retain, nonatomic) UIImage *buttonCenterHighlightedImage; // @synthesize buttonCenterHighlightedImage=_buttonCenterHighlightedImage;
@property(retain, nonatomic) UIImage *buttonCenterImage; // @synthesize buttonCenterImage=_buttonCenterImage;
@property(retain, nonatomic) UIImage *buttonLeftHighlightedImage; // @synthesize buttonLeftHighlightedImage=_buttonLeftHighlightedImage;
@property(retain, nonatomic) UIImage *buttonLeftImage; // @synthesize buttonLeftImage=_buttonLeftImage;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) __weak id <TGButtonGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)buttonPressed:(id)arg1;
- (void)buttonGroupButtonHighlighted:(int)arg1;
- (void)buttonGroupButtonHighlighted;
- (void)updateSelection;
- (void)updateImages;
- (void)addButton:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 buttonLeftImage:(id)arg2 buttonLeftHighlightedImage:(id)arg3 buttonCenterImage:(id)arg4 buttonCenterHighlightedImage:(id)arg5 buttonRightImage:(id)arg6 buttonRightHighlightedImage:(id)arg7 buttonSeparatorImage:(id)arg8 buttonSeparatorLeftHighlightedImage:(id)arg9 buttonSeparatorRightHighlightedImage:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
