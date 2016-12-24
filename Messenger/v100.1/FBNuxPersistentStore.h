/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBPreferences, FBNuxConfigurationProfile, FBUserSession, NSDate, NSObject;

@interface FBNuxPersistentStore : NSObject {

	FBPreferences* _preferences;
	FBNuxConfigurationProfile* _configurationProfile;
	FBUserSession* _session;
	NSDate* _lastPersistenceTime;
	long long _catalogVersion;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * lastPersistenceTime;                      //@synthesize lastPersistenceTime=_lastPersistenceTime - In the implementation block
@property (assign,nonatomic) long long catalogVersion;                          //@synthesize catalogVersion=_catalogVersion - In the implementation block
-(id)initWithSession:(id)arg1 userPreferences:(id)arg2 configurationProfile:(id)arg3 ;
-(id)unarchiveNuxCatalog;
-(void)persistNuxCatalog:(id)arg1 ;
-(void)setCatalogVersion:(long long)arg1 ;
-(long long)catalogVersion;
-(void)_removePersistedNuxCatalog;
-(id)_catalogEntriesPreferencesWithKey:(id)arg1 ;
-(void)setLastPersistenceTime:(NSDate *)arg1 ;
-(NSDate *)lastPersistenceTime;
-(NSObject*<OS_dispatch_queue>)queue;
@end
