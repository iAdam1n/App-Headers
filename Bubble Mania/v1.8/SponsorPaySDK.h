/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SPUser, SPCredentialsManager, NSMutableDictionary, SPMediationCoordinator;

@interface SponsorPaySDK : NSObject {

	SPUser* _user;
	SPCredentialsManager* _credentialsManager;
	NSMutableDictionary* _brandEngageClientsPool;
	NSMutableDictionary* _vcsConnectorsPool;
	SPMediationCoordinator* _mediationCoordinator;

}

@property (nonatomic,retain) SPUser * user;                                              //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) SPCredentialsManager * credentialsManager;                  //@synthesize credentialsManager=_credentialsManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * brandEngageClientsPool;               //@synthesize brandEngageClientsPool=_brandEngageClientsPool - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * vcsConnectorsPool;                    //@synthesize vcsConnectorsPool=_vcsConnectorsPool - In the implementation block
@property (nonatomic,retain) SPMediationCoordinator * mediationCoordinator;              //@synthesize mediationCoordinator=_mediationCoordinator - In the implementation block
+(id)startForAppId:(id)arg1 userId:(id)arg2 securityToken:(id)arg3 ;
+(id)brandEngageClient;
+(id)startWithAutogeneratedUserForAppId:(id)arg1 securityToken:(id)arg2 ;
+(id)offerWallViewController;
+(id)offerWallViewControllerForCredentials:(id)arg1 ;
+(id)showOfferWallWithParentViewController:(id)arg1 placementId:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)brandEngageClientForCredentials:(id)arg1 ;
+(id)requestBrandEngageOffersNotifyingDelegate:(id)arg1 placementId:(id)arg2 ;
+(id)requestBrandEngageOffersNotifyingDelegate:(id)arg1 placementId:(id)arg2 queryVCSWithCurrencyId:(id)arg3 vcsDelegate:(id)arg4 ;
+(id)interstitialClient;
+(void)checkInterstitialAvailable:(id)arg1 placementId:(id)arg2 ;
+(void)showInterstitialFromViewController:(id)arg1 ;
+(void)setCredentialsForInterstitial:(id)arg1 ;
+(void)setCurrencyName:(id)arg1 ;
+(void)setCurrencyName:(id)arg1 forCredentials:(id)arg2 ;
+(id)currencyNameForCredentials:(id)arg1 ;
+(void)setShowPayoffNotificationOnVirtualCoinsReceived:(BOOL)arg1 ;
+(void)setShowPayoffNotificationOnVirtualCoinsReceived:(BOOL)arg1 forCredentials:(id)arg2 ;
+(BOOL)shouldShowPayoffNotificationOnVirtualCoinsReceivedForCredentials:(id)arg1 ;
+(id)VCSConnector;
+(id)VCSConnectorForCredentials:(id)arg1 ;
+(id)requestDeltaOfCoinsWithCurrencyId:(id)arg1 delegate:(id)arg2 ;
+(void)reportActionCompleted:(id)arg1 ;
+(void)reportActionCompleted:(id)arg1 forCredentials:(id)arg2 ;
+(BOOL)isCredentialsTokenValid:(id)arg1 ;
+(id)showOfferWallWithParentViewController:(id)arg1 ;
+(id)showOfferWallWithParentViewController:(id)arg1 placementId:(id)arg2 ;
+(id)showOfferWallWithParentViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)requestBrandEngageOffersNotifyingDelegate:(id)arg1 ;
+(void)checkInterstitialAvailable:(id)arg1 ;
+(id)requestDeltaOfCoinsNotifyingDelegate:(id)arg1 ;
+(id)cacheManager;
+(void)setLoggingLevel:(unsigned long long)arg1 ;
+(id)versionString;
+(id)instance;
-(id)startForAppId:(id)arg1 userId:(id)arg2 securityToken:(id)arg3 ;
-(id)brandEngageClient;
-(void)registerForFeedbackToUserNotifications;
-(id)startWithAutogeneratedUserForAppId:(id)arg1 securityToken:(id)arg2 ;
-(id)offerWallViewController;
-(id)offerWallViewControllerForCredentials:(id)arg1 ;
-(id)showOfferWallWithParentViewController:(id)arg1 placementId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)brandEngageClientForCredentials:(id)arg1 ;
-(id)requestBrandEngageOffersNotifyingDelegate:(id)arg1 placementId:(id)arg2 queryVCSWithCurrencyId:(id)arg3 vcsDelegate:(id)arg4 ;
-(id)interstitialClient;
-(void)setCredentialsForInterstitial:(id)arg1 ;
-(void)setCurrencyName:(id)arg1 ;
-(void)setCurrencyName:(id)arg1 forCredentials:(id)arg2 ;
-(id)currencyNameForCredentials:(id)arg1 ;
-(void)setShowPayoffNotificationOnVirtualCoinsReceived:(BOOL)arg1 ;
-(void)setShowPayoffNotificationOnVirtualCoinsReceived:(BOOL)arg1 forCredentials:(id)arg2 ;
-(BOOL)shouldShowPayoffNotificationOnVirtualCoinsReceivedForCredentials:(id)arg1 ;
-(id)VCSConnector;
-(id)VCSConnectorForCredentials:(id)arg1 ;
-(id)requestDeltaOfCoinsWithCurrencyId:(id)arg1 notifyingDelegate:(id)arg2 ;
-(void)reportActionCompleted:(id)arg1 ;
-(void)reportActionCompleted:(id)arg1 forCredentials:(id)arg2 ;
-(BOOL)isCredentialsTokenValid:(id)arg1 ;
-(id)anonymousUserId;
-(void)verifyCookiePolicy;
-(SPCredentialsManager *)credentialsManager;
-(void)requestConfigurationsForCredentials:(id)arg1 ;
-(void)sendAdvertiserCallbackForCredentials:(id)arg1 ;
-(void)clearCredentials;
-(id)persistedUserId;
-(id)generatedRandomUserId;
-(void)persistUserId:(id)arg1 ;
-(void)triggerCurrencyNameNotificationWithNewName:(id)arg1 forCredentials:(id)arg2 ;
-(void)vcsPayoffReceived:(id)arg1 ;
-(void)showPayoffNotificationForAmount:(double)arg1 currencyName:(id)arg2 ;
-(NSMutableDictionary *)brandEngageClientsPool;
-(SPMediationCoordinator *)mediationCoordinator;
-(void)setMediationCoordinator:(SPMediationCoordinator *)arg1 ;
-(NSMutableDictionary *)vcsConnectorsPool;
-(void)setCredentialsManager:(SPCredentialsManager *)arg1 ;
-(void)setBrandEngageClientsPool:(NSMutableDictionary *)arg1 ;
-(void)setVcsConnectorsPool:(NSMutableDictionary *)arg1 ;
-(SPUser *)user;
-(void)setUser:(SPUser *)arg1 ;
-(id)init;
-(id)userData;
-(id)versionString;
@end

