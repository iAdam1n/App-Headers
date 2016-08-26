/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNWatchConnectivityListener.h>

@class NSMutableArray, MNWatchConnectivityManager, NSString;

@interface MNWatchDataWriterCoordinator : NSObject <MNWatchConnectivityListener> {

	NSMutableArray* _writers;
	unsigned long long _backgroundTaskID;
	MNWatchConnectivityManager* _watchConnectivityManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_addAppBackgroundObserver;
-(void)_removeAppBackgroundObserver;
-(void)_updateStateForWriter:(id)arg1 ;
-(void)_updateStateForAllWriters;
-(void)_appDidEnterBackground;
-(id)initWithWatchConnectivityManager:(id)arg1 ;
-(void)addWriter:(id)arg1 ;
-(void)removeWriter:(id)arg1 ;
-(void)reachabilityDidChangeTo:(BOOL)arg1 ;
-(void)watchStateDidChange;
-(void)didReceiveMessage:(id)arg1 withFileURL:(id)arg2 ;
-(void)didUpdateAppContext:(id)arg1 ;
-(void)dealloc;
-(void)_endBackgroundTask;
@end
