//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernConversationPrivateTitlePanel.h"

@class CALayer, TGModernButton, UILabel, UIView;

@interface TGModernConversationUpgradeStateTitlePanel : TGModernConversationPrivateTitlePanel
{
    CALayer *_stripeLayer;
    UIView *_backgroundView;
    UILabel *_label;
    TGModernButton *_actionButton;
    CDUnknownBlockType _rekey;
}

@property(copy, nonatomic) CDUnknownBlockType rekey; // @synthesize rekey=_rekey;
- (void).cxx_destruct;
- (void)actionButtonPressed;
- (void)layoutSubviews;
- (void)setCurrentLayer:(unsigned long long)arg1 keyId:(long long)arg2 rekeySessionId:(long long)arg3 canRekey:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end
