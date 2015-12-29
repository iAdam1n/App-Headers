//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernViewModel.h"

@class NSString, UIColor;

@interface TGModernLabelViewModel : TGModernViewModel
{
    NSString *_text;
    struct __CTLine *_line;
    struct __CTFont *_font;
    double _maxWidth;
    _Bool _truncateInTheMiddle;
    struct CGSize _lastSize;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setMaxWidth:(double)arg1;
- (id)text;
- (void)setText:(id)arg1 maxWidth:(double)arg2 needsContentUpdate:(_Bool *)arg3;
- (void)setText:(id)arg1 maxWidth:(double)arg2;
- (void)dealloc;
- (id)initWithText:(id)arg1 textColor:(id)arg2 font:(struct __CTFont *)arg3 maxWidth:(double)arg4 truncateInTheMiddle:(_Bool)arg5;
- (id)initWithText:(id)arg1 textColor:(id)arg2 font:(struct __CTFont *)arg3 maxWidth:(double)arg4;

@end
