//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionMenuController.h"

@class NSArray, SMetaDisposable, TGCollectionMenuSection, TGSwitchCollectionItem, UIActivityIndicatorView;

@interface TGStickerPacksSettingsController : TGCollectionMenuController
{
    _Bool _editingMode;
    TGSwitchCollectionItem *_showStickersButtonItem;
    TGCollectionMenuSection *_stickerPacksSection;
    SMetaDisposable *_stickerPacksDisposable;
    UIActivityIndicatorView *_activityIndicator;
    NSArray *_originalStickerPacks;
}

- (void).cxx_destruct;
- (void)shareStickerPack:(id)arg1;
- (id)stickerPackShortname:(id)arg1;
- (void)previewStickerPack:(id)arg1;
- (void)toggleStickerPack:(id)arg1 hidden:(_Bool)arg2;
- (void)deleteStickerPack:(id)arg1;
- (void)setStickerPacks:(id)arg1;
- (void)loadView;
- (void)editDonePressed;
- (_Bool)isOrderChanged;
- (id)currentStickerPacks;
- (void)editCancelPressed;
- (void)editPressed;
- (void)_resetCollectionView;
- (void)dealloc;
- (id)initWithEditing:(_Bool)arg1;
- (id)init;

@end
