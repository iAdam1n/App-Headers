//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionItemView.h"

@class CALayer, UILabel;

@interface TGUserInfoButtonCollectionItemView : TGCollectionItemView
{
    CALayer *_separatorLayer;
    UILabel *_titleLabel;
    _Bool _editing;
}

@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitleColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
