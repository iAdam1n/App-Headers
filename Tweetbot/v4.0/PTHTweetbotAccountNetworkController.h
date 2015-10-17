/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:49 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class PTHTweetbotAccountController, PTHTweetbotAccount, PTHTweetbotSyncService;

@interface PTHTweetbotAccountNetworkController : NSObject {

	PTHTweetbotAccountController* _accountController;
	PTHTweetbotAccount* _account;
	PTHTweetbotSyncService* _syncService;
	unsigned long long _autoRefreshCounter;
	BOOL _needsRefresh;

}
-(void)_didBecomeActive;
-(id)initWithAccountController:(id)arg1 ;
-(void)refreshAllDelayed;
-(void)reachabilityDidChange;
-(void)_updateSyncService;
-(BOOL)_updateStreaming;
-(void)_streamingBusy;
-(void)_streamingChurn;
-(void)_streamingBackfillFailed;
-(void)_willResignActive;
-(void)_minuteHeartbeat;
-(void)_refreshIfNeeded;
-(void)dealloc;
-(id)init;
@end
