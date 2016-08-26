//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGViewController.h"

@class NSString, NSTimer, TGPasswordEntryView, UIBarButtonItem;

@interface TGPasscodeEntryController : TGViewController
{
    int _style;
    int _mode;
    int _submode;
    _Bool _cancelEnabled;
    NSString *_candidatePasscode;
    TGPasswordEntryView *_view;
    UIBarButtonItem *_nextItem;
    _Bool _usingTouchId;
    _Bool _alternativeMethodSelected;
    NSTimer *_shouldWaitTimer;
    _Bool _keepStatusBarStyle;
    _Bool _allowTouchId;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _touchIdCompletion;
    CDUnknownBlockType _checkCurrentPasscode;
}

@property(nonatomic) _Bool allowTouchId; // @synthesize allowTouchId=_allowTouchId;
@property(copy, nonatomic) CDUnknownBlockType checkCurrentPasscode; // @synthesize checkCurrentPasscode=_checkCurrentPasscode;
@property(copy, nonatomic) CDUnknownBlockType touchIdCompletion; // @synthesize touchIdCompletion=_touchIdCompletion;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)passcodeEntered:(id)arg1;
- (void)resetMode:(int)arg1;
- (id)currentErrorText;
- (void)checkShouldWait;
- (double)intervalSinceLastInvalidPasscodeAttempt;
- (_Bool)shouldWaitBeforeAttempting;
- (void)resetInvalidPasscodeAttempts;
- (void)addInvalidPasscodeAttempt;
- (long long)invalidPasscodeAttempts;
- (void)refreshTouchId;
- (void)prepareForDisappear;
- (void)prepareForAppear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)supportsTouchId;
- (void)loadView;
- (int)_passwordEntryViewStyleForStyle:(int)arg1;
- (long long)preferredStatusBarStyle;
- (void)nextPressed;
- (void)cancelPressed;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 mode:(int)arg2 cancelEnabled:(_Bool)arg3 allowTouchId:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;

@end
