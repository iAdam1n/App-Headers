//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGActor.h"

#import "TGPeerSettingsActorProtocol.h"

@class NSString;

@interface TGPeerSettingsActor : TGActor <TGPeerSettingsActorProtocol>
{
    _Bool _force;
    long long _peerId;
}

+ (id)genericPath;
@property(nonatomic) _Bool force; // @synthesize force=_force;
@property(nonatomic) long long peerId; // @synthesize peerId=_peerId;
- (void)peerNotifySettingsRequestFailed;
- (void)peerNotifySettingsRequestSuccess:(id)arg1;
- (void)execute:(id)arg1;
- (void)prepare:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
