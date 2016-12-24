/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/FABNetworkOperation.h>

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

@property (assign,nonatomic) BOOL shouldCreate;                                                   //@synthesize shouldCreate=_shouldCreate - In the implementation block
@property (nonatomic,readonly) FABApplicationIdentiferModel * appIdentifierModel;                 //@synthesize appIdentifierModel=_appIdentifierModel - In the implementation block
@property (nonatomic,readonly) NSString * appEndpoint;                                            //@synthesize appEndpoint=_appEndpoint - In the implementation block
@property (nonatomic,readonly) id<FABOnboardingOperationDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) FABNetworkClient * networkClient;                           //@synthesize networkClient=_networkClient - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * kitVersionsByKitBundleIdentifier;              //@synthesize kitVersionsByKitBundleIdentifier=_kitVersionsByKitBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                   //@synthesize error=_error - In the implementation block
-(id)appPlatform;
-(id)initWithAPIKey:(id)arg1 ;
-(id)appBuildVersion;
-(id)appDisplayVersion;
-(id)errorForCode:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)beginAppConfigure;
-(FABApplicationIdentiferModel *)appIdentifierModel;
-(id)appInstallSource;
-(NSDictionary *)kitVersionsByKitBundleIdentifier;
-(BOOL)shouldCreate;
-(id)onboardingRequestForAppCreate:(BOOL)arg1 ;
-(FABNetworkClient *)networkClient;
-(NSString *)appEndpoint;
-(id)appCreateURL;
-(id)appUpdateURL;
-(id)initWithDelegate:(id)arg1 shouldCreate:(BOOL)arg2 APIKey:(id)arg3 kitVersionsByKitBundleIdentifier:(id)arg4 appIdentifierModel:(id)arg5 endpointString:(id)arg6 networkClient:(id)arg7 ;
-(void)setShouldCreate:(BOOL)arg1 ;
-(id<FABOnboardingOperationDelegate>)delegate;
-(void)main;
-(id)appBundleIdentifier;
-(id)appName;
-(NSError *)error;
@end
