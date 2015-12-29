//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class FLAnimatedImageView, SOJUSticker, UIActivityIndicatorView, UILabel;

@interface SCChatStickerCell : UICollectionViewCell
{
    FLAnimatedImageView *_stickerImageView;
    UIActivityIndicatorView *_activityView;
    UILabel *_labelView;
    SOJUSticker *_sticker;
}

+ (id)emojiFont;
@property(retain, nonatomic) SOJUSticker *sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (void)_showSpinner;
- (void)_showStickerWithImage:(id)arg1;
- (id)emoji;
- (void)animateSelect;
- (id)_getEmojiFromHexString:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
