/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLConnectionSyncStoreRequestProvider.h>

@class NSString;

@interface FBBasicAlbumTokenRequestProvider : NSObject <FBGraphQLConnectionSyncStoreRequestProvider> {

	NSString* _userGraphQLID;
	NSString* _accessTokenOverride;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserGraphQLID:(id)arg1 ;
-(id)requestProviderID;
-(id)connectionSyncStore:(id)arg1 nextRequestAfter:(id)arg2 ;
-(id)connectionSyncStore:(id)arg1 previousRequestBefore:(id)arg2 ;
-(id)connectionSyncStore:(id)arg1 findRequest:(id)arg2 ;
-(id)connectionPageForResponse:(id)arg1 ;
-(const FBGraphQLFieldSetRef)edgeFieldSet;
-(id)initWithUserGraphQLID:(id)arg1 accessTokenOverride:(id)arg2 ;
@end
