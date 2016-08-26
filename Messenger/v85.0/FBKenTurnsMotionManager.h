/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <CoreMotion/CMMotionManager.h>

@class NSMutableSet, CADisplayLink;

@interface FBKenTurnsMotionManager : CMMotionManager {

	NSMutableSet* _registeredObservers;
	NSMutableSet* _activeObservers;
	recursive_mutex _activeObserversLock;
	BOOL _sensorsActive;
	CADisplayLink* _displayLink;
	BOOL _inForeground;

}
+(id)sharedKenTurnsMotionManager;
+(id)sharedKenTurnsMotionOperationQueue;
-(void)unregisterKenTurnsObserver:(id)arg1 ;
-(void)startDeliveringMotionEventsToObserver:(id)arg1 ;
-(void)_registerForApplicationNotifications;
-(void)_observersChanged;
-(void)stopDeliveringMotionEventsToObserver:(id)arg1 ;
-(void)registerKenTurnsObserver:(id)arg1 ;
-(void)_stopObservingMotion;
-(void)_displayLinkTick;
-(void)_startObservingMotion;
-(void)_handleDeviceMotion:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_didEnterBackground:(id)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
@end
