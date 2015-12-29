//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPCallStateMachineModelView.h"

@class MKGradientView;

@interface SKPInCallBackgroundProtectionView : SKPCallStateMachineModelView
{
    _Bool _video;
    long long _barPosition;
    MKGradientView *_bgProtectionView;
    unsigned long long _callControls;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (id)observedCallStateMachineKeyPaths;
@property(nonatomic) unsigned long long callControls; // @synthesize callControls=_callControls;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(retain, nonatomic) MKGradientView *bgProtectionView; // @synthesize bgProtectionView=_bgProtectionView;
@property(nonatomic) long long barPosition; // @synthesize barPosition=_barPosition;
- (void).cxx_destruct;
- (void)updateBackgroundProtectionVisibility;
- (id)viewConstraints;
- (void)updateConstraints;
- (void)refreshDueToChangeInCallStateMachineProperty:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
