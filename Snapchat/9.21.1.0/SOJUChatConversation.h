//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUChatConversation.h"

@class NSArray, NSNumber, NSString, SOJUCashTransaction, SOJUChatConversationMessages, SOJUConversationInteractionEvent, SOJUConversationState, SOJUGenericSnap, SOJULastChatActions;

@interface SOJUChatConversation : NSObject <SOJUChatConversation>
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

@property(readonly, copy, nonatomic) SOJUConversationState *conversationState; // @synthesize conversationState=_conversationState;
@property(readonly, copy, nonatomic) NSString *iterToken; // @synthesize iterToken=_iterToken;
@property(readonly, copy, nonatomic) SOJUChatConversationMessages *conversationMessages; // @synthesize conversationMessages=_conversationMessages;
@property(readonly, copy, nonatomic) NSArray *pendingReceivedSnaps; // @synthesize pendingReceivedSnaps=_pendingReceivedSnaps;
@property(readonly, copy, nonatomic) NSArray *pendingChatsFor; // @synthesize pendingChatsFor=_pendingChatsFor;
@property(readonly, copy, nonatomic) NSNumber *lastInteractionTs; // @synthesize lastInteractionTs=_lastInteractionTs;
@property(readonly, copy, nonatomic) SOJUCashTransaction *lastCashTransaction; // @synthesize lastCashTransaction=_lastCashTransaction;
@property(readonly, copy, nonatomic) SOJUConversationInteractionEvent *conversationInteractionEvent; // @synthesize conversationInteractionEvent=_conversationInteractionEvent;
@property(readonly, copy, nonatomic) SOJULastChatActions *lastChatActions; // @synthesize lastChatActions=_lastChatActions;
@property(readonly, copy, nonatomic) SOJUGenericSnap *lastSnap; // @synthesize lastSnap=_lastSnap;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdValue:(id)arg1 participants:(id)arg2 lastSnap:(id)arg3 lastChatActions:(id)arg4 conversationInteractionEvent:(id)arg5 lastCashTransaction:(id)arg6 lastInteractionTs:(id)arg7 pendingChatsFor:(id)arg8 pendingReceivedSnaps:(id)arg9 conversationMessages:(id)arg10 iterToken:(id)arg11 conversationState:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

