//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGShareSheetItemView.h"

@class TGModernButton, UIImageView, UILabel;

@interface TGAttachmentSheetCheckmarkVariantItemView : TGShareSheetItemView
{
    TGModernButton *_button;
    UIImageView *_checkmarkView;
    UILabel *_titleLabel;
    UILabel *_variantLabel;
    _Bool _checked;
    CDUnknownBlockType _onCheckedChanged;
}

@property(copy, nonatomic) CDUnknownBlockType onCheckedChanged; // @synthesize onCheckedChanged=_onCheckedChanged;
- (void).cxx_destruct;
- (void)_buttonPressed;
- (void)layoutSubviews;
- (double)preferredHeight;
- (void)setHighlightedImage:(id)arg1;
- (id)initWithTitle:(id)arg1 variant:(id)arg2 checked:(_Bool)arg3;

@end
