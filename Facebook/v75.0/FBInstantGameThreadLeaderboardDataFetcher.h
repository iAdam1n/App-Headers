/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInstantGameLeaderboardFetcher.h>

@protocol FBServiceTransactionMutating;
@class FBUserSession, NSString;

@interface FBInstantGameThreadLeaderboardDataFetcher : NSObject <FBInstantGameLeaderboardFetcher> {

	FBUserSession* _session;
	NSString* _threadID;
	NSString* _gameAppID;
	id<FBServiceTransactionMutating> _requestToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchGameLeaderboardWithCallbackQueue:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 threadID:(id)arg2 gameAppID:(id)arg3 ;
@end
