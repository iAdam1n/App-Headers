//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class TGImageView;

@interface TGStickerCollectionViewCell : UICollectionViewCell
{
    TGImageView *_imageView;
    double _disableTime;
    _Bool _highlighted;
}

- (void).cxx_destruct;
- (void)setHighlightedWithBounce:(_Bool)arg1;
- (_Bool)isEnabled;
- (void)setDisabledTimeout;
- (void)setDocumentMedia:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
