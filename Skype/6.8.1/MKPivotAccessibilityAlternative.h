//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MKPivotView, NSArray, UIButton;

@interface MKPivotAccessibilityAlternative : UIView
{
    MKPivotView *_pivotView;
    NSArray *_buttons;
    UIButton *_selectedButton;
}

@property(nonatomic) __weak UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) __weak MKPivotView *pivotView; // @synthesize pivotView=_pivotView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didTapInvisblePivot:(id)arg1;
- (void)setTitles:(id)arg1;
- (void)voiceOverStatusChanged;
- (void)didSelectPivotAtIndex:(unsigned long long)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
