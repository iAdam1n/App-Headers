//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLupdates_ChannelDifference.h"

@class NSArray;

@interface TLUpdates_ChannelDifference$tooLong : TLupdates_ChannelDifference
{
    int _flags;
    int _pts;
    int _timeout;
    int _top_message;
    int _top_important_message;
    int _read_inbox_max_id;
    int _unread_count;
    int _unread_important_count;
    NSArray *_messages;
    NSArray *_chats;
    NSArray *_users;
}

@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSArray *chats; // @synthesize chats=_chats;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(nonatomic) int unread_important_count; // @synthesize unread_important_count=_unread_important_count;
@property(nonatomic) int unread_count; // @synthesize unread_count=_unread_count;
@property(nonatomic) int read_inbox_max_id; // @synthesize read_inbox_max_id=_read_inbox_max_id;
@property(nonatomic) int top_important_message; // @synthesize top_important_message=_top_important_message;
@property(nonatomic) int top_message; // @synthesize top_message=_top_message;
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(nonatomic) int pts; // @synthesize pts=_pts;
@property(nonatomic) int flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (id)TLdeserialize:(id)arg1 signature:(int)arg2 environment:(id)arg3 context:(id)arg4 error:(id *)arg5;
- (void)TLserialize:(id)arg1;

@end
