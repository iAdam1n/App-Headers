//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TGNotificationReplyPanelDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SMetaDisposable, TGNotificationBackgroundView, TGNotificationContentView, TGNotificationReplyPanelView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface TGNotificationView : UIView <TGNotificationReplyPanelDelegate, UIGestureRecognizerDelegate>
{
    TGNotificationBackgroundView *_backgroundView;
    TGNotificationReplyPanelView *_replyView;
    UIView *_handleView;
    UIView *_transitionView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    double _initialOffset;
    _Bool _initialGestureFinished;
    SMetaDisposable *_stickerPacksDisposable;
    _Bool _isPresented;
    _Bool _isHiding;
    _Bool _isExpanded;
    _Bool _isRepliable;
    _Bool _isInteracting;
    CDUnknownBlockType _shouldExpandOnTap;
    CDUnknownBlockType _onTap;
    CDUnknownBlockType _onExpand;
    CDUnknownBlockType _onExpandProgress;
    CDUnknownBlockType _hide;
    CDUnknownBlockType _sendTextMessage;
    CDUnknownBlockType _sendSticker;
    CDUnknownBlockType _parentController;
    CDUnknownBlockType _userListSignal;
    CDUnknownBlockType _hashtagListSignal;
    CDUnknownBlockType _stickersSignal;
    CDUnknownBlockType _requestMedia;
    CDUnknownBlockType _cancelMedia;
    CDUnknownBlockType _playMedia;
    CDUnknownBlockType _isMediaAvailable;
    CDUnknownBlockType _mediaContext;
    TGNotificationContentView *_contentView;
}

@property(readonly, nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) _Bool isRepliable; // @synthesize isRepliable=_isRepliable;
@property(readonly, nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) _Bool isHiding; // @synthesize isHiding=_isHiding;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(readonly, nonatomic) TGNotificationContentView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType mediaContext; // @synthesize mediaContext=_mediaContext;
@property(copy, nonatomic) CDUnknownBlockType isMediaAvailable; // @synthesize isMediaAvailable=_isMediaAvailable;
@property(copy, nonatomic) CDUnknownBlockType playMedia; // @synthesize playMedia=_playMedia;
@property(copy, nonatomic) CDUnknownBlockType cancelMedia; // @synthesize cancelMedia=_cancelMedia;
@property(copy, nonatomic) CDUnknownBlockType requestMedia; // @synthesize requestMedia=_requestMedia;
@property(copy, nonatomic) CDUnknownBlockType stickersSignal; // @synthesize stickersSignal=_stickersSignal;
@property(copy, nonatomic) CDUnknownBlockType hashtagListSignal; // @synthesize hashtagListSignal=_hashtagListSignal;
@property(copy, nonatomic) CDUnknownBlockType userListSignal; // @synthesize userListSignal=_userListSignal;
@property(copy, nonatomic) CDUnknownBlockType parentController; // @synthesize parentController=_parentController;
@property(copy, nonatomic) CDUnknownBlockType sendSticker; // @synthesize sendSticker=_sendSticker;
@property(copy, nonatomic) CDUnknownBlockType sendTextMessage; // @synthesize sendTextMessage=_sendTextMessage;
@property(copy, nonatomic) CDUnknownBlockType hide; // @synthesize hide=_hide;
@property(copy, nonatomic) CDUnknownBlockType onExpandProgress; // @synthesize onExpandProgress=_onExpandProgress;
@property(copy, nonatomic) CDUnknownBlockType onExpand; // @synthesize onExpand=_onExpand;
@property(copy, nonatomic) CDUnknownBlockType onTap; // @synthesize onTap=_onTap;
@property(copy, nonatomic) CDUnknownBlockType shouldExpandOnTap; // @synthesize shouldExpandOnTap=_shouldExpandOnTap;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reset;
- (void)localizationUpdated;
- (void)prepareForHide;
@property(readonly, nonatomic) _Bool isIdle;
@property(readonly, nonatomic) _Bool hasUnsavedData;
- (void)playInterItemTransition;
- (void)prepareInterItemTransitionView;
- (void)setHandleHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateHandleViewAnimated:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)inputPanelShouldBecomeFirstResponder:(id)arg1;
- (id)inputPanelParentViewController:(id)arg1;
- (void)inputPanelTextChanged:(id)arg1 text:(id)arg2;
- (void)inputPanelHashtagEntered:(id)arg1 hashtag:(id)arg2;
- (void)inputPanelMentionEntered:(id)arg1 mention:(id)arg2;
- (void)inputPanelRequestedSendSticker:(id)arg1 sticker:(id)arg2;
- (void)inputPanelRequestedSendText:(id)arg1 text:(id)arg2;
- (void)inputPanelWillChangeHeight:(id)arg1 height:(double)arg2 duration:(double)arg3 animationCurve:(int)arg4;
- (void)hideAnimated:(_Bool)arg1;
- (void)setShrinked:(_Bool)arg1;
@property(readonly, nonatomic) double shrinkedHeight;
- (double)expandedHeightWithContent:(_Bool)arg1;
@property(readonly, nonatomic) double expandedHeight;
- (double)expandedPreviewHeight;
- (void)returnAnimated:(_Bool)arg1;
- (_Bool)isExpandable;
- (void)expandAnimated:(_Bool)arg1 fromGesture:(_Bool)arg2;
- (void)expandAnimated:(_Bool)arg1;
- (void)setExpanded:(_Bool)arg1 fromGesture:(_Bool)arg2;
- (void)setExpanded:(_Bool)arg1;
- (void)setExpandProgress:(double)arg1 isExpanded:(_Bool)arg2 fromGesture:(_Bool)arg3;
- (void)setExpandProgress:(double)arg1 isExpanded:(_Bool)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleTap:(id)arg1;
- (double)_swipeOffsetForOffset:(double)arg1;
- (void)handlePan:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
