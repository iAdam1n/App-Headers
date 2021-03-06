/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary, OASNetworkManager, OASAppCatalog, OASInstallManager, OASNanoInstallManager;

@interface OASInviteManager : NSObject {

	NSMutableDictionary* _inviteCompletionBlocks;
	OASNetworkManager* _networkManager;
	OASAppCatalog* _catalog;
	OASInstallManager* _installManager;
	OASNanoInstallManager* _nanoInstallManager;

}

@property (nonatomic,readonly) OASNetworkManager * networkManager;                      //@synthesize networkManager=_networkManager - In the implementation block
@property (nonatomic,__weak,readonly) OASAppCatalog * catalog;                          //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,readonly) OASInstallManager * installManager;                      //@synthesize installManager=_installManager - In the implementation block
@property (nonatomic,readonly) OASNanoInstallManager * nanoInstallManager;              //@synthesize nanoInstallManager=_nanoInstallManager - In the implementation block
-(OASNetworkManager *)networkManager;
-(void)unsubscribeFromApp:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithAppCatalog:(id)arg1 installManager:(id)arg2 nanoInstallManager:(id)arg3 networkManager:(id)arg4 ;
-(void)getAppForInviteToken:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)acceptInviteWithInviteToken:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)acceptInviteWithInviteCode:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)attemptingToAcceptInviteForInviteToken:(id)arg1 ;
-(BOOL)attemptingToAcceptInviteForInviteCode:(id)arg1 ;
-(OASInstallManager *)installManager;
-(OASNanoInstallManager *)nanoInstallManager;
-(void)_addCompletionBlock:(id)arg1 toSetForInviteDatum:(id)arg2 ;
-(void)_acceptInviteTokenCallback:(id)arg1 response:(id)arg2 ;
-(void)_acceptInviteCodeCallback:(id)arg1 response:(id)arg2 ;
-(id)init;
-(OASAppCatalog *)catalog;
@end

