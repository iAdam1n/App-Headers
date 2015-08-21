/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface CLSSettings : NSObject {

	NSDictionary* _settingsDictionary;

}

@property (nonatomic,copy,readonly) NSString * reportsEndpoint; 
@property (nonatomic,copy,readonly) NSString * betaEndpoint; 
@property (nonatomic,copy,readonly) NSNumber * betaSuspendDuration; 
@property (nonatomic,readonly) BOOL shouldPackageReports; 
@property (nonatomic,readonly) BOOL shouldSubmitReports; 
@property (nonatomic,readonly) BOOL canProcessUrgentReports; 
@property (nonatomic,readonly) BOOL errorReportingEnabled; 
@property (nonatomic,readonly) BOOL customExceptionsEnabled; 
@property (nonatomic,readonly) BOOL crashReportingEnabled; 
@property (nonatomic,readonly) BOOL userPromptEnabled; 
@property (nonatomic,readonly) unsigned errorLogBufferSize; 
@property (nonatomic,readonly) unsigned logBufferSize; 
@property (nonatomic,readonly) unsigned maxCustomExceptions; 
@property (nonatomic,readonly) unsigned maxCustomKeys; 
@property (nonatomic,copy,readonly) NSString * interactivePromptTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptMessage; 
@property (nonatomic,copy,readonly) NSString * interactivePromptCancelTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptSendTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptAlwaysSendTitle; 
@property (nonatomic,readonly) NSDictionary * settingsDictionary;                             //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
-(NSDictionary *)settingsDictionary;
-(BOOL)errorReportingEnabled;
-(unsigned)logBufferSize;
-(id)promptValueForSettingsKey:(id)arg1 withLocalizedKey:(id)arg2 defaultValue:(id)arg3 ;
-(NSString *)betaEndpoint;
-(NSNumber *)betaSuspendDuration;
-(NSString *)reportsEndpoint;
-(BOOL)shouldPackageReports;
-(BOOL)shouldSubmitReports;
-(BOOL)canProcessUrgentReports;
-(BOOL)customExceptionsEnabled;
-(BOOL)crashReportingEnabled;
-(BOOL)userPromptEnabled;
-(unsigned)errorLogBufferSize;
-(unsigned)maxCustomExceptions;
-(unsigned)maxCustomKeys;
-(NSString *)interactivePromptTitle;
-(NSString *)interactivePromptMessage;
-(NSString *)interactivePromptCancelTitle;
-(NSString *)interactivePromptSendTitle;
-(NSString *)interactivePromptAlwaysSendTitle;
-(id)initWithDictionary:(id)arg1 ;
-(id)configuration;
-(id)defaultConfiguration;
-(id)valueForConfigurationKey:(id)arg1 ;
@end

