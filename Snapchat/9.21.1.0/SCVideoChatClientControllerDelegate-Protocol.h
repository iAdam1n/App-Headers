//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIPanGestureRecognizer, UIView;

@protocol SCVideoChatClientControllerDelegate <NSObject>
@property(nonatomic) _Bool fullscreenAccessoryImagesUsed;
@property(nonatomic) _Bool inputAccessoriesHidden;
@property(nonatomic) _Bool inputViewTransparent;
@property(nonatomic) _Bool snapAccessoryHidden;
@property(nonatomic) _Bool keyboardHidden;
- (void)dismissFullScreenView;
- (_Bool)isTheUserConsumingMedia;
- (_Bool)isTheUserConsumingSnap;
- (_Bool)shouldPlayRemoteVideoStream;
- (NSString *)myUsername;
- (UIView *)getInputView;
- (UIView *)getContainerView;
- (void)resetMediaAccessories;
- (void)triggerMediaAccessoryPress:(_Bool)arg1;
- (void)updateTableContentInsetForPresenceWithHeight:(double)arg1;
- (void)callPromptPanGesture:(UIPanGestureRecognizer *)arg1 dragToHide:(_Bool)arg2;
@end
