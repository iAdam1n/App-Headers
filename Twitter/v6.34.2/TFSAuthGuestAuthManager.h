/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TFSAuthGuestAuthAPI, TFSAuthCredentialStateTransitionDelegate;
@class NSObject, NSMutableArray, NSString, TFSAuthConsumerCredential;

@interface TFSAuthGuestAuthManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _pendingSigningRequests;
	NSMutableArray* _pendingHandleResponseCompletionBlocks;
	NSString* _appToken;
	NSString* _guestToken;
	BOOL _needRefreshGuestToken;
	unsigned long long _guestAuthRetryCount;
	BOOL _isAttemptingTokenAcquisition;
	unsigned long long _maxGuestAuthRetryAttempts;
	TFSAuthConsumerCredential* _oAuthConsumerCredential;
	id<TFSAuthGuestAuthAPI> _guestAuthAPI;
	id<TFSAuthCredentialStateTransitionDelegate> _credentialStateTransitionDelegate;
	long long _authState;

}

@property (assign,nonatomic) unsigned long long maxGuestAuthRetryAttempts;                                                       //@synthesize maxGuestAuthRetryAttempts=_maxGuestAuthRetryAttempts - In the implementation block
@property (nonatomic,retain) TFSAuthConsumerCredential * oAuthConsumerCredential;                                                //@synthesize oAuthConsumerCredential=_oAuthConsumerCredential - In the implementation block
@property (assign,nonatomic,__weak) id<TFSAuthGuestAuthAPI> guestAuthAPI;                                                        //@synthesize guestAuthAPI=_guestAuthAPI - In the implementation block
@property (assign,nonatomic,__weak) id<TFSAuthCredentialStateTransitionDelegate> credentialStateTransitionDelegate;              //@synthesize credentialStateTransitionDelegate=_credentialStateTransitionDelegate - In the implementation block
@property (assign,nonatomic) long long authState;                                                                                //@synthesize authState=_authState - In the implementation block
-(void)setOAuthConsumerCredential:(TFSAuthConsumerCredential *)arg1 ;
-(void)setGuestAuthAPI:(id<TFSAuthGuestAuthAPI>)arg1 ;
-(id<TFSAuthCredentialStateTransitionDelegate>)credentialStateTransitionDelegate;
-(void)setCredentialStateTransitionDelegate:(id<TFSAuthCredentialStateTransitionDelegate>)arg1 ;
-(id)_oAuthConsumerKey;
-(id)_oAuthConsumerSecret;
-(TFSAuthConsumerCredential *)oAuthConsumerCredential;
-(void)_enqueuePendingSigningRequest:(id)arg1 ;
-(void)setAuthState:(long long)arg1 ;
-(BOOL)_canRetry;
-(void)_enqueueHandleResponseCompletionBlock:(/*^block*/id)arg1 ;
-(void)_acquireAppToken;
-(void)_acquireGuestToken;
-(void)_acquireTokens;
-(void)_notifyWaitingRequestsOfSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_notifyWaitingSigningRequestsOfSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_notifyWaitingHandleResponseCompletionBlocksOfSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)signRequestWithUrl:(id)arg1 parameters:(id)arg2 method:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleGuestAuthRequestResponse:(id)arg1 authErrorCode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)maxGuestAuthRetryAttempts;
-(void)setMaxGuestAuthRetryAttempts:(unsigned long long)arg1 ;
-(id<TFSAuthGuestAuthAPI>)guestAuthAPI;
-(long long)authState;
-(id)init;
@end

