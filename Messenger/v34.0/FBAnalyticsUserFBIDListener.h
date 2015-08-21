/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIApplication, FBAnalytics, FBAPISessionStore, FBUserSession;

@interface FBAnalyticsUserFBIDListener : NSObject {

	UIApplication* _application;
	FBAnalytics* _analytics;
	FBAPISessionStore* _sessionStore;
	FBUserSession* _session;

}

@property (nonatomic,readonly) UIApplication * application;                 //@synthesize application=_application - In the implementation block
@property (assign,nonatomic,__weak) FBAnalytics * analytics;                //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) FBAPISessionStore * sessionStore;              //@synthesize sessionStore=_sessionStore - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                       //@synthesize session=_session - In the implementation block
-(void)_didChangeCurrentSession:(id)arg1 ;
-(void)unobserveSessionStore;
-(void)observeSessionStore;
-(void)setSessionStore:(FBAPISessionStore *)arg1 ;
-(void)setAnalytics:(FBAnalytics *)arg1 ;
-(FBAnalytics *)analytics;
-(FBAPISessionStore *)sessionStore;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(UIApplication *)application;
@end

