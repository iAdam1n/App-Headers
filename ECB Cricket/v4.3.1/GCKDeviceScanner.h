/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ECBCricketApp/GCKDeviceFilterDelegate.h>
#import <ECBCricketApp/GCKNetworkReachabilityDelegate.h>
#import <ECBCricketApp/NSNetServiceBrowserDelegate.h>
#import <ECBCricketApp/NSNetServiceDelegate.h>

@class NSTimer, NSMutableArray, NSNetServiceBrowser, NSMutableDictionary, GCKNetworkReachability, GCKFilterCriteria, NSArray;

@interface GCKDeviceScanner : NSObject <GCKDeviceFilterDelegate, GCKNetworkReachabilityDelegate, NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	BOOL _isRegisteredForAppStateNotifications;
	NSTimer* _intervalTimer;
	NSTimer* _rescanTimer;
	NSMutableArray* _listeners;
	NSNetServiceBrowser* _netServiceBrowser;
	NSMutableArray* _unresolvedServices;
	NSMutableArray* _deviceFilters;
	long long _idleDeviceFilters;
	NSMutableDictionary* _deviceEntries;
	long long _discoveredDevicesCount;
	GCKNetworkReachability* _reachability;
	BOOL _scanSuspended;
	BOOL _scanning;
	BOOL _passiveScan;
	BOOL _filteringDisabled;
	GCKFilterCriteria* _filterCriteria;

}

@property (nonatomic,copy,readonly) NSArray * devices; 
@property (nonatomic,readonly) BOOL hasDiscoveredDevices; 
@property (assign,nonatomic) BOOL scanning;                                 //@synthesize scanning=_scanning - In the implementation block
@property (nonatomic,copy) GCKFilterCriteria * filterCriteria;              //@synthesize filterCriteria=_filterCriteria - In the implementation block
@property (assign,nonatomic) BOOL passiveScan;                              //@synthesize passiveScan=_passiveScan - In the implementation block
@property (assign,nonatomic) BOOL filteringDisabled;                        //@synthesize filteringDisabled=_filteringDisabled - In the implementation block
-(void)setFilterCriteria:(GCKFilterCriteria *)arg1 ;
-(void)unregisterForAppStateNotifications;
-(void)registerForAppStateNotifications;
-(void)appDidEnterBackground;
-(void)appWillEnterForeground;
-(void)stopScanInternal;
-(void)purgeAllOnlineDevices;
-(void)startScanInternal;
-(void)filterNextDevices;
-(void)setScanning:(BOOL)arg1 ;
-(void)startNetServiceScan;
-(void)rescanTimerDidFire:(id)arg1 ;
-(void)intervalTimerDidFire:(id)arg1 ;
-(void)stopAllFiltering;
-(void)stopNetServiceScan;
-(void)notifyDeviceOffline:(id)arg1 ;
-(BOOL)removeDeviceEntryWithID:(id)arg1 ;
-(void)startFilteringDevice:(id)arg1 ;
-(void)filteringFinishedForDevice:(id)arg1 withResult:(BOOL)arg2 availableApps:(id)arg3 deviceChanged:(BOOL)arg4 ;
-(void)removeListenerProxiesWithListener:(id)arg1 ;
-(void)notifyDeviceChanged:(id)arg1 ;
-(void)notifyDeviceOnline:(id)arg1 ;
-(void)addOrUpdateDeviceEntryForService:(id)arg1 ;
-(void)filteringFailedForDevice:(id)arg1 withError:(id)arg2 ;
-(void)networkReachabilityStatusDidChange:(long long)arg1 ;
-(void)setPassiveScan:(BOOL)arg1 ;
-(BOOL)hasDiscoveredDevices;
-(GCKFilterCriteria *)filterCriteria;
-(BOOL)passiveScan;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(BOOL)filteringDisabled;
-(void)setFilteringDisabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)scanning;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)stopScan;
-(NSArray *)devices;
-(void)startScan;
@end

