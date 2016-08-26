/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:12 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GameCenterSignonDelegate : NSObject {

	BOOL _wasAuthenticated;
	SEL _signinSelector;
	SEL _signoutSelector;
	id _networkManagerDelegate;

}

@property (assign,nonatomic) BOOL wasAuthenticated;                  //@synthesize wasAuthenticated=_wasAuthenticated - In the implementation block
@property (assign,nonatomic) SEL signinSelector;                     //@synthesize signinSelector=_signinSelector - In the implementation block
@property (assign,nonatomic) SEL signoutSelector;                    //@synthesize signoutSelector=_signoutSelector - In the implementation block
@property (nonatomic,retain) id networkManagerDelegate;              //@synthesize networkManagerDelegate=_networkManagerDelegate - In the implementation block
-(void)setWasAuthenticated:(BOOL)arg1 ;
-(void)setNetworkManagerDelegate:(id)arg1 ;
-(void)setSigninSelector:(SEL)arg1 ;
-(void)setSignoutSelector:(SEL)arg1 ;
-(id)localPlayerId;
-(void)postStateChangedNotification:(unsigned long long)arg1 ;
-(void)handleSignIn;
-(BOOL)wasAuthenticated;
-(id)networkManagerDelegate;
-(SEL)signinSelector;
-(id)initWithDelegate:(id)arg1 signinSelector:(SEL)arg2 signoutSelector:(SEL)arg3 ;
-(BOOL)socialSignonEnabled;
-(void)registerForAuthenticationNotification:(id)arg1 selector:(SEL)arg2 ;
-(void)handleAuthenticationChange:(id)arg1 ;
-(void)signoutWithDelegate:(id)arg1 selector:(SEL)arg2 ;
-(void)handleSigninResult:(id)arg1 ;
-(void)handleSignoutResult:(id)arg1 ;
-(void)trackSignon:(id)arg1 status:(id)arg2 errorInfo:(id)arg3 successInfo:(id)arg4 ;
-(SEL)signoutSelector;
-(id)init;
-(BOOL)isAuthenticated;
@end
