//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGBridgeSubscription.h"

@interface TGBridgeRemoteSubscription : TGBridgeSubscription
{
    _Bool _autoPlay;
    int _messageId;
    int _type;
    long long _peerId;
}

+ (id)subscriptionName;
@property(readonly, nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) int messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) long long peerId; // @synthesize peerId=_peerId;
- (void)_unserializeParametersWithCoder:(id)arg1;
- (void)_serializeParametersWithCoder:(id)arg1;
- (_Bool)renewable;
- (id)initWithPeerId:(long long)arg1 messageId:(int)arg2 type:(int)arg3 autoPlay:(_Bool)arg4;

@end

