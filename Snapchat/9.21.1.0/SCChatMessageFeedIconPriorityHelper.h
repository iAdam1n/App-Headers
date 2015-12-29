//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCChatMessageFeedIconPriorityHelper : NSObject
{
    double _timeSinceFinishedViewingLastSnap;
}

+ (long long)compareSubPriorityForMessage:(id)arg1 message2:(id)arg2;
- (_Bool)isNewReceivedMessage:(id)arg1;
- (_Bool)isRecentlySentMessage:(id)arg1;
- (_Bool)isFailedToSendMessage:(id)arg1;
- (_Bool)isSendingMessage:(id)arg1;
- (_Bool)isRecentlyViewedMedia:(id)arg1;
- (_Bool)isNextMediaToView:(id)arg1;
- (_Bool)isWaitingToPay:(id)arg1;
- (_Bool)isViewingMedia:(id)arg1;
- (double)getExpiration:(id)arg1 priority:(long long)arg2;
- (long long)getPriority:(id)arg1;
- (id)initWithLastViewedSnap:(id)arg1;

@end
