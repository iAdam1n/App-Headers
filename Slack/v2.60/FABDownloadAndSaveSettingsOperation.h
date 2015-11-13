/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/FABNetworkOperation.h>

@protocol FABDownloadAndSaveSettingsOperationDelegate;
@class NSError, NSURL, NSFileManager, NSString, FABNetworkClient;

@interface FABDownloadAndSaveSettingsOperation : FABNetworkOperation {

	id<FABDownloadAndSaveSettingsOperationDelegate> _delegate;
	NSError* _error;
	NSURL* _settingsURL;
	NSFileManager* _fileManager;
	NSString* _settingsDirectoryPath;
	NSString* _settingsFilePath;
	NSString* _installIdentifier;
	NSString* _advertisingToken;
	FABNetworkClient* _networkClient;

}

@property (nonatomic,readonly) id<FABDownloadAndSaveSettingsOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSURL * settingsURL;                                                   //@synthesize settingsURL=_settingsURL - In the implementation block
@property (nonatomic,readonly) NSFileManager * fileManager;                                           //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) NSString * settingsDirectoryPath;                                      //@synthesize settingsDirectoryPath=_settingsDirectoryPath - In the implementation block
@property (nonatomic,readonly) NSString * settingsFilePath;                                           //@synthesize settingsFilePath=_settingsFilePath - In the implementation block
@property (nonatomic,readonly) NSString * installIdentifier;                                          //@synthesize installIdentifier=_installIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * advertisingToken;                                           //@synthesize advertisingToken=_advertisingToken - In the implementation block
@property (nonatomic,__weak,readonly) FABNetworkClient * networkClient;                               //@synthesize networkClient=_networkClient - In the implementation block
-(id)initWithAPIKey:(id)arg1 ;
-(id)mutableRequestWithDefaultHTTPHeaderFieldsAndTimeoutForURL:(id)arg1 ;
-(NSString *)installIdentifier;
-(NSString *)advertisingToken;
-(NSURL *)settingsURL;
-(FABNetworkClient *)networkClient;
-(NSString *)settingsDirectoryPath;
-(NSString *)settingsFilePath;
-(id)initWithAPIKey:(id)arg1 delegate:(id)arg2 settingsURL:(id)arg3 settingsDirectoryPath:(id)arg4 settingsFilePath:(id)arg5 fileManager:(id)arg6 installIdentifier:(id)arg7 advertisingToken:(id)arg8 networkClient:(id)arg9 ;
-(NSError *)error;
-(id<FABDownloadAndSaveSettingsOperationDelegate>)delegate;
-(void)main;
-(NSFileManager *)fileManager;
@end

