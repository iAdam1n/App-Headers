//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernConversationInputPanel.h"

#import "HPGrowingTextViewDelegate.h"
#import "TGModernConversationInputMicButtonDelegate.h"

@class CALayer, HPGrowingTextView, NSArray, NSString, NSTimer, TGBotReplyMarkup, TGModernButton, TGModernConversationAssociatedInputPanel, TGModernConversationInputMicButton, TGStickerKeyboardView, UIButton, UIImageView, UILabel, UIView;

@interface TGModernConversationInputTextPanel : TGModernConversationInputPanel <HPGrowingTextViewDelegate, TGModernConversationInputMicButtonDelegate>
{
    id <SDisposable> _stickerPacksDisposable;
    CALayer *_stripeLayer;
    UIView *_backgroundView;
    double _sendButtonWidth;
    struct CGSize _messageAreaSize;
    double _keyboardHeight;
    TGModernConversationInputMicButton *_micButton;
    UIImageView *_micButtonIconView;
    UIView *_audioRecordingContainer;
    unsigned long long _audioRecordingDurationSeconds;
    NSTimer *_audioRecordingTimer;
    UIImageView *_recordIndicatorView;
    UILabel *_recordDurationLabel;
    UIImageView *_slideToCancelArrow;
    UILabel *_slideToCancelLabel;
    double _recordingInterfaceShowTime;
    TGModernConversationAssociatedInputPanel *_associatedPanel;
    TGModernConversationAssociatedInputPanel *_firstExtendedPanel;
    TGModernConversationAssociatedInputPanel *_secondExtendedPanel;
    TGModernConversationAssociatedInputPanel *_currentExtendedPanel;
    TGModernButton *_keyboardModeButton;
    TGModernButton *_stickerModeButton;
    TGModernButton *_commandModeButton;
    TGModernButton *_slashModeButton;
    TGModernButton *_broadcastButton;
    NSArray *_modeButtons;
    TGStickerKeyboardView *_stickerKeyboardView;
    _Bool _shouldShowKeyboardAutomatically;
    UIView *_overlayDisabledView;
    struct CGSize _parentSize;
    _Bool _changingKeyboardMode;
    _Bool _enableKeyboard;
    _Bool _canShowKeyboardAutomatically;
    _Bool _hasBots;
    _Bool _canBroadcast;
    _Bool _isBroadcasting;
    _Bool _isAlwaysBroadcasting;
    _Bool _isChannel;
    _Bool _inputDisabled;
    UIImageView *_fieldBackground;
    UIButton *_sendButton;
    UIButton *_attachButton;
    UIView *_inputFieldClippingContainer;
    HPGrowingTextView *_inputField;
    UIImageView *_inputFieldPlaceholder;
    UIView *_panelAccessoryView;
    TGBotReplyMarkup *_replyMarkup;
}

+ (id)linkCandidateInText:(id)arg1;
+ (void)replaceHashtag:(id)arg1 inputField:(id)arg2;
+ (void)replaceMention:(id)arg1 inputField:(id)arg2;
@property(nonatomic) _Bool inputDisabled; // @synthesize inputDisabled=_inputDisabled;
@property(nonatomic) _Bool isChannel; // @synthesize isChannel=_isChannel;
@property(nonatomic) _Bool isAlwaysBroadcasting; // @synthesize isAlwaysBroadcasting=_isAlwaysBroadcasting;
@property(nonatomic) _Bool isBroadcasting; // @synthesize isBroadcasting=_isBroadcasting;
@property(nonatomic) _Bool canBroadcast; // @synthesize canBroadcast=_canBroadcast;
@property(nonatomic) _Bool hasBots; // @synthesize hasBots=_hasBots;
@property(retain, nonatomic) TGBotReplyMarkup *replyMarkup; // @synthesize replyMarkup=_replyMarkup;
@property(retain, nonatomic) UIView *panelAccessoryView; // @synthesize panelAccessoryView=_panelAccessoryView;
@property(nonatomic) _Bool canShowKeyboardAutomatically; // @synthesize canShowKeyboardAutomatically=_canShowKeyboardAutomatically;
@property(nonatomic) _Bool enableKeyboard; // @synthesize enableKeyboard=_enableKeyboard;
@property(readonly, nonatomic) _Bool changingKeyboardMode; // @synthesize changingKeyboardMode=_changingKeyboardMode;
@property(retain, nonatomic) UIImageView *inputFieldPlaceholder; // @synthesize inputFieldPlaceholder=_inputFieldPlaceholder;
@property(retain, nonatomic) HPGrowingTextView *inputField; // @synthesize inputField=_inputField;
@property(retain, nonatomic) UIView *inputFieldClippingContainer; // @synthesize inputFieldClippingContainer=_inputFieldClippingContainer;
@property(retain, nonatomic) UIButton *attachButton; // @synthesize attachButton=_attachButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIImageView *fieldBackground; // @synthesize fieldBackground=_fieldBackground;
- (void).cxx_destruct;
- (void)broadcastButtonPressed;
- (void)setCurrentReplyMarkup:(id)arg1;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)commandModeButtonPressed;
- (void)slashModeButtonPressed;
- (void)stickerModeButtonPressed;
- (void)keyboardModeButtonPressed;
- (void)setModeButtons:(id)arg1;
- (void)adjustCustomKeyboardForWidth:(double)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)growingTextView:(id)arg1 receivedReturnKeyCommandWithModifierFlags:(long long)arg2;
- (void)growingTextView:(id)arg1 didPasteData:(id)arg2;
- (void)growingTextView:(id)arg1 didPasteImages:(id)arg2;
- (void)setAssociatedStickerList:(id)arg1 stickerSelected:(CDUnknownBlockType)arg2;
- (id)secondaryExtendedPanel;
- (id)primaryExtendedPanel;
- (void)_setCurrentExtendedPanel:(id)arg1 animated:(_Bool)arg2 skipHeightAnimation:(_Bool)arg3;
- (void)setSecondaryExtendedPanel:(id)arg1 animated:(_Bool)arg2 skipHeightAnimation:(_Bool)arg3;
- (void)setSecondaryExtendedPanel:(id)arg1 animated:(_Bool)arg2;
- (void)setPrimaryExtendedPanel:(id)arg1 animated:(_Bool)arg2 skipHeightAnimation:(_Bool)arg3;
- (void)setPrimaryExtendedPanel:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldDisableAutocorrection;
- (id)currentReplyMarkup;
- (void)setAssociatedPanel:(id)arg1 animated:(_Bool)arg2;
- (id)associatedPanel;
- (struct CGRect)attachmentButtonFrame;
- (void)shakeControls;
- (void)audioRecordingFinished;
- (void)audioRecordingStarted;
- (void)stopAudioRecordingTimer;
- (void)audioTimerEvent;
- (void)startAudioRecordingTimer;
- (void)setShowRecordingInterface:(_Bool)arg1 velocity:(double)arg2;
- (void)layoutSubviews;
- (void)growingTextView:(id)arg1 willChangeHeight:(double)arg2 duration:(double)arg3 animationCurve:(int)arg4;
- (void)changeToSize:(struct CGSize)arg1 keyboardHeight:(double)arg2 duration:(double)arg3;
- (void)_adjustForSize:(struct CGSize)arg1 keyboardHeight:(double)arg2 inputFieldHeight:(double)arg3 duration:(double)arg4 animationCurve:(int)arg5;
- (struct CGPoint)sendButtonOffset;
- (id)sendButtonFont;
- (double)heightForInputFieldHeight:(double)arg1;
- (struct CGPoint)inputFieldPlaceholderOffset;
- (struct UIEdgeInsets)inputFieldInternalEdgeInsets;
- (struct UIEdgeInsets)inputFieldInsets;
- (double)extendedPanelHeight;
- (_Bool)shouldDisplayPanels;
- (double)baseHeight;
- (void)adjustForSize:(struct CGSize)arg1 keyboardHeight:(double)arg2 duration:(double)arg3 animationCurve:(int)arg4;
- (int)_maxNumberOfLinesForSize:(struct CGSize)arg1;
- (void)micButtonInteractionUpdate:(double)arg1;
- (void)micButtonInteractionCompleted:(double)arg1;
- (void)micButtonInteractionCancelled:(double)arg1;
- (void)micButtonInteractionBegan;
- (void)attachButtonPressed;
- (void)sendButtonPressed;
- (void)fieldBackgroundTapGesture:(id)arg1;
- (void)updateSendButtonVisibility;
- (void)updateModeButtonVisibility;
- (void)growingTextViewDidChange:(id)arg1 afterSetText:(_Bool)arg2 afterPastingText:(_Bool)arg3;
- (void)replaceHashtag:(id)arg1;
- (void)replaceMention:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (_Bool)growingTextViewEnabled:(id)arg1;
- (id)maybeInputField;
- (void)_updatePlaceholderImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 accessoryView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
