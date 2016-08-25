/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSOperationQueue, GADSignedInUser, NSTimer;

@interface GADTokenDispenser : NSObject {

	NSMutableDictionary* _cachedTokens;
	NSMutableDictionary* _cachedTokenUsers;
	NSOperationQueue* _tokenRequestQueue;
	GADSignedInUser* _currentUser;
	BOOL _observingIdentitySDK;
	NSTimer* _refreshTimer;
	double _minLifespan;

}
+(id)sharedInstance;
-(void)refreshSignedInUser;
-(void)refreshToken:(id)arg1 ;
-(void)refreshTokens;
-(void)rescheduleRefreshes;
-(void)requestTokenForUser:(id)arg1 ;
-(void)removeCacheEntryForUser:(id)arg1 ;
-(void)setCacheEntry:(id)arg1 forUser:(id)arg2 ;
-(void)cacheTokenFromResponseData:(id)arg1 user:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)token;
-(void)setCurrentUser:(id)arg1 ;
@end

