//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKGlobalStylesheet.h"

@class UIColor, UIFont;

@interface MKMessageCounterViewStylesheet : MKGlobalStylesheet
{
}

- (id)bgColorForTraitCollection:(id)arg1 withSize:(struct CGSize)arg2;
- (id)bgColorForTraitCollection:(id)arg1;
@property(readonly, nonatomic) UIColor *bgColor;
- (id)textColorForTraitCollection:(id)arg1 withSize:(struct CGSize)arg2;
- (id)textColorForTraitCollection:(id)arg1;
@property(readonly, nonatomic) UIColor *textColor;
- (id)fontForTraitCollection:(id)arg1 withSize:(struct CGSize)arg2;
- (id)fontForTraitCollection:(id)arg1;
@property(readonly, nonatomic) UIFont *font;
- (double)cornerRoundnessForTraitCollection:(id)arg1 withSize:(struct CGSize)arg2;
- (double)cornerRoundnessForTraitCollection:(id)arg1;
@property(readonly, nonatomic) double cornerRoundness;
- (double)minSizeForTraitCollection:(id)arg1 withSize:(struct CGSize)arg2;
- (double)minSizeForTraitCollection:(id)arg1;
@property(readonly, nonatomic) double minSize;

@end
