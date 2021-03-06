//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionItemView.h"

@class UILabel, UISwitch;

@interface TGSwitchCollectionItemView : TGCollectionItemView
{
    UILabel *_titleLabel;
    UISwitch *_switchView;
    id <TGSwitchCollectionItemViewDelegate> _delegate;
}

@property(nonatomic) __weak id <TGSwitchCollectionItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)switchValueChanged;
- (void)setIsOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

