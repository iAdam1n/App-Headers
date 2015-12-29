//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPWebSocketConnection.h"

@class NSMutableDictionary, NSNumber, NSObject<SKPSocketIOConnectionDelegate>, NSString, NSURLRequest;

@interface SKPSocketIOConnection : SKPWebSocketConnection
{
    _Bool _receivedHeartBeat;
    NSString *_sessionId;
    NSNumber *_heartbeatTimeout;
    NSNumber *_connectionTimeout;
    NSString *_transports;
    NSURLRequest *_socketioHandshakeRequest;
    NSMutableDictionary *_pingCompletions;
    long long _lastPingId;
}

@property long long lastPingId; // @synthesize lastPingId=_lastPingId;
@property(retain) NSMutableDictionary *pingCompletions; // @synthesize pingCompletions=_pingCompletions;
@property(retain, nonatomic) NSURLRequest *socketioHandshakeRequest; // @synthesize socketioHandshakeRequest=_socketioHandshakeRequest;
@property(readonly, nonatomic) NSString *transports; // @synthesize transports=_transports;
@property(readonly, nonatomic) NSNumber *connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(readonly, nonatomic) NSNumber *heartbeatTimeout; // @synthesize heartbeatTimeout=_heartbeatTimeout;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool receivedHeartBeat; // @synthesize receivedHeartBeat=_receivedHeartBeat;
- (void).cxx_destruct;
- (void)dispatchIncomingTextMessage:(id)arg1;
- (void)sendSocketIOPingWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)send:(id)arg1;
- (void)sendHeartbeat;
- (_Bool)processHandshakeResponse:(id)arg1;
- (void)upgradeAndStartConnectionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)prepareSocketIOHandshakeRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 injectStreamFactory:(id)arg3 injectDispatcher:(id)arg4;

// Remaining properties
@property(nonatomic) __weak NSObject<SKPSocketIOConnectionDelegate> *delegate; // @dynamic delegate;

@end
