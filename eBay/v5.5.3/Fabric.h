/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, FABSettingsOnboardingManager, FABApplicationIdentiferModel, NSString;

@interface Fabric : NSObject {

	BOOL _debug;
	BOOL _isFirstInstall;
	NSArray* _kitClasses;
	NSDictionary* _fabricConfig;
	FABSettingsOnboardingManager* _settingsAndOnboardingManager;
	FABApplicationIdentiferModel* _applicationIdentifierModel;
	NSString* _APIKey;
	NSString* _installID;
	NSString* _executionIdentifier;
	NSString* _advertisingToken;

}

@property (assign,nonatomic) BOOL debug;                                                               //@synthesize debug=_debug - In the implementation block
@property (nonatomic,copy) NSArray * kitClasses;                                                       //@synthesize kitClasses=_kitClasses - In the implementation block
@property (nonatomic,copy) NSDictionary * fabricConfig;                                                //@synthesize fabricConfig=_fabricConfig - In the implementation block
@property (nonatomic,retain) FABSettingsOnboardingManager * settingsAndOnboardingManager;              //@synthesize settingsAndOnboardingManager=_settingsAndOnboardingManager - In the implementation block
@property (nonatomic,readonly) FABApplicationIdentiferModel * applicationIdentifierModel;              //@synthesize applicationIdentifierModel=_applicationIdentifierModel - In the implementation block
@property (nonatomic,copy) NSString * APIKey;                                                          //@synthesize APIKey=_APIKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * installID;                                              //@synthesize installID=_installID - In the implementation block
@property (nonatomic,readonly) BOOL isFirstInstall;                                                    //@synthesize isFirstInstall=_isFirstInstall - In the implementation block
@property (nonatomic,copy,readonly) NSString * executionIdentifier;                                    //@synthesize executionIdentifier=_executionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * advertisingToken;                                                //@synthesize advertisingToken=_advertisingToken - In the implementation block
@property (nonatomic,readonly) NSDictionary * settings; 
@property (nonatomic,readonly) NSString * instanceIdentifier; 
+(id)with:(id)arg1 ;
+(id)convertToKitClassesIfNeeded:(id)arg1 ;
+(void)validateFABKitConformance:(id)arg1 ;
+(id)kitClassesByAddingDigitsIfFound:(id)arg1 ;
+(id)kitClassesByAddingAnswersIfFound:(id)arg1 ;
+(void)initializeKit:(Class)arg1 ;
+(id)configurationDictionaryForKitClass:(Class)arg1 ;
+(id)sharedSDK;
-(void)setAPIKey:(NSString *)arg1 ;
-(NSString *)installID;
-(id)kitVersionsByKitBundleIdentifier;
-(id)readInstallationUUID;
-(id)generateInstallationUUID;
-(FABApplicationIdentiferModel *)applicationIdentifierModel;
-(void)setKitClasses:(NSArray *)arg1 ;
-(NSArray *)kitClasses;
-(void)onboardAppAndDownloadSettings;
-(FABSettingsOnboardingManager *)settingsAndOnboardingManager;
-(id)validFabricConfigFromInfoPlist:(id)arg1 ;
-(NSDictionary *)fabricConfig;
-(id)configurationDictionaryForKit:(id)arg1 ;
-(void)setFabricConfig:(NSDictionary *)arg1 ;
-(void)setSettingsAndOnboardingManager:(FABSettingsOnboardingManager *)arg1 ;
-(BOOL)isFirstInstall;
-(NSString *)executionIdentifier;
-(void)setAdvertisingToken:(NSString *)arg1 ;
-(NSString *)APIKey;
-(NSString *)advertisingToken;
-(id)init;
-(NSDictionary *)settings;
-(BOOL)debug;
-(NSString *)instanceIdentifier;
-(void)setDebug:(BOOL)arg1 ;
@end
