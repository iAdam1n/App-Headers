/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol MNAuthenticationManager;
@class FBUserSession, MNMessagingRegionHeaderHelper, FBSimpleNetworkerRequest, NSString;

@interface FBMInboxSeenMarker : NSObject <FBClassProvidable> {

	FBUserSession* _userSession;
	id<MNAuthenticationManager> _authManager;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	FBSimpleNetworkerRequest* _networkerRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 authManager:(id)arg2 messagingRegionHeaderHelper:(id)arg3 ;
-(void)cancel;
-(void)start;
@end

