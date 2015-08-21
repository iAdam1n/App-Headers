/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class AVAudioSession, NSObject, NSMutableSet, NSHashTable;

@interface FBSystemAudioSessionManager : NSObject {

	AVAudioSession* _audioSession;
	NSObject*<OS_dispatch_queue> _audioSessionQueue;
	Mutex _clientsLock;
	NSMutableSet* _clients;
	BOOL _interrupted;
	BOOL _routeIsExternal;
	int _mutedToken;
	BOOL _muted;
	Mutex _statusObserversLock;
	NSHashTable* _statusObservers;

}
+(void)propertiesForClients:(id)arg1 routeIsExternal:(BOOL)arg2 muted:(BOOL)arg3 active:(out BOOL*)arg4 activeOptions:(out unsigned long long*)arg5 category:(out id*)arg6 categoryOptions:(out unsigned long long*)arg7 portOverrideOptions:(out unsigned long long*)arg8 ;
+(id)sharedInstance;
+(void)load;
-(id)initWithAudioSession:(id)arg1 ;
-(void)_registerForAudioRoutes;
-(void)_registerForInterruptions;
-(void)_registerForMuteState;
-(void)announceStatusChange:(SEL)arg1 ;
-(void)resetAudioSession:(/*^block*/id)arg1 retries:(long long)arg2 probingInterval:(double)arg3 ;
-(void)_notifyActiveClientsOfActivationPriority:(id)arg1 ;
-(void)_updateInterruptedForAddedClient:(id)arg1 updateSucceeded:(BOOL)arg2 ;
-(void)_notifyActiveClientsOfDeactivationPriority:(id)arg1 ;
-(unsigned long long)_priorityForClient:(id)arg1 ;
-(void)_enumerateClientsUsingBlock:(/*^block*/id)arg1 ;
-(void)_interruptionWithNotification:(id)arg1 ;
-(void)_audioRouteChangedWithNotification:(id)arg1 ;
-(void)_updateRouteIsExternal;
-(void)_updateMuteState;
-(void)addActiveClient:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFinishedClient:(id)arg1 ;
-(void)reloadActiveClient:(id)arg1 ;
-(BOOL)hasActiveHighPriorityClient;
-(void)addAudioSessionStatusObserver:(id)arg1 ;
-(void)removeAudioSessionStatusObserver:(id)arg1 ;
-(BOOL)isExternal;
-(void)_update:(/*^block*/id)arg1 ;
-(BOOL)isMuted;
@end

