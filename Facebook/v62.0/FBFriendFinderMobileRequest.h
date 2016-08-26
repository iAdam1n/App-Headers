/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSArray, NSNumber, NSString, FBUserSession, FBCurrentCountryManager;

@interface FBFriendFinderMobileRequest : FBNetworkerRequest {

	NSArray* _contacts;
	NSNumber* _cursor;
	unsigned long long _batchSize;
	unsigned long long _pageSize;
	unsigned long long _batchIndex;
	NSString* _sessionID;
	FBUserSession* _session;
	long long _flow;
	FBCurrentCountryManager* _countryManager;

}
+(id)newWithContacts:(id)arg1 batchSize:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 batchIndex:(unsigned long long)arg4 sessionID:(id)arg5 session:(id)arg6 flow:(long long)arg7 callbackPerformer:(id)arg8 ;
+(id)newWithRequest:(id)arg1 cursor:(id)arg2 ;
-(id)networkRequest;
-(id)initWithContacts:(id)arg1 cursor:(id)arg2 batchSize:(unsigned long long)arg3 pageSize:(unsigned long long)arg4 batchIndex:(unsigned long long)arg5 sessionID:(id)arg6 session:(id)arg7 flow:(long long)arg8 callbackPerformer:(id)arg9 ;
-(id)init;
@end
