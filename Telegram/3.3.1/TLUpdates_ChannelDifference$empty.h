//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLupdates_ChannelDifference.h"

@interface TLUpdates_ChannelDifference$empty : TLupdates_ChannelDifference
{
    int _flags;
    int _pts;
    int _timeout;
}

@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(nonatomic) int pts; // @synthesize pts=_pts;
@property(nonatomic) int flags; // @synthesize flags=_flags;
- (id)TLdeserialize:(id)arg1 signature:(int)arg2 environment:(id)arg3 context:(id)arg4 error:(id *)arg5;
- (void)TLserialize:(id)arg1;

@end
