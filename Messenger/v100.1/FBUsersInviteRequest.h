/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class NSString, FBCurrentCountryManager, FBUserSession;

@interface FBUsersInviteRequest : FBNetworkerRequest {

	NSString* _credentialString;
	FBCurrentCountryManager* _countryManager;
	long long _contactImporterFlow;
	FBUserSession* _session;

}
-(id)networkRequest;
-(id)initWithCredentials:(id)arg1 callbackPerformer:(id)arg2 contactImporterFlow:(long long)arg3 session:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
