//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString, SOJUSticker;

@protocol SCChatDrawerSender <NSObject>
- (void)sendAudioNote:(NSData *)arg1;
- (void)sendMediaDrawerMedia:(NSArray *)arg1;
- (void)sendSticker:(SOJUSticker *)arg1;
- (void)sendEmoji:(NSString *)arg1;
@end
