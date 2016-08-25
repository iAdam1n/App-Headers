/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GGLInstanceIDDelegate;
@class GGLInstanceIDConfig, GGLInstanceIDTokenManager, GGLInstanceIDKeyPairStore;

@interface GGLInstanceID : NSObject {

	GGLInstanceIDConfig* _config;
	GGLInstanceIDTokenManager* _tokenManager;
	GGLInstanceIDKeyPairStore* _keyPairStore;
	id<GGLInstanceIDDelegate> _refreshTokenDelegate;

}

@property (nonatomic,__weak,readonly) id<GGLInstanceIDDelegate> refreshTokenDelegate; 
@property (nonatomic,retain) GGLInstanceIDConfig * config;                                         //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) GGLInstanceIDTokenManager * tokenManager;                             //@synthesize tokenManager=_tokenManager - In the implementation block
@property (nonatomic,retain) GGLInstanceIDKeyPairStore * keyPairStore;                             //@synthesize keyPairStore=_keyPairStore - In the implementation block
@property (assign,nonatomic,__weak) id<GGLInstanceIDDelegate> refreshTokenDelegate;                //@synthesize refreshTokenDelegate=_refreshTokenDelegate - In the implementation block
+(void)notifyTokenRefresh;
+(void)notifyIdentityLost;
+(id)replaceAPNSDataWithString:(id)arg1 ;
+(BOOL)verifyNewTokenOptions:(id)arg1 withConfig:(id)arg2 ;
+(id)sharedInstance;
-(double)waitIntervalForCheckinRefresh;
-(id)appInstanceID:(id*)arg1 ;
-(void)fetchCheckinInfoWithHandler:(/*^block*/id)arg1 ;
-(void)handleTokenRefreshWithDelayInSeconds:(int)arg1 ;
-(void)invokeTokenRefreshCallbackWithDelayInSeconds:(int)arg1 ;
-(void)handleCommandResetWithDelayInSeconds:(int)arg1 ;
-(void)handleCommandResetFullWithDelayInSeconds:(int)arg1 ;
-(void)handleRefreshMessage:(id)arg1 withSubType:(id)arg2 ;
-(void)startWithConfig:(id)arg1 ;
-(void)tokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 options:(id)arg3 handler:(/*^block*/id)arg4 ;
-(GGLInstanceIDTokenManager *)tokenManager;
-(GGLInstanceIDKeyPairStore *)keyPairStore;
-(void)asyncInvokeGetTokenHandler:(/*^block*/id)arg1 withToken:(id)arg2 error:(id)arg3 ;
-(void)asyncLoadKeyPairWithHandler:(/*^block*/id)arg1 ;
-(void)asyncInvokeDeleteTokenHandler:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)asyncInvokeGetIDHandler:(/*^block*/id)arg1 withIdentity:(id)arg2 error:(id)arg3 ;
-(void)asyncInvokeDeleteIDHandler:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)setupLogger:(char)arg1 ;
-(void)setupTokenManagerWithConfig:(id)arg1 ;
-(void)setupKeyPairManager;
-(void)setupDelegate:(id)arg1 ;
-(void)setupNotificationListeners;
-(void)setTokenManager:(GGLInstanceIDTokenManager *)arg1 ;
-(void)setKeyPairStore:(GGLInstanceIDKeyPairStore *)arg1 ;
-(void)setRefreshTokenDelegate:(id<GGLInstanceIDDelegate>)arg1 ;
-(void)didReceiveGCMMessage:(id)arg1 ;
-(void)deleteTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)getIDWithHandler:(/*^block*/id)arg1 ;
-(void)deleteIDWithHandler:(/*^block*/id)arg1 ;
-(id<GGLInstanceIDDelegate>)refreshTokenDelegate;
-(void)dealloc;
-(GGLInstanceIDConfig *)config;
-(void)setConfig:(GGLInstanceIDConfig *)arg1 ;
-(void)stopAllRequests;
@end

