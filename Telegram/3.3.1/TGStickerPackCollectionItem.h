//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionItem.h"

@class TGStickerPack;

@interface TGStickerPackCollectionItem : TGCollectionItem
{
    _Bool _enableEditing;
    TGStickerPack *_stickerPack;
    CDUnknownBlockType _previewStickerPack;
    CDUnknownBlockType _deleteStickerPack;
}

@property(copy, nonatomic) CDUnknownBlockType deleteStickerPack; // @synthesize deleteStickerPack=_deleteStickerPack;
@property(copy, nonatomic) CDUnknownBlockType previewStickerPack; // @synthesize previewStickerPack=_previewStickerPack;
@property(nonatomic) _Bool enableEditing; // @synthesize enableEditing=_enableEditing;
@property(retain, nonatomic) TGStickerPack *stickerPack; // @synthesize stickerPack=_stickerPack;
- (void).cxx_destruct;
- (void)itemSelected:(id)arg1;
- (void)unbindView;
- (void)bindView:(id)arg1;
- (struct CGSize)itemSizeForContainerSize:(struct CGSize)arg1;
- (Class)itemViewClass;
- (id)initWithStickerPack:(id)arg1;

@end
