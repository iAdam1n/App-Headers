//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUCashTransaction, SOJUChatConversationMessages, SOJUConversationInteractionEvent, SOJUConversationState, SOJUGenericSnap, SOJULastChatActions;

@interface SOJUChatConversationBuilder : NSObject
{
    NSString *_idValue;
    NSArray *_participants;
    SOJUGenericSnap *_lastSnap;
    SOJULastChatActions *_lastChatActions;
    SOJUConversationInteractionEvent *_conversationInteractionEvent;
    SOJUCashTransaction *_lastCashTransaction;
    NSNumber *_lastInteractionTs;
    NSArray *_pendingChatsFor;
    NSArray *_pendingReceivedSnaps;
    SOJUChatConversationMessages *_conversationMessages;
    NSString *_iterToken;
    SOJUConversationState *_conversationState;
}

+ (id)withJUChatConversation:(id)arg1;
- (void).cxx_destruct;
- (id)setConversationState:(id)arg1;
- (id)setIterToken:(id)arg1;
- (id)setConversationMessages:(id)arg1;
- (id)setPendingReceivedSnaps:(id)arg1;
- (id)setPendingChatsFor:(id)arg1;
- (id)setLastInteractionTs:(id)arg1;
- (id)setLastCashTransaction:(id)arg1;
- (id)setConversationInteractionEvent:(id)arg1;
- (id)setLastChatActions:(id)arg1;
- (id)setLastSnap:(id)arg1;
- (id)setParticipants:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)build;

@end
