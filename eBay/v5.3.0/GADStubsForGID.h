/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GADStubsForGID : NSObject {

	id _clientID;
	id _currentUser;
	id _authentication;
	id _idToken;
	id _refreshToken;

}

@property (nonatomic,retain) id clientID;                    //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) id currentUser;                 //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,retain) id authentication;              //@synthesize authentication=_authentication - In the implementation block
@property (nonatomic,retain) id idToken;                     //@synthesize idToken=_idToken - In the implementation block
@property (nonatomic,retain) id refreshToken;                //@synthesize refreshToken=_refreshToken - In the implementation block
+(BOOL)supportsCurrentUserKVO;
-(id)authentication;
-(void)setAuthentication:(id)arg1 ;
-(void)setIdToken:(id)arg1 ;
-(id)idToken;
-(void)setCurrentUser:(id)arg1 ;
-(id)currentUser;
-(void)setClientID:(id)arg1 ;
-(id)clientID;
-(void)setRefreshToken:(id)arg1 ;
-(id)refreshToken;
@end

