//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class TGModernButton, UIImageView;

@interface TGCameraShutterButton : UIControl
{
    UIImageView *_ringView;
    TGModernButton *_buttonView;
}

- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)buttonPressed;
- (void)setButtonMode:(int)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
