//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIProgressView;

@interface SCPreviewActivityProgressOverlayView : UIView
{
    UIView *_footerBar;
    UIButton *_cancelButton;
    UIProgressView *_progressView;
}

@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
