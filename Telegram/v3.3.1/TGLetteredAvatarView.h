//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGRemoteImageView.h"

@class TGGradientLabel, UIFont;

@interface TGLetteredAvatarView : TGRemoteImageView
{
    TGGradientLabel *_label;
    UIFont *_singleFont;
    UIFont *_doubleFont;
    _Bool _usingSingleFont;
    _Bool _sameFonts;
    double _singleSize;
    double _doubleSize;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadGroupPlaceholderWithSize:(struct CGSize)arg1 conversationId:(long long)arg2 title:(id)arg3 placeholder:(id)arg4;
- (void)loadUserPlaceholderWithSize:(struct CGSize)arg1 uid:(int)arg2 firstName:(id)arg3 lastName:(id)arg4 placeholder:(id)arg5;
- (void)setTitleNeedsDisplay;
- (void)setTitle:(id)arg1;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (id)_cleanedUpString:(id)arg1;
- (void)loadImage:(id)arg1 filter:(id)arg2 placeholder:(id)arg3 forceFade:(_Bool)arg4;
- (void)loadImage:(id)arg1;
- (void)setSingleFontSize:(double)arg1 doubleFontSize:(double)arg2 useBoldFont:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
