/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FlurryWatchConnectivityDelegate;
@class FlurryWatchConnectivityProxy, WCSession;

@interface FlurryWatchConnectivity : NSObject {

	BOOL _disabled;
	BOOL _disableTransferInfo;
	id<FlurryWatchConnectivityDelegate> _delegate;
	Class _wcsession;
	FlurryWatchConnectivityProxy* _connectivityProxy;
	WCSession* _session;

}

@property (assign,nonatomic,__weak) id<FlurryWatchConnectivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) Class wcsession;                                                  //@synthesize wcsession=_wcsession - In the implementation block
@property (retain) FlurryWatchConnectivityProxy * connectivityProxy;                           //@synthesize connectivityProxy=_connectivityProxy - In the implementation block
@property (assign,nonatomic,__weak) WCSession * session;                                       //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                    //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL disableTransferInfo;                                         //@synthesize disableTransferInfo=_disableTransferInfo - In the implementation block
+(id)defaultConnectivty;
-(void)disableWatchConnectivity;
-(void)disableTransferFlurryInfo;
-(void)setWcsession:(Class)arg1 ;
-(Class)wcsession;
-(void)setConnectivityProxy:(FlurryWatchConnectivityProxy *)arg1 ;
-(void)cacheAndReplaceSessionDelegate;
-(void)setupKVO;
-(void)removeKVO;
-(void)restoreCachedSessionDelegate;
-(BOOL)disableTransferInfo;
-(FlurryWatchConnectivityProxy *)connectivityProxy;
-(void)setDisableTransferInfo:(BOOL)arg1 ;
-(void)checkNewDelegate:(id)arg1 ;
-(void)setDelegate:(id<FlurryWatchConnectivityDelegate>)arg1 ;
-(id)init;
-(id<FlurryWatchConnectivityDelegate>)delegate;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(WCSession *)session;
-(void)setSession:(WCSession *)arg1 ;
-(void)activateSession;
-(void)transferUserInfo:(id)arg1 ;
-(void)setup;
-(void)teardown;
@end
