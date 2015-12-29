//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPModalViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, SKPPhoneNumber, SKPSaveNumberView;

@interface SKPSaveNumberViewController : SKPModalViewController <UITextFieldDelegate>
{
    _Bool _saving;
    CDUnknownBlockType _didSaveBlock;
    SKPPhoneNumber *_phoneNumber;
    SKPSaveNumberView *_saveNumberView;
    long long _savingAttemptNumber;
}

@property(nonatomic, getter=isSaving) _Bool saving; // @synthesize saving=_saving;
@property(nonatomic) long long savingAttemptNumber; // @synthesize savingAttemptNumber=_savingAttemptNumber;
@property(retain, nonatomic) SKPSaveNumberView *saveNumberView; // @synthesize saveNumberView=_saveNumberView;
@property(copy, nonatomic) SKPPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) CDUnknownBlockType didSaveBlock; // @synthesize didSaveBlock=_didSaveBlock;
- (void).cxx_destruct;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)triggerPresentingActivityIndicatorAfterDelay:(double)arg1;
- (void)cancelSavingNumber_UI;
- (void)finishSavingNumber_UI;
- (void)savingNumberTooLong_UI;
- (void)startSavingNumber_UI;
- (void)finishSavingNumber;
- (void)startSavingNumber:(id)arg1 name:(id)arg2;
- (void)showEmergencyNumberAlert;
- (void)showInvalidNumberAlert;
- (void)saveNumber;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPhoneNumber:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
