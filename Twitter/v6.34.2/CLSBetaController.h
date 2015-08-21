/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/NSURLSessionDelegate.h>

@protocol CLSBetaControllerDelegate;
@class NSString, FABNetworkClient, CLSBetaUpdate, NSTimer;

@interface CLSBetaController : NSObject <NSURLSessionDelegate> {

	NSString* _betaToken;
	BOOL _checksSuspended;
	BOOL _retrying;
	id<CLSBetaControllerDelegate> _delegate;
	FABNetworkClient* _networkClient;
	CLSBetaUpdate* _activeUpdate;
	NSTimer* _checkSuspensionTimer;
	dispatch_queue_sRef _queue;

}

@property (assign,nonatomic,__weak) id<CLSBetaControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * betaToken; 
@property (nonatomic,readonly) FABNetworkClient * networkClient;                         //@synthesize networkClient=_networkClient - In the implementation block
@property (nonatomic,retain) CLSBetaUpdate * activeUpdate;                               //@synthesize activeUpdate=_activeUpdate - In the implementation block
@property (nonatomic,retain) NSTimer * checkSuspensionTimer;                             //@synthesize checkSuspensionTimer=_checkSuspensionTimer - In the implementation block
@property (assign,nonatomic) BOOL checksSuspended;                                       //@synthesize checksSuspended=_checksSuspended - In the implementation block
@property (assign,nonatomic) BOOL retrying;                                              //@synthesize retrying=_retrying - In the implementation block
@property (nonatomic,readonly) dispatch_queue_sRef queue;                                //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isBetaSupported;
+(id)pinnnedCertificates;
-(id)APIKey;
-(NSString *)betaToken;
-(FABNetworkClient *)networkClient;
-(id)betaEndpoint;
-(void)fabricSettingsDownloaded:(id)arg1 ;
-(id)appBuildVersion;
-(id)appDisplayVersion;
-(id)appInstanceIdentifier;
-(id)appInstallationSource;
-(void)didGetUpdate:(id)arg1 ;
-(void)maybeGetUpdate:(/*^block*/id)arg1 ;
-(BOOL)shouldGetUpdates;
-(void)loadUpdateWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)betaUpdateURL;
-(void)handledCompletedBetaRequestWithData:(id)arg1 error:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)temporarilySuspendChecks;
-(id)updateWithData:(id)arg1 error:(id*)arg2 ;
-(id)betaUpdateSuspendDurationSecs;
-(void)allowChecks;
-(void)showBetaAlertForUpdate:(id)arg1 ;
-(void)setActiveUpdate:(CLSBetaUpdate *)arg1 ;
-(void)checkForUpdate;
-(CLSBetaUpdate *)activeUpdate;
-(NSTimer *)checkSuspensionTimer;
-(void)setCheckSuspensionTimer:(NSTimer *)arg1 ;
-(BOOL)checksSuspended;
-(void)setChecksSuspended:(BOOL)arg1 ;
-(BOOL)retrying;
-(void)setRetrying:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CLSBetaControllerDelegate>)arg1 ;
-(id<CLSBetaControllerDelegate>)delegate;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(id)settings;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)start;
-(dispatch_queue_sRef)queue;
-(id)appBundleIdentifier;
-(id)initWithDelegate:(id)arg1 ;
-(void)applicationWillEnterForeground;
@end

