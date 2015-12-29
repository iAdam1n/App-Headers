//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImagePickerController.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, TGProgressWindow;

@interface TGLegacyCameraController : UIImagePickerController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    TGProgressWindow *_progressWindow;
    _Bool _didShowTip;
    _Bool _storeCapturedAssets;
    _Bool _isInDocumentMode;
    _Bool _avatarMode;
    id <TGLegacyCameraControllerDelegate> _completionDelegate;
}

+ (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
@property(nonatomic) _Bool avatarMode; // @synthesize avatarMode=_avatarMode;
@property(nonatomic) _Bool isInDocumentMode; // @synthesize isInDocumentMode=_isInDocumentMode;
@property(nonatomic) _Bool storeCapturedAssets; // @synthesize storeCapturedAssets=_storeCapturedAssets;
@property(nonatomic) __weak id <TGLegacyCameraControllerDelegate> completionDelegate; // @synthesize completionDelegate=_completionDelegate;
- (void).cxx_destruct;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (id)_dictionaryString:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
