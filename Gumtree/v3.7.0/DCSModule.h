/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/EMFModule.h>
#import <Gumtree/DCSProtocol.h>

@class NSString, NSDictionary, NSDate, NSMutableDictionary, NSTimer;

@interface DCSModule : EMFModule <DCSProtocol> {

	BOOL _configurationLoaded;
	BOOL _refrehsing;
	BOOL _isStaging;
	float _deviceRolloutThreshold;
	NSDictionary* _clientProperties;
	NSString* _configurationVersion;
	NSDate* _lastUpdatedDate;
	NSDictionary* _dcsProperties;
	NSDictionary* _namedConfigurations;
	NSMutableDictionary* _localOverrides;
	double _refreshInterval;
	NSTimer* _refreshTimer;
	long long _mostRecentSiteID;
	NSDictionary* _cachedProperties;

}

@property (nonatomic,copy) NSDictionary * clientProperties;                     //@synthesize clientProperties=_clientProperties - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdatedDate;                            //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (assign,nonatomic) BOOL configurationLoaded;                          //@synthesize configurationLoaded=_configurationLoaded - In the implementation block
@property (nonatomic,readonly) NSDictionary * apiProperties; 
@property (nonatomic,retain) NSDictionary * dcsProperties;                      //@synthesize dcsProperties=_dcsProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * namedConfigurations;                //@synthesize namedConfigurations=_namedConfigurations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * localOverrides;              //@synthesize localOverrides=_localOverrides - In the implementation block
@property (nonatomic,retain) NSTimer * refreshTimer;                            //@synthesize refreshTimer=_refreshTimer - In the implementation block
@property (assign,nonatomic) long long mostRecentSiteID;                        //@synthesize mostRecentSiteID=_mostRecentSiteID - In the implementation block
@property (assign,nonatomic) BOOL refrehsing;                                   //@synthesize refrehsing=_refrehsing - In the implementation block
@property (assign,nonatomic) double refreshInterval;                            //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedProperties;                   //@synthesize cachedProperties=_cachedProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isStaging;                                    //@synthesize isStaging=_isStaging - In the implementation block
@property (nonatomic,copy) NSString * configurationVersion;                     //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (nonatomic,readonly) float deviceRolloutThreshold;                    //@synthesize deviceRolloutThreshold=_deviceRolloutThreshold - In the implementation block
+(id)defaultUTI;
+(id)defaultProperties;
-(void)forceReload;
-(id)overriddenProperties;
-(id)rawProperties;
-(BOOL)validConfiguration;
-(BOOL)appKilled;
-(void)addLocalOverride:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isStaging;
-(void)setIsStaging:(BOOL)arg1 ;
-(float)deviceRolloutThreshold;
-(NSDictionary *)clientProperties;
-(void)didInstall;
-(void)willUninstall;
-(void)setClientProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)apiProperties;
-(void)setDcsProperties:(NSDictionary *)arg1 ;
-(void)setLocalOverrides:(NSMutableDictionary *)arg1 ;
-(void)setMostRecentSiteID:(long long)arg1 ;
-(void)loadConfigurationIfExpired;
-(void)checkKillSwitch;
-(BOOL)configurationLoaded;
-(long long)mostRecentSiteID;
-(BOOL)refrehsing;
-(void)setRefrehsing:(BOOL)arg1 ;
-(void)setConfigurationLoaded:(BOOL)arg1 ;
-(NSDictionary *)dcsProperties;
-(NSDictionary *)namedConfigurations;
-(void)setNamedConfigurations:(NSDictionary *)arg1 ;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(void)refreshOnTimer:(id)arg1 ;
-(NSMutableDictionary *)localOverrides;
-(id)stringForDictionary:(id)arg1 withKey:(id)arg2 ;
-(NSDictionary *)cachedProperties;
-(void)setCachedProperties:(NSDictionary *)arg1 ;
-(void)stopTimer;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)stopLoading;
-(void)startTimer;
-(id)initWithProperties:(id)arg1 ;
-(id)properties;
-(void)loadConfiguration;
-(double)refreshInterval;
-(void)setRefreshInterval:(double)arg1 ;
-(NSTimer *)refreshTimer;
-(void)setRefreshTimer:(NSTimer *)arg1 ;
-(NSString *)configurationVersion;
-(void)setConfigurationVersion:(NSString *)arg1 ;
-(id)cachePath;
-(id)propertyForName:(id)arg1 ;
-(double)maxAge;
-(NSDate *)lastUpdatedDate;
@end

