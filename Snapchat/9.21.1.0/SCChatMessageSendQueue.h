//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, SCGCDTimer;

@interface SCChatMessageSendQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_chatMessageDispatchQueue;
    long long _maxRetryTimeInterval;
    long long _nextRetryDelay;
    SCGCDTimer *_timeoutTimer;
    SCGCDTimer *_resendTimer;
    NSMutableArray *_chatMessageQueue;
    NSMutableDictionary *_messageCompletionHandlers;
    NSMutableDictionary *_failedMessageResult;
}

@property(retain, nonatomic) NSMutableDictionary *failedMessageResult; // @synthesize failedMessageResult=_failedMessageResult;
@property(retain, nonatomic) NSMutableDictionary *messageCompletionHandlers; // @synthesize messageCompletionHandlers=_messageCompletionHandlers;
@property(retain, nonatomic) NSMutableArray *chatMessageQueue; // @synthesize chatMessageQueue=_chatMessageQueue;
- (void).cxx_destruct;
- (void)invokeHandlerForMessageWithId:(id)arg1 result:(long long)arg2 response:(id)arg3;
- (void)sentMessagesTimedOut;
- (void)sendMessage:(id)arg1;
- (void)sendChatMessages;
- (void)sendMessage:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithMaxRetryInterval:(long long)arg1 withDispatchQueue:(id)arg2;
- (id)init;

@end
