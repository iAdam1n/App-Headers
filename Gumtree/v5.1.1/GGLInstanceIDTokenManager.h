/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GGLInstanceIDRegistrar, GGLInstanceIDStore;

@interface GGLInstanceIDTokenManager : NSObject {

	BOOL _allowMissingAPNSToken;
	GGLInstanceIDRegistrar* _registrar;
	GGLInstanceIDStore* _instanceIDStore;

}

@property (nonatomic,retain) GGLInstanceIDRegistrar * registrar;                //@synthesize registrar=_registrar - In the implementation block
@property (assign,nonatomic) BOOL allowMissingAPNSToken;                        //@synthesize allowMissingAPNSToken=_allowMissingAPNSToken - In the implementation block
@property (nonatomic,retain) GGLInstanceIDStore * instanceIDStore;              //@synthesize instanceIDStore=_instanceIDStore - In the implementation block
-(id)tokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 options:(id)arg3 ;
-(BOOL)invalidateCachedToken:(id)arg1 withAuthorizedEntity:(id)arg2 scope:(id)arg3 options:(id)arg4 ;
-(void)fetchNewTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 options:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)deleteTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)deleteAllTokensWithKeyPair:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setAllowMissingAPNSToken:(BOOL)arg1 ;
-(BOOL)allowMissingAPNSToken;
-(GGLInstanceIDStore *)instanceIDStore;
-(BOOL)shouldResetTokenOnAppVersion;
-(BOOL)shouldResetTokenOnAPNSToken:(id)arg1 isSandbox:(BOOL)arg2 ;
-(BOOL)deleteAllTokensLocallyWithError:(id*)arg1 ;
-(void)setRegistrar:(GGLInstanceIDRegistrar *)arg1 ;
-(void)setInstanceIDStore:(GGLInstanceIDStore *)arg1 ;
-(GGLInstanceIDRegistrar *)registrar;
-(id)init;
@end
