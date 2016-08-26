/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GGLInstanceIDStore, GGLInstanceIDCheckinService, NSMutableDictionary;

@interface GGLInstanceIDAuthService : NSObject {

	BOOL _allowMissingAPNSToken;
	BOOL _isCheckinInProgress;
	GGLInstanceIDStore* _store;
	GGLInstanceIDCheckinService* _checkinService;
	NSMutableDictionary* _IIDAuthTokenBySenderID;

}

@property (assign,nonatomic) BOOL allowMissingAPNSToken;                                //@synthesize allowMissingAPNSToken=_allowMissingAPNSToken - In the implementation block
@property (nonatomic,retain) GGLInstanceIDStore * store;                                //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) GGLInstanceIDCheckinService * checkinService;              //@synthesize checkinService=_checkinService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * IIDAuthTokenBySenderID;              //@synthesize IIDAuthTokenBySenderID=_IIDAuthTokenBySenderID - In the implementation block
@property (assign) BOOL isCheckinInProgress;                                            //@synthesize isCheckinInProgress=_isCheckinInProgress - In the implementation block
-(void)fetchCheckinInfoWithHandler:(/*^block*/id)arg1 ;
-(void)setAllowMissingAPNSToken:(BOOL)arg1 ;
-(id)initWithCheckinService:(id)arg1 store:(id)arg2 ;
-(GGLInstanceIDCheckinService *)checkinService;
-(id)checkinPreferences;
-(BOOL)hasValidCheckinInfo;
-(NSMutableDictionary *)IIDAuthTokenBySenderID;
-(id)cachedIIDAuthTokenForAuthorizedEntity:(id)arg1 ;
-(id)checkinAuthToken;
-(void)stopCheckinRequest;
-(void)saveIIDAuthToken:(id)arg1 forAuthorizedEntity:(id)arg2 ;
-(BOOL)allowMissingAPNSToken;
-(void)setCheckinService:(GGLInstanceIDCheckinService *)arg1 ;
-(void)setIIDAuthTokenBySenderID:(NSMutableDictionary *)arg1 ;
-(BOOL)isCheckinInProgress;
-(void)setIsCheckinInProgress:(BOOL)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(GGLInstanceIDStore *)store;
-(void)setStore:(GGLInstanceIDStore *)arg1 ;
@end
