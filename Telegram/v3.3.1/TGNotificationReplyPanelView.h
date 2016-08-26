//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HPGrowingTextViewDelegate.h"

@class HPGrowingTextView, NSArray, NSString, SMetaDisposable, TGModernButton, TGModernConversationAssociatedInputPanel, TGStickerKeyboardView;

@interface TGNotificationReplyPanelView : UIView <HPGrowingTextViewDelegate>
{
    UIView *_wrapperView;
    UIView *_separatorView;
    UIView *_fieldBackground;
    TGModernButton *_keyboardModeButton;
    TGModernButton *_stickerModeButton;
    TGModernButton *_sendButton;
    UIView *_inputFieldClippingContainer;
    HPGrowingTextView *_inputField;
    double _sendButtonWidth;
    NSArray *_modeButtons;
    TGModernConversationAssociatedInputPanel *_associatedPanel;
    TGStickerKeyboardView *_stickerKeyboardView;
    _Bool _notIdle;
    SMetaDisposable *_stickerPacksDisposable;
    _Bool _changingKeyboardMode;
    id <TGNotificationReplyPanelDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool changingKeyboardMode; // @synthesize changingKeyboardMode=_changingKeyboardMode;
@property(nonatomic) __weak id <TGNotificationReplyPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets)edgeInsets;
- (double)heightForInputFieldHeight:(double)arg1;
- (double)heightForWidth:(double)arg1;
- (struct UIEdgeInsets)_inputFieldInternalEdgeInsets;
- (struct UIEdgeInsets)_inputFieldInsets;
- (double)_baseHeight;
- (void)reset;
- (void)localizationUpdated;
- (void)refreshHeight;
- (_Bool)isIdle;
- (_Bool)hasUnsavedData;
- (void)updateStickerPanel;
- (void)setAssociatedStickerList:(id)arg1;
- (void)setAssociatedPanel:(id)arg1 animated:(_Bool)arg2;
- (id)associatedPanel;
- (_Bool)shouldDisplayPanels;
- (void)replaceHashtag:(id)arg1;
- (void)replaceMention:(id)arg1;
- (void)setModeButtons:(id)arg1 force:(_Bool)arg2;
- (void)updateModeButtonVisibilityForce:(_Bool)arg1;
- (void)updateSendButtonVisibility;
- (void)stickerModeButtonPressed;
- (void)keyboardModeButtonPressed;
- (void)sendButtonPressed;
- (void)handleFieldBackgroundTap:(id)arg1;
- (void)growingTextView:(id)arg1 receivedReturnKeyCommandWithModifierFlags:(long long)arg2;
- (void)growingTextViewDidChange:(id)arg1 afterSetText:(_Bool)arg2 afterPastingText:(_Bool)arg3;
- (void)growingTextView:(id)arg1 willChangeHeight:(double)arg2 duration:(double)arg3 animationCurve:(int)arg4;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
@property(readonly, nonatomic) NSString *text;
- (id)maybeInputField;
- (id)inputField;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
