//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCVideoChatRoundContainer.h"

@class CADisplayLink, NSTimer, SCPresenceBubbleStatePending, UIView;

@interface SCVideoChatPresenceBubble : SCVideoChatRoundContainer
{
    _Bool _shown;
    _Bool _animationIntervalActive;
    _Bool _isAnimating;
    _Bool _isOscillating;
    unsigned long long _bubbleState;
    UIView *_promptView;
    SCPresenceBubbleStatePending *_currentPendingState;
    UIView *_containerView;
    UIView *_inputView;
    NSTimer *_emojiTimer;
    NSTimer *_ringTimer;
    long long _oscillationCounter;
    CADisplayLink *_updateBubbleSize;
    CDUnknownBlockType _completion;
    double _lastDisplayTime;
    double _targetSize;
    double _currentSize;
}

@property(nonatomic) double currentSize; // @synthesize currentSize=_currentSize;
@property(nonatomic) double targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) double lastDisplayTime; // @synthesize lastDisplayTime=_lastDisplayTime;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) CADisplayLink *updateBubbleSize; // @synthesize updateBubbleSize=_updateBubbleSize;
@property(nonatomic) long long oscillationCounter; // @synthesize oscillationCounter=_oscillationCounter;
@property(nonatomic) _Bool isOscillating; // @synthesize isOscillating=_isOscillating;
@property(retain, nonatomic) NSTimer *ringTimer; // @synthesize ringTimer=_ringTimer;
@property(retain, nonatomic) NSTimer *emojiTimer; // @synthesize emojiTimer=_emojiTimer;
@property(nonatomic) __weak UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SCPresenceBubbleStatePending *currentPendingState; // @synthesize currentPendingState=_currentPendingState;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool animationIntervalActive; // @synthesize animationIntervalActive=_animationIntervalActive;
@property(retain, nonatomic) UIView *promptView; // @synthesize promptView=_promptView;
@property(nonatomic) unsigned long long bubbleState; // @synthesize bubbleState=_bubbleState;
@property(nonatomic) _Bool shown; // @synthesize shown=_shown;
- (void).cxx_destruct;
- (struct CGPoint)currentCenter;
- (void)updatePresenceBubbleVideoSize;
- (void)hideSmileyEmoji;
- (void)handlePendingState;
- (void)animateBouncing;
- (void)startOscillation:(_Bool)arg1;
- (void)remotePeerTalking;
- (void)createPulseView;
- (void)animateRinging:(_Bool)arg1;
- (void)decreaseBubbleSizeFired:(id)arg1;
- (void)increaseBubbleSizeFired:(id)arg1;
- (void)animateState:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)animateVisibility:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateVideoState:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateVideoWaitingStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAudioStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateOffCallPromptStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateOnCallPromptStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSmileyEmojiStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSadEmojiStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateRingingStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateDotStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSubviewAspectRatio:(unsigned long long)arg1;
- (void)updateBubbleState:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateBubbleToVideoState:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)animatePresenceBubble:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (void)initialConstraints;
- (id)initWithContainerView:(id)arg1 andInputView:(id)arg2;

@end
