/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/FABNetworkOperation.h>

@protocol FABOnboardingOperationDelegate;
@class NSError, FABApplicationIdentiferModel, NSString, FABNetworkClient, NSDictionary;

@interface FABOnboardingOperation : FABNetworkOperation {

	BOOL _shouldCreate;
	NSError* _error;
	FABApplicationIdentiferModel* _appIdentifierModel;
	NSString* _appEndpoint;
	id<FABOnboardingOperationDelegate> _delegate;
	FABNetworkClient* _networkClient;
	NSDictionary* _kitVersionsByKitBundleIdentifier;

}

@property (nonatomic,readonly) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL shouldCreate;                                                //@synthesize shouldCreate=_shouldCreate - In the implementation block
@property (nonatomic,readonly) FABApplicationIdentiferModel * appIdentifierModel;              //@synthesize appIdentifierModel=_appIdentifierModel - In the implementation block
@property (nonatomic,readonly) NSString * appEndpoint;                                         //@synthesize appEndpoint=_appEndpoint - In the implementation block
@property (nonatomic,readonly) id<FABOnboardingOperationDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) FABNetworkClient * networkClient;                        //@synthesize networkClient=_networkClient - In the implementation block
@property (copy,readonly) NSDictionary * kitVersionsByKitBundleIdentifier;                     //@synthesize kitVersionsByKitBundleIdentifier=_kitVersionsByKitBundleIdentifier - In the implementation block
-(FABApplicationIdentiferModel *)appIdentifierModel;
-(NSDictionary *)kitVersionsByKitBundleIdentifier;
-(id)initWithDelegate:(id)arg1 shouldCreate:(BOOL)arg2 APIKey:(id)arg3 kitVersionsByKitBundleIdentifier:(id)arg4 appIdentifierModel:(id)arg5 endpointString:(id)arg6 networkClient:(id)arg7 ;
-(id)initWithAPIKey:(id)arg1 ;
-(id)appPlatform;
-(id)appBuildVersion;
-(id)appDisplayVersion;
-(FABNetworkClient *)networkClient;
-(id)errorForCode:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)beginAppConfigure;
-(id)appInstallSource;
-(BOOL)shouldCreate;
-(id)onboardingRequestForAppCreate:(BOOL)arg1 ;
-(NSString *)appEndpoint;
-(id)appCreateURL;
-(id)appUpdateURL;
-(void)setShouldCreate:(BOOL)arg1 ;
-(id<FABOnboardingOperationDelegate>)delegate;
-(void)main;
-(id)appBundleIdentifier;
-(id)appName;
-(NSError *)error;
@end

