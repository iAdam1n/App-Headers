/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/SPDeviceConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, OASObjectCache, NSString;

@interface OASNanoAppInstallManager : NSObject <SPDeviceConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _managerQueue;
	OASObjectCache* _cache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> managerQueue;              //@synthesize managerQueue=_managerQueue - In the implementation block
@property (nonatomic,readonly) OASObjectCache * cache;                                 //@synthesize cache=_cache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)managerQueue;
-(long long)installStatusForNanoAppWithBundleID:(id)arg1 ;
-(void)saveInstallStatusToCache:(long long)arg1 forBundleID:(id)arg2 timestamp:(id)arg3 ;
-(void)installNanoAppWithBundleID:(id)arg1 withProfiles:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)installNanoAppWithBundleID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)uninstallNanoAppWithBundleID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)backgroundEnumerateNanoApps;
-(void)enumerateNanoApps;
-(long long)nanoAppInstallStatusForSPApplicationInstallState:(long long)arg1 ;
-(id)initWithCache:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(OASObjectCache *)cache;
-(void)updateInstallStateForApplication:(id)arg1 installState:(long long)arg2 ;
@end

