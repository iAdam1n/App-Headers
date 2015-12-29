//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernConversationInputPanel.h"

@class CALayer, UIButton;

@interface TGModernConversationEditingPanel : TGModernConversationInputPanel
{
    UIButton *_deleteButton;
    UIButton *_forwardButton;
    CALayer *_stripeLayer;
}

- (void).cxx_destruct;
- (void)forwardButtonPressed;
- (void)deleteButtonPressed;
- (void)layoutSubviews;
- (void)changeToSize:(struct CGSize)arg1 keyboardHeight:(double)arg2 duration:(double)arg3;
- (void)_adjustForSize:(struct CGSize)arg1 keyboardHeight:(double)arg2 duration:(double)arg3 animationCurve:(int)arg4;
- (void)adjustForSize:(struct CGSize)arg1 keyboardHeight:(double)arg2 duration:(double)arg3 animationCurve:(int)arg4;
- (void)setActionsEnabled:(_Bool)arg1;
- (void)setDeleteEnabled:(_Bool)arg1;
- (void)setForwardingEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)baseHeight;

@end
