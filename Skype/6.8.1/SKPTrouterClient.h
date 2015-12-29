//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPTrouterConnectionDelegate.h"

@class NSDate, NSString, SKPDispatcher, SKPPushNotificationHandler, SKPPushNotificationRegistrar, SKPReachability, SKPTrouterRouter;

@interface SKPTrouterClient : NSObject <SKPTrouterConnectionDelegate>
{
    _Bool _isObserving;
    unsigned long long _keepAliveInterval;
    double _connectionRenewalMargin;
    id <SKPITrouterConnection> _mainConnection;
    id <SKPITrouterConnection> _renewalConnection;
    NSDate *_connectionRenewalTime;
    id <SKPITCPStreamFactory> _streamFactory;
    SKPDispatcher *_dispatcher;
    SKPTrouterRouter *_router;
    SKPPushNotificationRegistrar *_pushNotificationRegistrar;
    SKPPushNotificationHandler *_pushNotificationHandler;
    SKPReachability *_reachability;
}

+ (id)trouterGenericHeaders;
@property(retain) SKPReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) SKPPushNotificationHandler *pushNotificationHandler; // @synthesize pushNotificationHandler=_pushNotificationHandler;
@property(retain, nonatomic) SKPPushNotificationRegistrar *pushNotificationRegistrar; // @synthesize pushNotificationRegistrar=_pushNotificationRegistrar;
@property(retain, nonatomic) SKPTrouterRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) SKPDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) id <SKPITCPStreamFactory> streamFactory; // @synthesize streamFactory=_streamFactory;
@property(retain) NSDate *connectionRenewalTime; // @synthesize connectionRenewalTime=_connectionRenewalTime;
@property(retain, nonatomic) id <SKPITrouterConnection> renewalConnection; // @synthesize renewalConnection=_renewalConnection;
@property(retain, nonatomic) id <SKPITrouterConnection> mainConnection; // @synthesize mainConnection=_mainConnection;
@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property double connectionRenewalMargin; // @synthesize connectionRenewalMargin=_connectionRenewalMargin;
@property unsigned long long keepAliveInterval; // @synthesize keepAliveInterval=_keepAliveInterval;
- (void).cxx_destruct;
- (void)trouterConnectionDidReceiveServerSideKeepAlive:(id)arg1;
- (void)trouterConnection:(id)arg1 didReceivePayload:(id)arg2;
- (void)trouterConnectionRequiresSkypeTokenWithBlock:(CDUnknownBlockType)arg1;
- (long long)trouterConnectionRequiresNetworkStatus:(id)arg1;
- (void)close;
- (void)invalidate;
- (void)dealloc;
- (void)updateRenewalTime;
- (void)trouterConnectionWasEstablished:(id)arg1;
- (void)renewConnection;
- (id)newConnection;
- (id)newRenewalConnection;
- (void)renewConnectionIfNeeded;
- (_Bool)shouldRenew;
- (_Bool)isCurrentlyRenewingConnection;
- (void)pingMainConnection;
- (void)keepAlive;
- (id)currentDate;
- (void)connectToTrouterAndFetchSkypeTokenIfNeeded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithRouter:(id)arg1 injectStreamFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
