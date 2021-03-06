//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SKPKeepAliveHandler : NSObject
{
    _Bool _started;
    _Bool _invalidated;
    _Bool _trouterProvisioningEnabled;
    _Bool _pushCallingProvisioningEnabled;
    _Bool _keepAliveHandlerEnabled;
    double _keepAliveTimeout;
}

@property(nonatomic) double keepAliveTimeout; // @synthesize keepAliveTimeout=_keepAliveTimeout;
@property(nonatomic, getter=isKeepAliveHandlerEnabled) _Bool keepAliveHandlerEnabled; // @synthesize keepAliveHandlerEnabled=_keepAliveHandlerEnabled;
@property(nonatomic, getter=isPushCallingProvisioningEnabled) _Bool pushCallingProvisioningEnabled; // @synthesize pushCallingProvisioningEnabled=_pushCallingProvisioningEnabled;
@property(nonatomic, getter=isTrouterProvisioningEnabled) _Bool trouterProvisioningEnabled; // @synthesize trouterProvisioningEnabled=_trouterProvisioningEnabled;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic, getter=isStarted) _Bool started; // @synthesize started=_started;
- (void)invalidate;
- (void)stop;
- (void)start;
- (void)updateKeepAliveTimeoutRegistration;
- (void)unregisterKeepAliveTimeoutHandler;
- (void)registerKeepAliveTimeoutHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

