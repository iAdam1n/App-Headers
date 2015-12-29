//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionMenuController.h"

@class NSString, SMetaDisposable, TGUsernameCollectionItem, UIBarButtonItem;

@interface TGPasswordRecoveryController : TGCollectionMenuController
{
    NSString *_emailPattern;
    UIBarButtonItem *_nextItem;
    TGUsernameCollectionItem *_codeItem;
    SMetaDisposable *_recoverDisposable;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _cancelled;
}

@property(copy, nonatomic) CDUnknownBlockType cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)nextPressed;
- (void)cancelPressed;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithEmailPattern:(id)arg1;

@end
