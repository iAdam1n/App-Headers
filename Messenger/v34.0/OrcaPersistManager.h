/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/FBMLongBackgroundJobStarting.h>

@protocol FBProvider, OS_dispatch_group, FBMAppProperties;
@class FBMThreadSet, FBMFetchedThreadKeySet, UIApplication, MNUserSettings, NSNotificationCenter, FBMSPDataStore, NSObject, FBMPinnedGroupsManager, FBMMessagingFetchMethodStore, MNDiskPersistenceConfiguration, NSString;

@interface OrcaPersistManager : NSObject <FBSessionClassProvidable, FBMLongBackgroundJobStarting> {

	BOOL _started;
	FBMThreadSet* _threadSet;
	FBMFetchedThreadKeySet* _fetchedThreadKeySet;
	UIApplication* _application;
	id<FBProvider> _messagingStoreProvider;
	MNUserSettings* _userSettings;
	NSNotificationCenter* _notificationCenter;
	FBMSPDataStore* _dataStore;
	unsigned long long _messagingStorePersistTask;
	id _backgroundNotificationObserver;
	id _messageSentNotificationObserver;
	NSObject*<OS_dispatch_group> _persistGroup;
	id<FBMAppProperties> _appProperties;
	FBMPinnedGroupsManager* _pinnedGroupsManager;
	FBMMessagingFetchMethodStore* _messagingFetchMethodStore;
	MNDiskPersistenceConfiguration* _persistenceConfiguration;

}

@property (nonatomic,retain) UIApplication * application;                                            //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) id<FBProvider> messagingStoreProvider;                                  //@synthesize messagingStoreProvider=_messagingStoreProvider - In the implementation block
@property (nonatomic,retain) MNUserSettings * userSettings;                                          //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;                              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) FBMSPDataStore * dataStore;                                             //@synthesize dataStore=_dataStore - In the implementation block
@property (assign,nonatomic) unsigned long long messagingStorePersistTask;                           //@synthesize messagingStorePersistTask=_messagingStorePersistTask - In the implementation block
@property (assign,nonatomic) id backgroundNotificationObserver;                                      //@synthesize backgroundNotificationObserver=_backgroundNotificationObserver - In the implementation block
@property (assign,nonatomic) id messageSentNotificationObserver;                                     //@synthesize messageSentNotificationObserver=_messageSentNotificationObserver - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> persistGroup;                              //@synthesize persistGroup=_persistGroup - In the implementation block
@property (nonatomic,retain) id<FBMAppProperties> appProperties;                                     //@synthesize appProperties=_appProperties - In the implementation block
@property (nonatomic,retain) FBMPinnedGroupsManager * pinnedGroupsManager;                           //@synthesize pinnedGroupsManager=_pinnedGroupsManager - In the implementation block
@property (nonatomic,retain) FBMMessagingFetchMethodStore * messagingFetchMethodStore;               //@synthesize messagingFetchMethodStore=_messagingFetchMethodStore - In the implementation block
@property (nonatomic,retain) MNDiskPersistenceConfiguration * persistenceConfiguration;              //@synthesize persistenceConfiguration=_persistenceConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(FBMPinnedGroupsManager *)pinnedGroupsManager;
-(void)setPinnedGroupsManager:(FBMPinnedGroupsManager *)arg1 ;
-(id<FBMAppProperties>)appProperties;
-(void)setAppProperties:(id<FBMAppProperties>)arg1 ;
-(void)cleanupMessagingStorePersistTask;
-(id)initWithApp:(id)arg1 messagingStoreProvider:(id)arg2 userSettings:(id)arg3 notificationCenter:(id)arg4 dataStore:(id)arg5 appProperties:(id)arg6 threadSet:(id)arg7 pinnedGroupsManager:(id)arg8 fetchedThreadKeySet:(id)arg9 messagingFetchMethodStore:(id)arg10 persistenceConfiguration:(id)arg11 ;
-(void)finishPersist;
-(void)_performPartialAppBackgroundPersist;
-(void)_performLegacyFullAppBackgroundPersist;
-(void)_handleDidEnterBackground;
-(void)handleSentMessage:(id)arg1 ;
-(void)blockUntilPersistComplete;
-(void)startPersist;
-(void)startPersistManager;
-(void)stopPersistManager;
-(id<FBProvider>)messagingStoreProvider;
-(void)setMessagingStoreProvider:(id<FBProvider>)arg1 ;
-(unsigned long long)messagingStorePersistTask;
-(void)setMessagingStorePersistTask:(unsigned long long)arg1 ;
-(id)backgroundNotificationObserver;
-(void)setBackgroundNotificationObserver:(id)arg1 ;
-(id)messageSentNotificationObserver;
-(void)setMessageSentNotificationObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)persistGroup;
-(void)setPersistGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(FBMMessagingFetchMethodStore *)messagingFetchMethodStore;
-(void)setMessagingFetchMethodStore:(FBMMessagingFetchMethodStore *)arg1 ;
-(MNDiskPersistenceConfiguration *)persistenceConfiguration;
-(void)setPersistenceConfiguration:(MNDiskPersistenceConfiguration *)arg1 ;
-(void)beginLongBackgroundJob;
-(void)setApplication:(UIApplication *)arg1 ;
-(void)dealloc;
-(NSNotificationCenter *)notificationCenter;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(MNUserSettings *)userSettings;
-(void)setDataStore:(FBMSPDataStore *)arg1 ;
-(FBMSPDataStore *)dataStore;
-(UIApplication *)application;
@end

