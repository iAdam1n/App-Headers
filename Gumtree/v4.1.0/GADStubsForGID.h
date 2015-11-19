/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(id)idToken;
-(void)setIdToken:(id)arg1 ;
-(void)setCurrentUser:(id)arg1 ;
-(void)setRefreshToken:(id)arg1 ;
-(id)refreshToken;
-(id)currentUser;
-(void)setClientID:(id)arg1 ;
-(id)clientID;
@end
