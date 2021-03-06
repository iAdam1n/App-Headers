/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNPlatformAppListServiceListener.h>
#import <Messenger/MNPlatformAppFirstOpenedTimeCacheListener.h>
#import <Messenger/FBSessionClassProvidable.h>

@class MNPlatformAppListService, MNPlatformAppFirstOpenedTimeCache, MNPlatformAppRankingInfoCache, NSArray, MNPlatformAppManagerListenerAnnouncer, NSString;

@interface MNPlatformAppManager : NSObject <MNPlatformAppListServiceListener, MNPlatformAppFirstOpenedTimeCacheListener, FBSessionClassProvidable> {

	MNPlatformAppListService* _platformAppListService;
	MNPlatformAppFirstOpenedTimeCache* _firstOpenedTimeCache;
	MNPlatformAppRankingInfoCache* _rankingInfoCache;
	NSArray* _unopenedApps;
	NSArray* _installedApps;
	NSArray* _uninstalledApps;
	MNPlatformAppManagerListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didUpdateAppList;
-(void)didUpdateCache;
-(id)initWithPlatformAppListServer:(id)arg1 firstOpenedTimeCache:(id)arg2 rankingInfoCache:(id)arg3 announcer:(id)arg4 ;
-(id)_getSortedInstalledPlatformApps:(id)arg1 ;
-(void)_addOpenIncrement:(id)arg1 byAppID:(id)arg2 ;
-(void)_initAppsListIfNeeded;
-(void)_updateInstalledAppsRankingInfo;
-(void)_decayInstalledAppsWeights:(id)arg1 byNow:(id)arg2 ;
-(void)_promoteNewlyInstalledApps:(id)arg1 ;
-(void)_cleanupLegacyStates:(id)arg1 ;
-(long long)_getIndex:(id)arg1 byAppID:(id)arg2 ;
-(long long)_getRankingWeight:(id)arg1 byAppID:(id)arg2 ;
-(void)_addBonusWeight:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 ;
-(double)_lastRankingWeightDecayTime:(id)arg1 byAppID:(id)arg2 ;
-(id)_getAppsListWithInstallStatus:(BOOL)arg1 ;
-(void)_updateUnopendAppsWithAppList:(id)arg1 ;
-(id)appItemToPromoteByFirstTimeOpen;
-(id)appItemToPromoteByUsage;
-(id)unopenedApps;
-(BOOL)isAppUnopened:(id)arg1 ;
-(void)didPlatformAppOpen:(id)arg1 ;
-(id)getSortedAppsByWeight;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

