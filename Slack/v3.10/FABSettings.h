/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSNumber, NSString, NSFileManager;

@interface FABSettings : NSObject {

	BOOL _reportingEnabled;
	BOOL _errorReportingEnabled;
	NSDictionary* _settingsDictionary;
	NSNumber* _logBufferSize;
	NSNumber* _maxErrors;
	NSNumber* _maxCustomKeys;
	NSString* _settingsPath;
	NSFileManager* _fileManager;

}

@property (nonatomic,retain) NSDictionary * settingsDictionary;              //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
@property (nonatomic,readonly) BOOL appNeedsOnboarding; 
@property (nonatomic,readonly) BOOL appUpdateRequired; 
@property (nonatomic,readonly) BOOL reportingEnabled;                        //@synthesize reportingEnabled=_reportingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL errorReportingEnabled;                   //@synthesize errorReportingEnabled=_errorReportingEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * logBufferSize;                     //@synthesize logBufferSize=_logBufferSize - In the implementation block
@property (nonatomic,readonly) NSNumber * maxErrors;                         //@synthesize maxErrors=_maxErrors - In the implementation block
@property (nonatomic,readonly) NSNumber * maxCustomKeys;                     //@synthesize maxCustomKeys=_maxCustomKeys - In the implementation block
@property (nonatomic,retain) NSString * settingsPath;                        //@synthesize settingsPath=_settingsPath - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                    //@synthesize fileManager=_fileManager - In the implementation block
-(NSString *)settingsPath;
-(id)initWithSettingsPath:(id)arg1 fileManager:(id)arg2 ;
-(void)clearSettingsDictionary;
-(BOOL)appNeedsOnboarding;
-(BOOL)appUpdateRequired;
-(id)settingsURLForEndpoint:(id)arg1 appInstanceIdentifer:(id)arg2 appIconHash:(id)arg3 ;
-(id)appSettings;
-(id)appStatus;
-(NSDictionary *)settingsDictionary;
-(void)setSettingsDictionary:(NSDictionary *)arg1 ;
-(id)appPlatform;
-(id)appBuildVersion;
-(id)appDisplayVersion;
-(id)appSource;
-(BOOL)reportingEnabled;
-(BOOL)errorReportingEnabled;
-(NSNumber *)logBufferSize;
-(NSNumber *)maxErrors;
-(NSNumber *)maxCustomKeys;
-(void)setSettingsPath:(NSString *)arg1 ;
-(id)appBundleIdentifier;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(NSFileManager *)fileManager;
@end
