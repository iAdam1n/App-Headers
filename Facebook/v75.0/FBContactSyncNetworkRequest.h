/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class FBContactSyncRecord, NSString, FBUserSession, FBCurrentCountryManager;

@interface FBContactSyncNetworkRequest : FBNetworkerRequest {

	FBContactSyncRecord* _insertedRecord;
	FBContactSyncRecord* _removedRecord;
	NSString* _importID;
	long long _flow;
	FBUserSession* _session;
	BOOL _isFullUpload;
	FBCurrentCountryManager* _countryManager;
	NSString* _JSONString;

}
-(id)networkRequest;
-(id)_contactsJSONString;
-(id)_paramsForRecordItem:(id)arg1 withModifier:(unsigned long long)arg2 ;
-(id)initWithCallbackPerformer:(id)arg1 importID:(id)arg2 flow:(long long)arg3 session:(id)arg4 insertedRecord:(id)arg5 removedRecord:(id)arg6 isFullUpload:(BOOL)arg7 ;
@end
