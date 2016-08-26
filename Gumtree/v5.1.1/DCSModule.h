/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(void)didInstall;
-(void)willUninstall;
-(BOOL)isStaging;
-(void)setIsStaging:(BOOL)arg1 ;
-(void)setClientProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)clientProperties;
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
-(BOOL)appKilled;
-(id)overriddenProperties;
-(id)rawProperties;
-(BOOL)validConfiguration;
-(void)addLocalOverride:(id)arg1 forKey:(id)arg2 ;
-(float)deviceRolloutThreshold;
-(void)stopTimer;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)stopLoading;
-(void)startTimer;
-(id)initWithProperties:(id)arg1 ;
-(id)properties;
-(NSDictionary *)cachedProperties;
-(void)setCachedProperties:(NSDictionary *)arg1 ;
-(NSDate *)lastUpdatedDate;
-(void)forceReload;
-(double)refreshInterval;
-(double)maxAge;
-(id)cachePath;
-(void)setRefreshInterval:(double)arg1 ;
-(void)loadConfiguration;
-(NSTimer *)refreshTimer;
-(void)setRefreshTimer:(NSTimer *)arg1 ;
-(NSString *)configurationVersion;
-(void)setConfigurationVersion:(NSString *)arg1 ;
-(id)propertyForName:(id)arg1 ;
@end
