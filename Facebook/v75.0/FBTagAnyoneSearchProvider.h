/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBUserSession;

@interface FBTagAnyoneSearchProvider : NSObject {

	NSString* _actorOverrideFBID;
	NSString* _searchContext;
	FBUserSession* _session;

}

@property (nonatomic,readonly) FBUserSession * session;              //@synthesize session=_session - In the implementation block
-(id)initWithSession:(id)arg1 actorOverrideFBID:(id)arg2 searchContext:(id)arg3 ;
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(FBUserSession *)session;
@end
