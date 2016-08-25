/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/FABDownloadAndSaveSettingsOperationDelegate.h>
#import <SolitaireFree/FABOnboardingOperationDelegate.h>

@class FABSettings, FABApplicationIdentiferModel, FABOnboardingOperation, NSFileManager, NSDictionary, NSString, FABNetworkClient;

@interface FABSettingsOnboardingManager : NSObject <FABDownloadAndSaveSettingsOperationDelegate, FABOnboardingOperationDelegate> {

	BOOL _hasAttemptedAppConfigure;
	FABSettings* _settingsModel;
	FABApplicationIdentiferModel* _appIdentifierModel;
	FABOnboardingOperation* _onboardingOperation;
	NSFileManager* _fileManager;
	NSDictionary* _configuration;
	NSDictionary* _defaultConfiguration;
	NSString* _APIKey;
	NSDictionary* _kitVersionsByKitBundleIdentifier;
	FABNetworkClient* _networkClient;

}

@property (nonatomic,retain) FABSettings * settingsModel;                                    //@synthesize settingsModel=_settingsModel - In the implementation block
@property (nonatomic,retain) FABApplicationIdentiferModel * appIdentifierModel;              //@synthesize appIdentifierModel=_appIdentifierModel - In the implementation block
@property (nonatomic,retain) FABOnboardingOperation * onboardingOperation;                   //@synthesize onboardingOperation=_onboardingOperation - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                                    //@synthesize fileManager=_fileManager - In the implementation block
@property (assign,nonatomic) BOOL hasAttemptedAppConfigure;                                  //@synthesize hasAttemptedAppConfigure=_hasAttemptedAppConfigure - In the implementation block
@property (nonatomic,retain) NSDictionary * configuration;                                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultConfiguration;                            //@synthesize defaultConfiguration=_defaultConfiguration - In the implementation block
@property (nonatomic,copy) NSString * APIKey;                                                //@synthesize APIKey=_APIKey - In the implementation block
@property (nonatomic,copy) NSDictionary * kitVersionsByKitBundleIdentifier;                  //@synthesize kitVersionsByKitBundleIdentifier=_kitVersionsByKitBundleIdentifier - In the implementation block
@property (nonatomic,readonly) FABNetworkClient * networkClient;                             //@synthesize networkClient=_networkClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsDirectoryPath;
-(void)setKitVersionsByKitBundleIdentifier:(NSDictionary *)arg1 ;
-(void)beginSettingsDownload;
-(FABOnboardingOperation *)onboardingOperation;
-(void)setOnboardingOperation:(FABOnboardingOperation *)arg1 ;
-(void)finishNetworkingSession;
-(BOOL)hasAttemptedAppConfigure;
-(void)postSettingsDownloadCompletedNotification;
-(void)setHasAttemptedAppConfigure:(BOOL)arg1 ;
-(void)beginOnboarding:(BOOL)arg1 endpointString:(id)arg2 ;
-(id)appIconHash;
-(void)setSettingsModel:(FABSettings *)arg1 ;
-(void)setAppIdentifierModel:(FABApplicationIdentiferModel *)arg1 ;
-(void)setDefaultConfiguration:(NSDictionary *)arg1 ;
-(id)initWithApplicationIdentifierModel:(id)arg1 ;
-(void)beginSettingsAndOnboardingOperationsWithAPIKey:(id)arg1 kitVersionsByKitBundleIdentifier:(id)arg2 ;
-(FABSettings *)settingsModel;
-(void)setAPIKey:(NSString *)arg1 ;
-(id)advertisingToken;
-(NSString *)APIKey;
-(id)settingsPath;
-(id)settingsURL;
-(void)operation:(id)arg1 didDownloadAndSaveSettingsWithError:(id)arg2 ;
-(FABApplicationIdentiferModel *)appIdentifierModel;
-(NSDictionary *)kitVersionsByKitBundleIdentifier;
-(FABNetworkClient *)networkClient;
-(void)onboardingOperation:(id)arg1 didCompleteAppUpdateWithError:(id)arg2 ;
-(void)onboardingOperation:(id)arg1 didCompleteAppCreationWithError:(id)arg2 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(NSDictionary *)defaultConfiguration;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(id)valueForConfigurationKey:(id)arg1 ;
@end

