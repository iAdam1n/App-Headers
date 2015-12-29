//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MKSuggestionViewStylesheet, NSString, UILabel;

@interface MKSuggestionView : UIView
{
    long long _arrowDirection;
    UIView *_circleView;
    UILabel *_arrowView;
    UILabel *_textLabel;
    MKSuggestionViewStylesheet *_stylesheet;
}

@property(retain, nonatomic) MKSuggestionViewStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(retain, nonatomic) NSString *text;
- (void)mk_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
