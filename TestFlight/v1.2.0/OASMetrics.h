/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class OASAuthenticationManager, SSMetricsController, MCProfileConnection, NSMutableArray, NSDate, NSDictionary, NSString;

@interface OASMetrics : NSObject {

	BOOL _inSession;
	OASAuthenticationManager* _authManager;
	SSMetricsController* _metricsController;
	MCProfileConnection* _profileConnection;
	NSMutableArray* _unsentEventDictionaries;
	NSDate* _sessionStartDate;
	NSDictionary* _extraStats;
	NSString* _clientIDCookieName;

}

@property (assign,nonatomic,__weak) OASAuthenticationManager * authManager;              //@synthesize authManager=_authManager - In the implementation block
@property (nonatomic,retain) SSMetricsController * metricsController;                    //@synthesize metricsController=_metricsController - In the implementation block
@property (nonatomic,readonly) MCProfileConnection * profileConnection;                  //@synthesize profileConnection=_profileConnection - In the implementation block
@property (nonatomic,retain) NSMutableArray * unsentEventDictionaries;                   //@synthesize unsentEventDictionaries=_unsentEventDictionaries - In the implementation block
@property (assign,nonatomic) BOOL inSession;                                             //@synthesize inSession=_inSession - In the implementation block
@property (nonatomic,retain) NSDate * sessionStartDate;                                  //@synthesize sessionStartDate=_sessionStartDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraStats;                           //@synthesize extraStats=_extraStats - In the implementation block
@property (nonatomic,retain) NSString * clientIDCookieName;                              //@synthesize clientIDCookieName=_clientIDCookieName - In the implementation block
+(id)sharedMetrics;
-(void)appDidBecomeActive;
-(void)userOpenedInviteType:(id)arg1 ;
-(void)userOpenedUpdateType:(id)arg1 app:(id)arg2 ;
-(OASAuthenticationManager *)authManager;
-(void)installCompleted:(BOOL)arg1 app:(id)arg2 ;
-(void)setAuthManager:(OASAuthenticationManager *)arg1 ;
-(void)appDidLaunchWithURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)appDidLaunch;
-(void)appWillResignActive;
-(void)appWillQuit;
-(void)buyButtonActivatedWithAction:(id)arg1 onApp:(id)arg2 ;
-(void)userDidInstallWatchKitBuild:(id)arg1 ;
-(void)userDidUninstallWatchKitBuild:(id)arg1 ;
-(id)loadCachedEventDictionaries;
-(id)loadCachedConfig;
-(NSMutableArray *)unsentEventDictionaries;
-(void)setUnsentEventDictionaries:(NSMutableArray *)arg1 ;
-(void)saveCachedEventDictionaries:(id)arg1 ;
-(void)saveCachedConfig:(id)arg1 ;
-(void)setClientIDCookieName:(NSString *)arg1 ;
-(void)startSessionWithEvent:(id)arg1 ;
-(void)endSessionWithEvent:(id)arg1 ;
-(void)insertEvent:(id)arg1 ;
-(void)viewDidAppear:(id)arg1 withApp:(id)arg2 ;
-(MCProfileConnection *)profileConnection;
-(NSString *)clientIDCookieName;
-(NSDictionary *)extraStats;
-(BOOL)inSession;
-(void)setInSession:(BOOL)arg1 ;
-(void)setSessionStartDate:(NSDate *)arg1 ;
-(NSDate *)sessionStartDate;
-(void)addSharedInfoToEvent:(id)arg1 ;
-(void)cacheEvent:(id)arg1 ;
-(void)systemDidAutoInstallWatchKitBuild:(id)arg1 ;
-(id)init;
-(void)flush;
-(void)viewDidAppear:(id)arg1 ;
-(id)cacheDirectory;
-(void)setConfig:(id)arg1 ;
-(void)setMetricsConfiguration:(id)arg1 ;
-(SSMetricsController *)metricsController;
-(void)setMetricsController:(SSMetricsController *)arg1 ;
@end

